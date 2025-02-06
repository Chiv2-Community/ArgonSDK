import glob
import os
import argparse

# arguments
parser = argparse.ArgumentParser(
    prog="find deleted",
    description="find deleted files recursively"
)
parser.add_argument(
    "-d",
    action="store_true",
    help="for all .deleted files, delete the non-.deleted version if it exists"
)
parser.add_argument(
    "-f",
    action="store_true",
    help="instead print all files which would be deleted by -d"
)
args = parser.parse_args()

root_dir = "Content"
files = [filename for filename in glob.iglob(root_dir + '**/**', recursive=True)]
deleted = [file for file in files if ".deleted" in file]

extant_deleted = filter(os.path.exists, [p[:-8] for p in deleted if len(p)>=8])

# enumerate all deleted files
if not args.f:
    for p in deleted: 
        print(p)
else:
    for p in extant_deleted:
        print(p)

if(args.d):
    # make sure that any file marked as deleted does not exist
    # /path/to/file.json <---------- deletes this one
    # /path/to/file.json.deleted <-- iff this one exists
    for p in filter(os.path.exists, extant_deleted):
        os.remove(p)