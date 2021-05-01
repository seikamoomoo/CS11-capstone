# CS11-capstone
Innovate 3D scanning of large spaces to create virtual walkthroughs and distance learning


## Generate Mesh

### Setup
* create virtual env: `python -m venv .venv`
* start virtual env: `source .venv/bin/activate`
* install dependencies: `pip install -r requirements.txt`
* download Python 3 module: https://www.agisoft.com/downloads/installer/
* install wheel: https://agisoft.freshdesk.com/support/solutions/articles/31000148930-how-to-install-metashape-stand-alone-python-module
* start app: `python app.py`

### Metashape Script Only
* run script: [path to MetashapePro] -r metashape_script.py [project name] [point cloud file path] [custom face count]
