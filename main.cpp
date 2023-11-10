#include <stdio.h>
#include "Enemy.h"

int main() {

	Enemy* enemy;
	enemy = new Enemy;

	enemy->Update();

	delete enemy;

	return 0;
}