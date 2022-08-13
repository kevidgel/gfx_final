Project for Computer Graphics 

A program to generate various shapes in both 2D and 3D. Includes concepts such as Bresenham’s line algorithm, edge lists, splines, z-buffering, and Phong reflection.

Requires imagemagick.

To compile and generate sample shapes:
```c
% make run
```

To generate custom shapes, create a text file and input commands for 3D model generation (for examples, go to script, script_robot, script_shapes).
Commands and descriptions are listed at the top of ```parser.c``` (note that this is created using a relative coordinate system -- individual shapes, 2D and 3D, are on their separate planes and defined relative to one another).

Sample Images:

![sphere](https://github.com/kevidgel/gfx_final/blob/master/sphere.jpg?raw=true)
![torus](https://github.com/kevidgel/gfx_final/blob/master/torus.jpg?raw=true)
![robot](https://github.com/kevidgel/gfx_final/blob/master/robot.jpg?raw=true)
