#include <stdio.h>

int Recursive(int n) {
	if (n <= 100) {
		return 100;
	}

	return (Recursive(n) * 2 - 50);
}

int main() {

	int n = 100;
	int result;

	result = Recursive(n);
	printf("%dの階乗 = %d\n", n, result);


	return 0;
}