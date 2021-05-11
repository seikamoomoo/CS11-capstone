<!--
Sprint goal:  Articulate what should be delivered at the end of the Sprint.
Product log: This is the log of all tasks and features.
Member task: The Sprint task for each member is recorded.
Scrum record:  A sentence or two recording each member's accomplishments, concerns, and roadblocks since last scrum meeting.
-->

# Scrum Report

## Sprint 1

### Sprint Goal
Create functioning app based off existing open source software\
Create basic user interface

### Product Log
Collect tools & equipment\
Choose software\
Implement basic scanning functionality

### Member Tasks
##### Casey
- UI Research
- Research 3D cameras
- Test Meshroom

##### Seika
- Gather equipment
- Write user stories
- Test Meshroom

##### Brandon
- Camera analysis
- Test DotProduct
- Develop GUI

### Scrum Record
##### Accomplishments
- Completed Milestone 2
- Drafted system architecture
- Decided on software
  - Meshroom
  - Unreal Engine
  - Python GUI
- Analyzed equipment

#### Concerns
- What should be included in system architecture
- Not having sufficient equipment in time
- Not having a functional product for the demo

#### Roadblocks
- Need laptops to run software

### Sprint Review
We spent much of this sprint compiling research and gathering equipment. We completed Milestone 2, designed the system architecture, and analyzed a variety of different cameras. Every week, we met with our TA and our project partners. Throughout these first weeks, we became more familiar with the technology and process flows involved in photogrammetry and 3D modeling.

Although we had a slow start, we made significant progress as soon as we obtained the laptops we needed to run Meshroom. We were able to test different photogrammetry pipeline configurations and create several models. In addition, we tested DotProduct and started developing a Python GUI. Although it has yet to be decided, it seems that we are most likely going to be using Meshroom instead of DotProduct. We have not yet started incorporating Unreal Engine into our system; our current work involves developing a UI and photogrammetry pipeline that suits the goals of our project.



# Winter Term Sprints

## Sprint 1

### Sprint Goal
Begin testing the second half of the meshing pipeline, 
and looking into developing a user interface

### Product Log
MeshLab\
PointFuse\
Implement basic scanning functionality

### Member Tasks
##### Casey
- UI Research
- Create Ui framework, and learn how to connect it to c++

##### Seika
- Practice scanning rooms
- Test Meshlab, and other software

##### Brandon
- Practice scanning rooms
- Test Blender
- importing mesh to Unreal

### Scrum Record
##### Accomplishments
- Discovered method of connecting ui to c++ with QML
- Made valuble discoveries about MeshLab and PointFuse

#### Concerns
- Meshes and specifically textures are skewed when put into Unreal

#### Roadblocks
- Having trouble creating a solid pipeline from point cloud into unreal engine mesh

### Sprint Review
This sprint was a follow up to our reasearch over winter break. We wanted to begin by fully having a working mesh in Unreal Engine so that we can begin creating plugins and applications that can encapsualte all of our components. However, we haven been able to complete this portion of the sprint. The team has consistently been getting ruined meshes and twisted textures that do not look photorealistic like we are intending them to look.

However, work with QML has been a success, and the team has discovered a way to connect QML with c++ applications through inherited QML classes. ONce we connect with DOtProduct about libraries that they have, we can connect this user interface to those libraries, and any plugins from our other components.



## Sprint 2

### Sprint Goal
Continue to discover a working pipeline with our reqirements.
Define our requirements
Communicate with DotProduct about libraries and meshing softwares.

### Product Log
Dot3D\
PointFuse\
PointCloudPlugin\
Implement basic scanning functionality

### Member Tasks
##### Casey
- Communicate with DotProduct
- Work with PointCLoudPlugin

##### Seika
- Research Meshing Softwares
- Refine current meshing Pipeline
- Test Meshroom

##### Brandon
- Research Unreal Plugins
- Work with PointCLoudPlugin

### Scrum Record
##### Accomplishments
- Communicated with DotProduct
- Learned about the lack of DotProduct API
- Discovered new Meshing softwares to test.
- Put a point cloud into Unreal Engine.

#### Concerns
- Point clouds into Unreal
- Still no defined pipeline

#### Roadblocks
- Need laptops to run software

### Sprint Review
This sprint was more of an extention of the work from last sprint, with mre research into different meshing software, and the Unreal plugin, pointcloudplugin. we successfully put a point cloud into unreal, but discovered that there is no method to generate a mesh from it. We then communicated with a devloper from DotProduct who answered our questions about libraries and meshing software. We unfortunately learned that there is no simple way of implementing the scanning feature of Dot3D into our own user interface. He also provided us a link with different software that works well with DotProduct point clouds.

