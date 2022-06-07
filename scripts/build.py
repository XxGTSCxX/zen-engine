import helpers
import os
import subprocess

helpers.mkdir("build")

os.chdir("build")

subprocess.run("cmake ../../zen-engine")
subprocess.run("cmake --build .")

# helpers.mvdir("Debug", "../bin/Debug", True)
