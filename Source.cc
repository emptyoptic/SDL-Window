#include "Standard.hh"
#include "Window.hh"

int main(int argc,char* argv[])
{
    Window window;

    u32 buffWindow = window.initSDLwindow("Test window", 1200, 700, SDL_WINDOW_SHOWN);


    bool quit = false;
    SDL_Event event;

    while (!quit)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                quit = true;
            }
        }
    }

    if (quit)
    {
        std::cout << "\x1B[93mQuit loop.\033[0m" << std::endl;
    }

    //std::getchar();

    SDL_DestroyWindow((SDL_Window*)buffWindow);
    SDL_Quit();

    return SUCCESS;
}