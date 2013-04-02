//
//  window.cpp
//  space-station-build
//
//  Created by Michael Lynch on 02/04/2013.
//  Copyright (c) 2013 Michael Lynch. All rights reserved.
//

#include "window.h"

void initGlutWindow(int x, int y, int width, int height, const char *title, void (*func)()){
    glutInitWindowPosition(x, y);
    glutInitWindowSize(width, height);
    glutCreateWindow(title);
    glutDisplayFunc(func);
    glutMainLoop();
}