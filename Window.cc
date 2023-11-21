#include "Window.hh"

int Window::initSDLwindow(const char title[], u32 w, u32 h, u32 flags)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        std::cout << "SDL initialization failed: " << SDL_GetError() << std::endl;
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Initialization", SDL_GetError(), NULL);
        return FAILURE;
    }
    else
    {
        std::cout << "SDL initialization success!" << std::endl;
    }

    SDL_Window* window = SDL_CreateWindow((char*)title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h, flags);

    if (window == nullptr)
    {
        std::cerr << "SDL window creation failed: " << SDL_GetError() << std::endl;
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Window", SDL_GetError(), NULL);
        return FAILURE;
    }
    else
    {
        printf("SDL window: \x1B[32m%s\033[0m creation success!\n", title);
    }

    return SUCCESS;
}