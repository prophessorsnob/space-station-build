//
//  window.cpp
//  space-station-build
//
//  Created by Michael Lynch on 02/04/2013.
//  Copyright (c) 2013 Michael Lynch. All rights reserved.
//

#include "window.h"


void window::setPosition(int x, int y){
    xp = x;
    yp = y;
}
void window::setDimensions(int width, int height){
    widthp = width;
    heightp = height;
}
void window::setTitle(char *title) {
    titlep = title;
}

void window::setDisplayFunction(void (*func)()){
    function = func;
}

int window::getWidth(){
    return widthp;
}
int window::getHeight(){
    return heightp;
}

char *window::getTitle(){
    return titlep;
}


void window::createWindow(){
    glutInitWindowPosition(xp, yp);
    glutInitWindowSize(widthp, heightp);
    glutCreateWindow(titlep);
    glutDisplayFunc(function);
    glutMainLoop();
}

void initGlutWindow(int x, int y, int width, int height, const char *title, void (*func)()){
    glutInitWindowPosition(x, y);
    glutInitWindowSize(width, height);
    glutCreateWindow(title);
    glutDisplayFunc(func);
    glutMainLoop();
}