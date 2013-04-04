//
//  window.h
//  space-station-build
//
//  Created by Michael Lynch on 02/04/2013.
//  Copyright (c) 2013 Michael Lynch. All rights reserved.
//

#ifndef __space_station_build__window__
#define __space_station_build__window__

#include <iostream>
#include <GLUT/GLUT.h>

class window{
private:
    int xp,yp,widthp,heightp;
    char * titlep;
    void (*function)();
    
public:
    //SET METHODS
    void setPosition(int x, int y);
    void setDimensions(int width, int height);
    void setTitle(char *title);
    void setDisplayFunction(void (*func)());
    
    //GET METHODS
    int getWidth();
    int getHeight();
    char* getTitle();
    
    void createWindow();
};

void initGlutWindow(int x, int y, int width, int height, const char *title, void (*func)());

#endif /* defined(__space_station_build__window__) */
