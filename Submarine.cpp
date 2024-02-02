#include "defines.h"

Submarine::Submarine(SDL_Surface* screenSurface, SDL_Renderer* screenRenderer, uint32_t color)
	: GameObject(screenSurface, renderer, color){

	drawing = (void*)malloc(sizeof(SDL_Rect));

	SDL_Rect* rect = (SDL_Rect*)drawing;
	rect->w = 20;
	rect->h = 20;

	vector2D* drawingPos = (vector2D*)drawing;
	drawingPos = pos;

	
}

void Submarine::draw() {

	SDL_SetRenderDrawColor(
		renderer,
		(uint8_t)((objectColor & 0xFF000000) >> 24),
		(uint8_t)((objectColor & 0x00FF0000) >> 16),
		(uint8_t)((objectColor & 0x0000FF00) >> 8),
		(uint8_t)((objectColor & 0x000000FF)));

	SDL_RenderDrawRect(renderer, (SDL_Rect*)drawing);

	//objectColor

	return;
}

void Submarine::update() {
	*pos += *vel;
	*vel += *acc;
	acc->set(0, 0);

	//*vel *= 0.85;
}