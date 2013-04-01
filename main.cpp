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

void render(void);
void initGlutWindowVariables(int x, int y, int width, int height,const char *title);

int argumentc;

int main(int argc, char ** argv)
{
    cout << "Space Station Build Game" << endl;
    
    int x = 100;
    int y = 100;
    int width = 640;
    int height = 480;
    
    glutInit(&argc,argv);
    initGlutWindowVariables(x,y,width,height,"Space Station Build Game");
    
    glutDisplayFunc(render);
    
    glutMainLoop();
}

void initGlutWindowVariables(int x, int y, int width, int height, const char *title){
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(x, y);
    glutInitWindowSize(width, height);
    glutCreateWindow(title);
}

void render(void){
    
}
