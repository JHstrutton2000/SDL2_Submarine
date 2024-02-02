#pragma once
#ifndef SUB_H
#define SUB_H

class Submarine : GameObject {
public:
	Submarine(SDL_Surface* screenSurface, SDL_Renderer* screenRenderer, uint32_t color);
	virtual void draw();
	virtual void update();
};

#endif //SUB_H