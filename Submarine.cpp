#include "Submarine.h"

Submarine::Submarine(SDL_Surface* screenSurface, uint8_t r, uint8_t g, uint8_t b, uint8_t a)
	: GameObject(screenSurface){

	drawing = (void*)malloc(sizeof(SDL_Rect));

	((SDL_Rect*)drawing)->x = 250;

}

void Submarine::draw() {
	SDL_Rect* sub = (SDL_Rect*)drawing;

	return;
}