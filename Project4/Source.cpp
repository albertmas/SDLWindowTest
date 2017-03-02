#include <stdlib.h>
#include <stdio.h>
#include "SDL/include/SDL.h"

#pragma comment( lib, "SDL/libx86/SDL2.lib")
#pragma comment( lib, "SDL/libx86/SDL2main.lib")

int main(int argc, char* argv[])
{
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Surface *surface;
	Uint32 rmask, gmask, bmask, amask;
	SDL_Window *window;
	SDL_Renderer *renderer;

	SDL_CreateWindowAndRenderer(640, 480, SDL_WINDOW_RESIZABLE, &window, &renderer);
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

	SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);

	SDL_RenderClear(renderer);

	SDL_Rect r;
	r.x = 300;
	r.y = 230;
	r.w = 50;
	r.h = 50;

	SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

	
	SDL_RenderFillRect(renderer, &r);

	SDL_RenderPresent(renderer);


	SDL_Delay(10000);


	SDL_Quit();
	return(0);
}
