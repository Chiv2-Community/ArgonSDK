import os
import json
import shutil
import subprocess
import argparse

PROJECT_NAME = 'TBL'
MOD_ROOT_DEFAULT = '/Game/Mods/AgMods/'

def run_cook(uproject_path, ue4_root, use_popen=False):
    assert uproject_path, 'Provide project path'
    assert ue4_root, 'Provide engine root folder'
    """Runs the UE4 cooking process."""
    cook_cmd = [
        '{0}Binaries/Win64/UE4Editor-Cmd.exe'.format(ue4_root),
        uproject_path,
        '-run=cook',
        '-iterate',
        '-targetplatform=WindowsNoEditor'
    ]
    # print(cook_cmd)
    use_popen and subprocess.call(cook_cmd,shell=False) or subprocess.Popen(cook_cmd,shell=False) 

def create_filelist_file(uproject_path, mod_path, filelist_path):  

    mod_content_dir = mod_path.split('/Game/')[-1]  
    source_directory = os.path.join(
        os.path.dirname(uproject_path),
        "Saved",
        "Cooked",
        "WindowsNoEditor",
        PROJECT_NAME,
        "Content",
        mod_content_dir
    ).replace("/", "\\")

    destination_content_directory = os.path.join("..", "..", "..", PROJECT_NAME, 'Content').replace("/", "\\")
    destination_directory = os.path.join(destination_content_directory, mod_content_dir).replace("/", "\\")

    repl_path = ''
    file_cnt = 0

    if os.path.exists(os.path.join(source_directory, '_Content')):
       repl_path = os.path.join(source_directory, '_Content')

    with open(filelist_path, 'w') as filelist:
        for root, dirs, files in os.walk(source_directory):
            relative_path = os.path.relpath(root, source_directory)
            # Avoid empty relative paths
            if relative_path == ".":
                relative_path = ""

            if repl_path != '' and repl_path in root:
                dest_path = os.path.join(destination_content_directory, os.path.relpath(root, repl_path))
            else:
                dest_path = os.path.join(destination_directory, relative_path)

            file_cnt = file_cnt + len(files)
            for idx, file in enumerate(files):                
                # print(os.path.relpath(os.path.join(root, file), source_directory), '->', os.path.join(dest_path, file))
                print(idx,'\t', os.path.join(dest_path, file))
                filelist.write('"{}" "{}"\n'.format(os.path.join(root, file), os.path.join(dest_path, file)))
    return file_cnt

def process_mod(mod_name, mod_dir, uproject_path, ue4_root, dest_dir):
    """Process an individual mod - create pak at location."""
    assert uproject_path, 'Provide project path'
    assert ue4_root, 'Provide engine root folder'
    if not '/Game/' in mod_dir:
        print ('invalid mod dir')
        return
    
    # print (source)
    # print(destination)
    if not os.path.exists(dest_dir):
        os.makedirs(dest_dir)
    filelist_path = os.path.join(dest_dir, 'filelist.txt')
    file_cnt = create_filelist_file(uproject_path, mod_dir, filelist_path)

    UNREALPAK_EXE = os.path.join(ue4_root, 'Binaries/Win64/UnrealPak.exe')
    PAK_FILE = os.path.join(dest_dir, mod_name+".pak")
    devnull = open(os.devnull, 'w')
    subprocess.call([UNREALPAK_EXE, PAK_FILE, "-create="+filelist_path, "-compress"], shell=True, stdout=devnull)
    subprocess.call([UNREALPAK_EXE, PAK_FILE, "-List"], stdout=open(os.path.join(dest_dir, mod_name+'.txt'), 'w'), shell=True)
    print('{} files added to "{}"'.format(file_cnt, PAK_FILE))

