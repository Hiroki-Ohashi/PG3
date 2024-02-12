#include <stdio.h>
#include "Tool.h"
#include "CutterKnife.h"
#include "Scissors.h"

int main() {

	Tool* tool[2];

	tool[0] = new CutterKnife();
	tool[1] = new Scissors();

	for (int i = 0; i < 2; i++) {
		tool[i]->Cut();
	}

	for (int i = 0; i < 2; i++) {
		delete tool[i];
	}

	return 0;
}