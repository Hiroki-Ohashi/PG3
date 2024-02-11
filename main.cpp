#include <stdio.h>
#include "Movement.h"
#include "Characters.h"
#include "Picture.h"

int main() {

	Movement* movement[2];

	movement[0] = new Characters();
	movement[1] = new Picture();

	for (int i = 0; i < 2; i++) {
		movement[i]->Draw();
	}

	for (int i = 0; i < 2; i++) {
		delete movement[i];
	}

	return 0;
}