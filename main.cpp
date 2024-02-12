#include <stdio.h>
#include "Cutting.h"
#include "Cutter.h"
#include "Scissors.h"

int main() {

	Cutting* cutting[2];

	cutting[0] = new Cutter();
	cutting[1] = new Scissors();

	for (int i = 0; i < 2; i++) {
		cutting[i]->Cut();
	}

	for (int i = 0; i < 2; i++) {
		delete cutting[i];
	}

	return 0;
}