if __name__ == '__main__':

    parser = argparse.ArgumentParser()
    # parser.add_argument('action', default='ContentRepl', type=str, help='cook, pak')
    subparsers = parser.add_subparsers(help='cook, pak', dest='action')
    parser_cook = subparsers.add_parser('cook', help='cook project')
    parser_cook.add_argument('uproject_path', type=str, nargs='?', help='path to .uproject file')
    parser_cook.add_argument('ue4_root', type=str, nargs='?', help='path to ue4 ("H:/epic/UE_4.25/Engine/")')
    parser_cook.add_argument('-s', action='store', nargs='?', metavar='<file.json>', help='Store uproject_path, ue4_root (build.json by default)', default='s' )
    parser_cook.add_argument('-l', nargs='?', metavar='<file.json>', help='Load paths from file (build.json by default)', default='l' )

    parser_pak = subparsers.add_parser('pak', help='pak a mod')
    parser_pak.add_argument('mod_name', type=str, help='Name of the mod (resulting pak) (or comma separated list)')
    parser_pak.add_argument('mod_dir', nargs='?', type=str, help='mod directory, base directory (ends with /) or comma-separated list. defaults to "/Game/Mods/AgMods/<mod_name>"')
    parser_pak.add_argument('dest_dir', type=str, nargs='?', help='Output directory. Will be created on spawn')
    parser_pak.add_argument('uproject_path', type=str, nargs='?', help='path to .uproject file')
    parser_pak.add_argument('ue4_root', type=str, nargs='?', help='path to ue4 ("H:/epic/UE_4.25/Engine/")')
    parser_pak.add_argument('-s', nargs='?', metavar='FILE', help='Store mod_dir(/), dest_dir, uproject_path, ue4_root (build.json by default)', default='s' )
    parser_pak.add_argument('-l', nargs='?', metavar='FILE', help='Load paths from file (build.json by default)', default='l' )
    args, leftover = parser.parse_known_args()
    # cargs, leftover = parser.parse_known_args()

    # Save config
    if args.s != 's':
        filename = args.s and ('.json' in args.s and args.s or args.s+'.json') or 'build.json'
        print('Saving', filename, args)
        config = {
            "uproject_path" : args.uproject_path,
            "ue4_root" : args.ue4_root,
            "mod_dir" : None,
            "dest_dir" : hasattr(args, 'dest_dir') and args.dest_dir or None
        }
        if hasattr(args, 'mod_dir'):
            if args.mod_dir and args.mod_dir[-1] == '/':
                config['mod_dir'] = args.mod_dir

        with open(filename, 'w') as f:
            json.dump(config, f, indent=2)
    
    # Load config
    if args.l != 'l':
        filename = args.l and ('.json' in args.l and args.l or args.l+'.json') or 'build.json'
        # the merged object
        with open(filename, 'r') as f:
            loaded = json.load(f)
            valid_cli = {k: v for k, v in vars(args).items() if v is not None} # valid entries
            valid_file = {k: v for k, v in loaded.items() if v is not None and k not in valid_cli.keys()} # valid entries not set in main one
            print('Loaded', filename, json.dumps(valid_file, indent=1))
            valid_cli.update(valid_file)
            args = argparse.Namespace(**valid_cli)

    if args.action == 'cook':   
        run_cook(
            args.uproject_path,
            args.ue4_root,
            True
        )

    if args.action == 'pak':    
        mod_names = [str(item) for item in args.mod_name.split(',')]
        if args.mod_dir is None:
            mod_dirs = [os.path.join(MOD_ROOT_DEFAULT, name) for name in mod_names]
        else:
            mod_dirs = [str(item) for item in args.mod_dir.split(',')]
            if len(mod_dirs) == 1 and mod_dirs[0][-1] == '/': # use directory as base
                mod_dirs = [os.path.join(MOD_ROOT_DEFAULT, name) for name in mod_names]

        assert len(mod_dirs) == len(mod_names), 'Provide mod directories or mod base path ending with /'
        for name, dir in list(zip(mod_names, mod_dirs)):
            print('Mod "{}": "{}"'.format(name, dir))
            process_mod(
                name,
                dir,
                args.uproject_path,
                args.ue4_root,
                args.dest_dir
            )
