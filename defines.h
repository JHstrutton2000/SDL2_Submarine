#pragma once

#ifndef DEFINES_H
#define DEFINES_H

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

struct vector2D{
	int x;
	int y;

	void operator+=(vector2D vec) {
		x += vec.x;
		y += vec.y;
	}

	void operator-=(vector2D vec) {
		x -= vec.x;
		y -= vec.y;
	}

	void operator*=(int mult) {
		x *= mult;
		y *= mult;
	}

	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

#include <string>
#include <vector>
#include <stdio.h>

#include <SDL.h>
#include <SDL_surface.h>
#include <SDL_render.h>

#include "GameObject.h"
#include "Submarine.h"



#endif //DEFINES_H