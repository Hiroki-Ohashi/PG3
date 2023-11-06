#include <stdio.h>
#include "Movement.h"
#include "Grass.h"

int main() {

	Movement* grass = new Grass;

	grass->Move();

	delete grass;

	return 0;
}