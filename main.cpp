#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int even(int num) {
	2 * num;
}

int odd(int num) {
	2 * num + 1;
}

int dice(int num) {
	int currentTime = time(nullptr);
	srand(currentTime);
	num = rand()% 6 + 1;
	return printf("%d", num);
}

int main() {

	int num = 0;

	dice(num);

	return 0;
}