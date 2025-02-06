import glob
import os

root_dir = "Content"

files = [filename for filename in glob.iglob(root_dir + '**/**', recursive=True)]

deleted = [file for file in files if ".deleted" in file and "P_" in file]

#for d in deleted:
#    print(d)

toDelete = [
    (file, file + ".deleted") 
    for file in files
    if not ".deleted" in file and 
        (
            "PS_" in file
            or "ps_" in file
            or "\\P_" in file
            or "\\p_" in file
            or (not os.path.isdir(file) and (
                "\\BlendSpaces\\" in file
                or "\\AurelienLarue\\TutorialVoices\\" in file
            ))
        ) 
]

#print(toDelete)
#mounted = [f for f in files if "_Mounted" in f]
#for f in mounted:
#    print(f)

for pair in toDelete:
    if os.path.exists(pair[1]): continue
    print(pair[0])
    print("->", pair[1])
    os.rename(*pair)