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

int argumentc;

int main(int argc, char ** argv)
{
    cout << "Space Station Build Game" << endl;
    
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(640, 480);
    
    glutCreateWindow("Space Station Build Game");
    
    glutDisplayFunc(render);
    
    glutMainLoop();
}

void render(void){
    
}
