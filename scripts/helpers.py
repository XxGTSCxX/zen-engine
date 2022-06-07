import os
import shutil

def rmdir(dir_path:str):
    if os.path.isdir(dir_path):
        shutil.rmtree(dir_path)

def mkdir(dir_path:str, remove_if_exists:bool = False):
    if remove_if_exists:
        rmdir(dir_path)
    else:
        return

    os.mkdir(dir_path)

def mvdir(src_dir:str, dest_dir:str, override_dest:bool = False):
    if not os.path.exists(src_dir) or not os.path.isdir(src_dir):
        raise "Source directory {} doesn't exist. Move aborted.".format(src_dir)

    if os.path.exists(dest_dir):
        if os.path.isdir(dest_dir) and not override_dest:
            raise "Destination directory {} already exists and override is disabled. Move aborted.".format(dest_dir)
    else:
        os.makedirs(dest_dir)

    shutil.rmtree(dest_dir)
    shutil.copytree(src_dir, dest_dir)
    shutil.rmtree(src_dir)
