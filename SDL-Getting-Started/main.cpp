//
//  main.cpp
//  SDL-Getting-Started
//
//  Created by jayoung on 5/5/13.
//  Copyright (c) 2013 jamsyoung. All rights reserved.
//

//#include <iostream>
//
//int main(int argc, const char * argv[])
//{
//
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}

#include "SDL/SDL.h"

int main(int argc, char* args[]) {
    // the images
    SDL_Surface* hello = NULL;
    SDL_Surface* screen = NULL;

    // start sdl
    SDL_Init(SDL_INIT_EVERYTHING);

    // set up screen
    screen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE);

    // load image
    hello = SDL_LoadBMP("hello.bmp");

    // apply image to screen
    SDL_BlitSurface(hello, NULL, screen, NULL);

    // update screen
    SDL_Flip(screen);

    // pause
    SDL_Delay(2000);

    // free the loaded image
    SDL_FreeSurface(hello);

    // quit sdl
    SDL_Quit();
    
    return 0;
}

