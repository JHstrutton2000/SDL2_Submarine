#pragma once

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "defines.h"

#include <string>
#include <vector>
#include <SDL_surface.h>



class GameObject {
public:
	GameObject(SDL_Surface* screenSurface);
	~GameObject();
	void applyForce(int x, int y);
	void update();
	virtual void draw();
protected:
	std::string name;
	void* drawing;
	vector2D *pos, *vel, *acc;
private:

};

#endif //GAMEOBJECT_H