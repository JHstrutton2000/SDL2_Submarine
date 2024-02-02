#include "defines.h"

GameObject::GameObject(SDL_Surface* screenSurface, SDL_Renderer* screenRenderer, uint32_t color) {
	pos = (vector2D*)malloc(2 * sizeof(vector2D));
	acc = (vector2D*)malloc(2 * sizeof(vector2D));
	vel = (vector2D*)malloc(2 * sizeof(vector2D));
	drawing = malloc(0);
	objectColor = color;
}

GameObject::~GameObject() {
	free(pos);
	free(acc);
	free(vel);
	free(drawing);
}

void GameObject::applyForce(int x, int y) {
	acc->set(x, y);
}

void GameObject::update() {
	*pos += *vel;
	*vel += *acc;
	acc->set(0, 0);

	//*vel *= 0.85;
}

void GameObject::draw() {
	return;
}