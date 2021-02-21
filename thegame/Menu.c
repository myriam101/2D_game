#include "Menu.h"
#include "globale.h"

Menu *initMenu()
{
    //Init Menu
    Menu *m;
    m = malloc(sizeof (Menu));
    m->bg = IMG_Load("bg.png");
    //We are having problems compiling on linux so we did all this on windows but we can't also compile mixer on codeblocks so yeah
    //Init Audio for the Menu
    //int Mix_Init(MIX_INIT_MP3);
    //Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024);
    //Loading variables to play as music and chunks
    //Mix_Music *bg_music, *select1, *select2, *select3, *select4, *enter;
    //bg_music = Mix_LoadMUS("MM1.mp3");
    //select1 = Mix_LoadMUS("S1.mp3");
    //select2 = Mix_LoadMUS("S2.mp3");
    //select3 = Mix_LoadMUS("S3.mp3");
    //select4 = Mix_LoadMUS("S4.mp3");
    //enter = Mix_LoadMUS("E1.mp3");
    //Loading music variables is completed.
    //Init volume
    // int v = 50;
    //Mix_VolumeMusic(v);

    ////////////////////////////////////////////
    ////////////////////////////////////////////
    //New game selection Menu
    m->butt_play = IMG_Load("ng_normal.png");
    ////////////////////////////////////////////
    //Load game selection Menu
    m->butt_load = IMG_Load("lg_normal.png");
    ////////////////////////////////////////////
    //Options selection Menu
    m->butt_options = IMG_Load("op_normal.png");
    ////////////////////////////////////////////
    //Credit selection menu
    m->butt_cr = IMG_Load("credit_normal.png");
    ////////////////////////////////////////////
    //quit selection menu
    m->butt_quit = IMG_Load("q_normal.png");
    ////////////////////////////////////////////
    ////////////////////////////////////////////

    //since we're using plain menu images to show our actual menu, we find problems in the selection when using mouse motion
    //I've thought about a quick solution, implementing invisible squares beneath the menu image, these invis squares will serve as captors for the mouse motion
    //It's going to be only one image but loaded at 5 different places
    //while using the mouse motion, i'll use the invis square to change between menu options once the mouse was detected on it :)
    //as I thought, I'm going to need to load 5 invis squares of different dimensions, pain in the butt.


    //first block
    m->invis_butt1 = IMG_Load("inv1.png");
    m->x_invis_butt1.w = m->invis_butt1->w;
    m->x_invis_butt1.h = m->invis_butt1->h;
    m->x_invis_butt1.x = screen->w/1.25 - m->x_invis_butt1.w/2;
    m->x_invis_butt1.y = (screen->h*40 / 100) - m->x_invis_butt1.h/2;


    //second block
    m->invis_butt2 = IMG_Load("inv2.png");
    m->x_invis_butt2.w = m->invis_butt2->w;
    m->x_invis_butt2.h = m->invis_butt2->h;
    m->x_invis_butt2.x = screen->w/1.25 - m->x_invis_butt2.w/2;
    m->x_invis_butt2.y = (screen->h*50 / 100) - m->x_invis_butt2.h/2;

    //third block
    m->invis_butt3 = IMG_Load("inv3.png");
    m->x_invis_butt3.w = m->invis_butt3->w;
    m->x_invis_butt3.h = m->invis_butt3->h;
    m->x_invis_butt3.x = screen->w/1.25 - m->x_invis_butt3.w/2;
    m->x_invis_butt3.y = (screen->h*60 / 100) - m->x_invis_butt3.h/2;

    //fourth block
    m->invis_butt4 = IMG_Load("inv4.png");
    m->x_invis_butt4.w = m->invis_butt4->w;
    m->x_invis_butt4.h = m->invis_butt4->h;
    m->x_invis_butt4.x = screen->w/1.25 - m->x_invis_butt4.w/2;
    m->x_invis_butt4.y = (screen->h*70 / 100) - m->x_invis_butt4.h/2;

    //fifth block
    m->invis_butt5 = IMG_Load("inv5.png");
    m->x_invis_butt5.w = m->invis_butt5->w;
    m->x_invis_butt5.h = m->invis_butt5->h;
    m->x_invis_butt5.x = screen->w/1.10 - m->x_invis_butt5.w/2;
    m->x_invis_butt5.y = (screen->h*80 / 100) - m->x_invis_butt5.h/2;
    return m;
}


void drawMenu(Menu *m)
{
    SDL_FillRect(screen, 0, SDL_MapRGB(screen->format, 0, 0, 0));
    SDL_BlitSurface(m->bg, 0, screen,0);
}
