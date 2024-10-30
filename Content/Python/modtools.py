import unreal
from unreal import WorldFactory, AssetToolsHelpers

ASSET_TOOLS = unreal.AssetToolsHelpers.get_asset_tools() # type: unreal.AssetTools

def get_object_cdo(object):
    # type: (unreal.Object) -> unreal.Object
    da_class = unreal.load_object(None, object.get_path_name())
    cdo = unreal.get_default_object(da_class)
    return cdo    

DA_FACTORY = unreal.DataAssetFactory()
da_parent_class = unreal.get_default_object(unreal.load_object(None, '/Game/Mods/ArgonSDK/Mods/ModLoading/DA_ModMarker.DA_ModMarker_C')).get_class()
DA_FACTORY.set_editor_property("DataAssetClass", da_parent_class)

def create_mod_marker(name, path):
    # type: (str, str) -> tuple[unreal.Object, unreal.Object]
    new_item = ASSET_TOOLS.create_asset( 
        "{}_Marker".format(name),
        "{}/{}".format(path, name),
        unreal.DataAsset,
        DA_FACTORY
    )# type: unreal.Object
    
    da_class = unreal.load_object(None, "{0}/{1}/{1}.{1}_C".format(path, name))
    cdo = unreal.get_default_object(da_class)
    unreal.EditorAssetLibrary.save_loaded_asset(new_item)
    return cdo, new_item

BP_ASSET_FACTORY = unreal.BlueprintFactory()
parent_class = unreal.get_default_object(unreal.load_object(None, '/Game/Mods/ArgonSDK/Mods/ArgonSDKModBase.ArgonSDKModBase_C')).get_class()
BP_ASSET_FACTORY.set_editor_property("ParentClass", parent_class)

def create_mod(name, path):
    # type: (str, str) -> tuple[unreal.Object, unreal.Object]
    new_item = ASSET_TOOLS.create_asset( 
        name,
        "{}/{}".format(path, name),
        unreal.Blueprint,
        BP_ASSET_FACTORY
    )# type: unreal.Object
    
    bp_class = unreal.load_object(None, "{0}/{1}/{1}.{1}_C".format(path, name))
    cdo = unreal.get_default_object(bp_class)
    # cdo.set_editor_property('bClientside', True)
    unreal.EditorAssetLibrary.save_loaded_asset(new_item)
    
    return cdo, new_item