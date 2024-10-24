import os
import shutil
import subprocess
import argparse


# testbuild.main("ModMenu", "M:/chivmodding_i/SDK/ArgonSDK/TBL.uproject", "M:/chivmodding_i/SDK/ArgonSDK/", "H:/epic/UE_4.25/Engine/", "M:/chivmodding_i/SDK/ArgonSDK/", "H:/epic/UE_4.25/Engine/", "false")

PROJECT_NAME = 'TBL'

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

def create_filelist(source_directory, destination_directory, filelist_path):
    """
    Creates a filelist for UnrealPak with each subfolder from the input directory added separately.
    
    Args:
    - source_directory (str): The base directory of the source cooked assets.
    - destination_directory (str): The base directory for the destination structure.
    - filelist_path (str): The path to save the filelist.txt.
    """
    with open(filelist_path, 'w') as filelist:
        for root, dirs, files in os.walk(source_directory):
            relative_path = os.path.relpath(root, source_directory)
            # Avoid empty relative paths
            if relative_path == ".":
                relative_path = ""
            if os.path.dirname(destination_directory) == "_Content":
                print('content repl', destination_directory)
            dest_path = os.path.join(destination_directory, relative_path)#.replace("\\", "/")
            src_path = os.path.join(root, "*.*")#.replace("\\", "/")
            for file in files:
                filelist.write('"{}" "{}"\n'.format(os.path.join(root, file), os.path.join(dest_path, file)))

def process_mod(mod_name, mod_dir, uproject_path, ue4_root, dest_dir):
    """Process an individual mod - cook, pak, and copy."""
    if not '/Game/' in mod_dir:
        print ('invalid mod dir')
        return
    
    mod_content_dir = mod_dir.split('/Game/')[-1]
    print(mod_content_dir)
    sdk_root = os.path.dirname(uproject_path)
    source = os.path.join(sdk_root, 'Saved', 'Cooked', 'WindowsNoEditor', PROJECT_NAME, 'Content', mod_content_dir).replace("/", "\\")
    destination = os.path.join("..", "..", "..", PROJECT_NAME, 'Content', mod_content_dir).replace("/", "\\")

    print (source)
    print(destination)
    if not os.path.exists(dest_dir):
        os.makedirs(dest_dir)
    filelist_path = os.path.join(dest_dir, 'filelist.txt')
    create_filelist(source, destination, filelist_path)

    UNREALPAK_EXE = '{0}Binaries/Win64/UnrealPak.exe'.format(ue4_root)
    PAK_FILE = os.path.join(dest_dir, mod_name+".pak")
    # Run UnrealPak to create the pak file
    subprocess.call([UNREALPAK_EXE, PAK_FILE, "-create="+filelist_path, "-compress"], shell=True)
    
    # List the contents of the pak file
    subprocess.call([UNREALPAK_EXE, PAK_FILE, "-List"], stdout=open(os.path.join(dest_dir, mod_name+'.txt'), 'w'), shell=True)

