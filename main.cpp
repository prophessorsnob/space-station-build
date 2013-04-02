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

int main(int argc, char ** argv)
{
    cout << "Space Station Build Game" << endl;
    
    int x = 100;
    int y = 100;
    int width = 640;
    int height = 480;
    
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    initGlutWindow(x,y,width,height,"Space Station Build Game",render);
}


