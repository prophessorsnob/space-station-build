//
//  main.cpp
//  space-station-build
//
//  Created by Michael Lynch on 01/04/2013.
//  Copyright (c) 2013 Michael Lynch. All rights reserved.
//

#include <iostream>
#include "includes-for-main.h"

using namespace std;

window glWindow;

int main(int argc, char ** argv)
{
    cout << "Space Station Build Game" << endl;
    
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    
    glWindow.setPosition(100,100);
    glWindow.setDimensions(640, 480);
    glWindow.setTitle("HELLO WORLD");
    glWindow.setDisplayFunction(render);
    
    cout << "Width:" << glWindow.getWidth() << endl;
    cout << "Height:" << glWindow.getHeight() << endl;
    
    cout << "Title:" << glWindow.getTitle() << endl;
    
    
    glWindow.createWindow();
    
    //initGlutWindow(x,y,width,height,"Space Station Build Game",render);
}


