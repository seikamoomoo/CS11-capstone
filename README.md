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
  * This is how we get FBX models into the Unreal Engine 
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

###Using the Unreal Engine Demo to View FBX Models
* Go to the Unreal Engine Demo folder that you have downloaded and double click on the following file : FBXImportDemo.exe
* Camera controls :
  * W - Forwards
  * A - Left
  * S - Backwards
  * D - Right
  * Hold right mouse button to move your camera in accordance to where you are pointing the mouse

* Click on the green plane with the left mouse button. This will make a small yellow marker appear.
  * Make sure you click close to your current position as the further out you click the further away the model will be. 
* Click on the Import FBX button at the top left of the screen and search through the file manager until you find the FBX file you want to import.
* Double click on the FBX file and wait while the demo loads your FBX file. A loading bar should appear.