We decided from here to modify our idea of the user interface to include a place to import point clouds rather than encapsolating the interface around DotProduct as well. We will also go through the software that was given to us and see if there is something that is within our requirements and consistently creates meshes that work in Unreal Engine.



## Sprint 3

### Sprint Goal
Create functioning app based off existing open source software\
Create basic user interface

### Product Log
Collect tools & equipment\
Choose software\
Implement basic scanning functionality

### Member Tasks
##### Casey
- UI Research
- Research 3D cameras
- Test Meshroom

##### Seika
- Gather equipment
- Write user stories
- Test Meshroom

##### Brandon
- Camera analysis
- Test DotProduct
- Develop GUI

### Scrum Record
##### Accomplishments
- Completed Milestone 2
- Drafted system architecture
- Decided on software
  - Meshroom
  - Unreal Engine
  - Python GUI
- Analyzed equipment

#### Concerns
- What should be included in system architecture
- Not having sufficient equipment in time
- Not having a functional product for the demo

#### Roadblocks
- Need laptops to run software

### Sprint Review
We spent much of this sprint compiling research and gathering equipment. We completed Milestone 2, designed the system architecture, and analyzed a variety of different cameras. Every week, we met with our TA and our project partners. Throughout these first weeks, we became more familiar with the technology and process flows involved in photogrammetry and 3D modeling.

Although we had a slow start, we made significant progress as soon as we obtained the laptops we needed to run Meshroom. We were able to test different photogrammetry pipeline configurations and create several models. In addition, we tested DotProduct and started developing a Python GUI. Although it has yet to be decided, it seems that we are most likely going to be using Meshroom instead of DotProduct. We have not yet started incorporating Unreal Engine into our system; our current work involves developing a UI and photogrammetry pipeline that suits the goals of our project.



## Sprint 4

### Sprint Goal
Create functioning app based off existing open source software AgiSoft MetaShape\
Clean up our working user-interface using qml / pyqt  start researching on\
creating an Unreal Engine plugin to import FBXs

### Product Log
Script\
Create user-interface for our application\
Implement basic scanning functionality\
Unreal Research

### Member Tasks
##### Casey
- Software analysis writeup
- UI Research
- Test Camera
- Clean up the UI


##### Seika
- Software analysis writeup
- Work on AgiSoft script
- Help implement AgiSoft Script

##### Brandon
- Software analysis writeup
- Test AgiSoft
- Research Unreal Engine plugin development

### Scrum Record
##### Accomplishments
- Completed Project Status presentation
- Completed Updated Milestone 2
- Completed Alpha Functionality video
- Analyzed Software previously chosen

#### Concerns
- Not obtaining MetaShape License
- Not having sufficient time to implement scanning functionality
- Other time commitment to other classes overshadowing our senior project

#### Roadblocks
- MetaShape License

### Sprint Review
We spent much of this sprint attempting to validate and justify our software choices to Rafaelle who did not show up to multiple meetings week after week. We have
ran into several issues regarding licensing with MetaShape and have requested funding from two sources : Scott Fairbanks and Mike Premi's connection with AgiSoft.
We ghost-wrote the email Mike sent out.

# Spring Term Sprints

## Sprint 5

### Sprint Goal
Create functioning app based off existing open source software AgiSoft MetaShape\
Clean up our working user-interface using qml / pyqt  start researching on\
creating an Unreal Engine plugin to import FBXs

### Product Log
AgiSoft Script\
Clean up user-interface\
Implement basic scanning functionality\
Unreal Research and plugin development

### Member Tasks
##### Casey
- UI Research and development
- QML / pyqt research


##### Seika
- Work on our AgiSoft script
- Test Meshroom

##### Brandon
- Create a model with AgiSoft
- Research Unreal Engine plugin development

### Scrum Record
##### Accomplishments
- Completed Beta Functionality video
- Completed Winter-term retrospective

#### Concerns
- Not obtaining a MetaShape License
- Not having sufficient time to implement scanning functionality
- Not having sufficient time to implement Unreal Engine FBX compatibility
- Other time commitment to other classes overshadowing our senior project

#### Roadblocks
- MetaShape License
- Unreal Engine compatability

