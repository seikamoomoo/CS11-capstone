# CS11-capstone
Innovate 3D scanning of large spaces to create virtual walkthroughs and distance learning

## Hardware Requirements
* Intel Realsense D455 or D415 depth camera 
* USB 3.0 cable
* Laptop PC with at least 8gb RAM


## Software Requirements
* Intel RealSense SDK 2.0 – Intel RealSense Depth and Tracking camera manual driver installation :
  * https://www.intelrealsense.com/sdk-2/
  
* Download and install DotProduct 3d as this is how we will be scanning environments.
DotProduct - Handheld 3D Scanning (dotproduct3d.com) (you will have to sign up for a free-trial).
  * https://www.dotproduct3d.com/

* Download the Unreal Engine demo project :
  * This is how we get FBX models into the unreal engine 
    https://drive.google.com/drive/folders/1SnMityGyT90JAydc30lh8KEmoFF-DjnF?usp=sharing

## Generate Mesh

### Setup
* create virtual env: `python -m venv .venv`
* start virtual env: `source .venv/bin/activate`
* install dependencies: `pip install -r requirements.txt`
* download Python 3 module: https://www.agisoft.com/downloads/installer/
* install wheel: https://agisoft.freshdesk.com/support/solutions/articles/31000148930-how-to-install-metashape-stand-alone-python-module
* activate license: `export agisoft_LICENSE=7250@linlic.engr.oregonstate.edu`
* start app: `python app.py [path to MetashapePro]`

### Metashape Script Only
* run script: [path to MetashapePro] -r metashape_script.py [project name] [point cloud file path] [custom face count]
