#include <stdio.h>
#include "Movement.h"
#include "Grass.h"
#include "Animal.h"

int main() {

	Movement* movement[2];

	movement[0] = new Grass();
	movement[1] = new Animal();

	for (int i = 0; i < 2; i++) {
		movement[i]->Move();
	}

	for (int i = 0; i < 2; i++) {
		delete movement[i];
	}

	return 0;
}