### Sprint Review
We as a team at this time started to get very bogged down by other classes and did not have much time to commit to our project. We are still encountering the roadblock of the MetaShape license and none of our funding requests went through. We believe we might be able to get by without it but it could in the end impact our project negatively. 
It is unclear if the Unreal Engine can be compatible with our application, there are tons of library files and great documentation for it but the amount of it is a little overwhelming.



## Sprint 6 Post-integration Testing and Refinement

### Sprint Goal
Create functioning app based off existing open source software AgiSoft MetaShape\
Clean up our working user-interface using qml / pyqt, connect our now functional Unreal Engine Plugin
to our UI in progress. We must scan our own classroom environment to use as a baseline and example.
During this scan we should record the process as it would be a good way to demonstrate functionality.

### Product Log
AgiSoft Script\
Clean up user-interface\
Implement basic scanning functionality\
Unreal executable integration with UI\
Unreal model and world save integration\

### Member Tasks
##### Casey
- UI Research and development
- MetaShape script development
- Preparing materials for the project evaluation presentation 

##### Seika
- Taking a little bit of a break from the MetaShape script
- Look into improving the UI
- Preparing materials for the project evaluation presentation 

##### Brandon
- Unreal Engine development
- Save functionality with the Unreal Engine demo
- Improvements to UI, work on integrating UE with UI
- Preparing materials for the project evaluation presentation 

### Scrum Record
##### Accomplishments
- Completed Unreal Engine FBX importer
- Got funding for our MetaShape pro-license
- MetaShape script makes meshes
- Weekly team report writings (Each week there is on average one to two pages that are written to update our project managers)

#### Concerns
- Not having sufficient time to implement the functional UE demo executable with the UI
- Getting the MetaShape script to produce textures ontop of generated meshes
- Other time commitments to other classes overshadowing our senior project

#### Roadblocks
- None at the moment, there is lots of work to be done but it can be done in a reasonable amount of time.

### Sprint Review
This sprint has gone well. There has been progress with the Unreal Engine side of things as the plugin and executable demo came together. We recieved funding for our MetaShape script and can now access classes that were locked behind\
a pay wall. If a user were to use this, they would simply 'borrow' the license and once they are done it is automatically set to an 'unborrowed' state allowing others to use it. We are still having difficulties with producing textures\
with the MetaShape script as it wants us to setup a camera system to go along with the pointcloud we are passing into it via Python. Using the application normally we would not have to set up a camera which makes this issue a little more\
perplexing. We would definitely like to automate the meshing and texturing process to help simplify the pipeline for our users as much as possible.



## Sprint 7: Preparing for Expo and Adding Polish

### Sprint Goal
Clean up our working user-interface using qml / pyqt, connect our now functional Unreal Engine Plugin
to our UI in progress. Wrap up materials for our project evaluation presentation coming on 5 / 14 / 2021,
prepare materials and online portal for our senior project showcase expo. This also includes practicing for the expo.

### Product Log
Project evaluation presentation slideshow\
Scanning process in person demo video\
Exp showcase landing page\
Project evaluation presentation agenda sent out\ 
AgiSoft Script\
Clean up user-interface\
Unreal executable integration with UI\
Unreal model and world save integration\

### Member Tasks
##### Casey
- UI development
- MetaShape script development
- Preparing materials for the project evaluation presentation 

##### Seika
- Look into improving the UI
- Preparing materials for the project evaluation presentation 

##### Brandon
- Needs to send out project evaluation presentation agenda to other team leader contacts
- Improvements to UI, work on integrating UE with UI
- Preparing the landing page for the coming expo
- Preparing materials for the project evaluation presentation 

### Scrum Record
##### Accomplishments
- We scanned a large classroom environment
- Created an in person scanning demo video that is short and concise
- Completed landing page for the expo
- Completed Project evaluation presentation slides
- MetaShape script makes meshes
- Weekly team report writings (Each week there is on average one to two pages that are written to update our project managers)

#### Concerns
- Not having sufficient time to implement the functional UE demo executable with the UI
- Getting the MetaShape script to produce textures ontop of generated meshes
- Other time commitments to other classes overshadowing our senior project

#### Roadblocks
- Weird Python errors with Windows regarding our MetaShape script and UI.

### Sprint Review
Our team has been quite busy this sprint as other classes are beginning to pile ontop of us. However, we are still getting good work done!
We got our project landing page and our project evaluation presentation both done very quickly. We started putting the materials together 
quite a bit sooner than before. We created an in person scanning demo video that is short and concise and finally scanned a large classroom
to demonstrate our pipeline.

