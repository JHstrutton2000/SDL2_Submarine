#include "GameObject.h"

GameObject::GameObject(SDL_Surface* screenSurface) {
	pos = (vector2D*)malloc(2 * sizeof(vector2D));
	acc = (vector2D*)malloc(2 * sizeof(vector2D));
	vel = (vector2D*)malloc(2 * sizeof(vector2D));
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

	*vel *= 0.85;

	draw();
}

void GameObject::draw() {
	return;
}