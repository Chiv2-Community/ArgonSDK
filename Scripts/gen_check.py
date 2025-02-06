import json
import os
import argparse
from typing import Iterable, Tuple

DEFAULT_ASSET_TYPES_FILE = r'../unpaking/CAS_output/infodir/AssetTypes.json'
DEFAULT_CONTENT_DIR = r'./Content/'

def parse_args():
    argParser = argparse.ArgumentParser()
    subparsers = argParser.add_subparsers(dest="action")
    argParser.add_argument("-f", "--asset-types-file", type=str, default=DEFAULT_ASSET_TYPES_FILE)
    argParser.add_argument("-c", "--content-dir", type=str, default=DEFAULT_CONTENT_DIR)

    listSP = subparsers.add_parser("list", help="list asset types")
    singleOrLoud = listSP.add_mutually_exclusive_group()
    singleOrLoud.add_argument("-t", "--type", type=str, help="list assets from the given type")
    singleOrLoud.add_argument("-v", "--verbose", action="store_true", help="list ALL assets")

    missingOrPresent = listSP.add_mutually_exclusive_group()
    missingOrPresent.add_argument("-m", "--missing", action="store_true", help="list missing assets (default)")
    missingOrPresent.add_argument("-p", "--present", action="store_true", help="list present assets")

    countSP = subparsers.add_parser("count", help="count asset types")
    countSP.add_argument("-t", "--type", type=str, help="only count the given type")
    countSP.add_argument("-q", "--quiet", action="store_true", help="do not print types which had NO assets extracted removes (0%) entries")

    return argParser.parse_args()

args = parse_args()

# takes a list of internal paths, and checks if they exist in the content dir
# returns [(str, bool)] whose elements are the internal path, and whether that path existed
# NOTE: the order of internal paths is sorted so that outputs are comparable with diffs
def check_if_exists(internalPaths : Iterable[str]) -> list[tuple[str, bool]]:
    internalPaths = sorted(internalPaths)
    # (path, fullPath)
    # need to slice off / at the start for join to work right
    fullPaths = map(lambda p: (p, os.path.join(args.content_dir, p[1:])), internalPaths)
    # (path, exists_in_content_dir)
    exists = map(lambda path_fullpath: (path_fullpath[0], os.path.exists(path_fullpath[1])), fullPaths)
    return list(exists)

with open(args.asset_types_file, mode="r", encoding="utf-8") as file:
    types = json.load(file)

typeList = sorted(types)
if args.type:
    if args.type not in typeList:
        print(f"invalid type: '{args.type}'")
        exit()
    typeList = [args.type]

def print_type_assets(types, type):
    print(f"'{type}' {"present" if args.present else "is missing"}:")
    # types[type] -> list of (path, exists) tuples
    for path, exists in check_if_exists(types[type]):
        #print(path, exists)
        if (not args.present and not exists) or (exists and not args.missing):
            print(f"\t{path}")

if args.action == "list":
    if args.type: # print assets from specified type
        print_type_assets(types, args.type)
    elif args.verbose: # print assets from all types
        for type in typeList:
            print_type_assets(types, type)
    else: # print all types
        print("types:")
        for type in typeList:
            print(f"\t{type}")
    exit()

if args.action == "count":
    cum_total, cum_exist = 0,0
    for type in typeList:
        paths_exist = check_if_exists(types[type])
        total = len(paths_exist)
        existant = sum(map(lambda p: p[1], paths_exist)) # True == 1, False == 0
        cum_total += total
        cum_exist += existant
        if not (args.quiet and existant == 0): # skip "empty" types based on args
            print(f'({int((existant*100)/total):01}%)\t{type}: {existant} / {total}')
    if not args.type: # if not printing just 1 type, print cumulative stats
        print("------------------------------------")
        print(f'({int((cum_exist*100)/cum_total):01}%)\tTotal: {cum_exist} / {cum_total}')