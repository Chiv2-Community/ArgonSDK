import os
import shutil
import subprocess
import argparse

PROJECT_NAME = 'TBL'
PROJ_PATH_DEFAULT = 'M:/chivmodding_i/SDK/ArgonSDK/TBL.uproject'
UE4_PATH_DEFAULT = 'H:/epic/UE_4.25/Engine/'
OUTPUT_DIR_DEFAULT = 'M:/chivmodding_i/SDK/ArgonSDK/Scripts'
MOD_ROOT_DEFAULT = '/Game/Mods/AgMods/'

def run_cook(uproject_path, ue4_root):
    """Runs the UE4 cooking process."""
    cook_cmd = [
        '{0}Binaries/Win64/UE4Editor-Cmd.exe'.format(ue4_root),
        uproject_path,
        '-run=cook',
        '-iterate',
        '-targetplatform=WindowsNoEditor'
    ]
    # print(cook_cmd)
    subprocess.call(cook_cmd,shell=False)

def create_filelist_file(cooked_content_dir, mod_path, filelist_path):  
    mod_content_dir = mod_path.split('/Game/')[-1]  
    source_directory = os.path.join(cooked_content_dir, mod_content_dir).replace("/", "\\")
    destination_content_directory = os.path.join("..", "..", "..", PROJECT_NAME, 'Content').replace("/", "\\")
    destination_directory = os.path.join(destination_content_directory, mod_content_dir).replace("/", "\\")
    
    repl_path = ''
    file_cnt = 0
    with open(filelist_path, 'w') as filelist:
        for root, dirs, files in os.walk(source_directory):
            relative_path = os.path.relpath(root, source_directory)
            # Avoid empty relative paths
            if relative_path == ".":
                relative_path = ""
            if os.path.basename(root) == "_Content":
                repl_path = root
            
            if repl_path is not '' and repl_path in root:
                dest_path = os.path.join(destination_content_directory, os.path.relpath(root, repl_path))
            else:
                dest_path = os.path.join(destination_directory, relative_path)

            file_cnt = file_cnt + len(files)
            for file in files:                
                print(os.path.join(dest_path, file))
                filelist.write('"{}" "{}"\n'.format(os.path.join(root, file), os.path.join(dest_path, file)))
    return file_cnt

def process_mod(mod_name, mod_dir, uproject_path, ue4_root, dest_dir):
    """Process an individual mod - cook, pak, and copy."""
    if not '/Game/' in mod_dir:
        print ('invalid mod dir')
        return
    
    mod_content_dir = mod_dir.split('/Game/')[-1]
    sdk_root = os.path.dirname(uproject_path)
    source = os.path.join(sdk_root, 'Saved', 'Cooked', 'WindowsNoEditor', PROJECT_NAME, 'Content', mod_content_dir).replace("/", "\\")
    destination = os.path.join("..", "..", "..", PROJECT_NAME, 'Content', mod_content_dir).replace("/", "\\")
    cooked_source = os.path.join(sdk_root, 'Saved', 'Cooked', 'WindowsNoEditor', PROJECT_NAME, 'Content')

    # print (source)
    # print(destination)
    if not os.path.exists(dest_dir):
        os.makedirs(dest_dir)
    filelist_path = os.path.join(dest_dir, 'filelist.txt')
    file_cnt = create_filelist_file(cooked_source, mod_dir, filelist_path)

    UNREALPAK_EXE = '{0}Binaries/Win64/UnrealPak.exe'.format(ue4_root)
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
    parser_cook.add_argument('uproject_path', type=str, nargs='?', default=PROJ_PATH_DEFAULT, help='path to .uproject file')
    parser_cook.add_argument('ue4_root', type=str, nargs='?', default=UE4_PATH_DEFAULT, help='path to ue4 ("H:/epic/UE_4.25/Engine/")')

    parser_pak = subparsers.add_parser('pak', help='pak a mod')
    parser_pak.add_argument('mod_name', type=str, help='Name of the mod (resulting pak) (or comma separated list)')
    parser_pak.add_argument('mod_dir', nargs='?', type=str, help='mod directory, base directory (ends with /) or comma-separated list. defaults to "/Game/Mods/AgMods/<mod_name>"')
    parser_pak.add_argument('dest_dir', type=str, nargs='?', default=OUTPUT_DIR_DEFAULT, help='Output directory. Will be created on spawn')

    parser_pak.add_argument('uproject_path', type=str, nargs='?', default=PROJ_PATH_DEFAULT, help='path to .uproject file')
    parser_pak.add_argument('ue4_root', type=str, nargs='?', default=UE4_PATH_DEFAULT, help='path to ue4 ("H:/epic/UE_4.25/Engine/")')
    args, leftover = parser.parse_known_args()
    cargs, leftover = parser.parse_known_args()

    if args.action == 'cook':   
        run_cook(
            args.uproject_path,
            args.ue4_root,
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