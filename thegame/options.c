#include "options.h"
#include "globale.h"


options *initOptions() {
    options *Op;
    Op = malloc (sizeof(options));


    Op->window = IMG_Load("option_menu.png");
    //
    Op->x_window.w = Op->window->w;
    Op->x_window.h = Op->window->h;
    Op->x_window.x = screen->w/2 - Op->x_window.w / 2;
    Op->x_window.y = screen->h/2 - Op->x_window.h/2;
    //


    Op->windowed = IMG_Load("windowed.png");
    //
    Op->x_windowed.w = Op->windowed->w;
    Op->x_windowed.h = Op->windowed->h;
    Op->x_windowed.x = screen->w/2 - Op->x_windowed.w / 2;
    Op->x_windowed.y = screen->h/3 - Op->x_windowed.h/2;
    //

}

void Drawoptions(options *Op) {

SDL_BlitSurface(Op->window, 0, screen,&Op->x_window);
//
SDL_BlitSurface(Op->windowed, 0, screen,&Op->x_windowed);

}
