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

