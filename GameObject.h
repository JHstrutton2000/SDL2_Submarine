#pragma once

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H



class GameObject {
public:
	GameObject(SDL_Surface* screenSurface, SDL_Renderer* screenRenderer, uint32_t color);
	~GameObject();
protected:
	std::string name;
	void* drawing;
	vector2D *pos, *vel, *acc;
	uint32_t objectColor;
	SDL_Surface* Surface;
	SDL_Renderer* renderer;
	virtual void applyForce(int x, int y);
	virtual void update();
	virtual void draw();

};

#endif //GAMEOBJECT_H