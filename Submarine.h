#pragma once
#ifndef SUB_H
#define SUB_H

#include "GameObject.h"

class Submarine : GameObject {
public:
	Submarine(SDL_Surface* screenSurface, uint8_t r, uint8_t g, uint8_t b, uint8_t a);
	virtual void draw();
};

#endif //SUB_H