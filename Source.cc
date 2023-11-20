#include "Standard.hh"
#include "Window.hh"

int main(int argc,char* argv[])
{
    Window window;

    window.createWindow("Test window", 1200, 800, SDL_WINDOW_SHOWN);

    return SUCCESS;
}