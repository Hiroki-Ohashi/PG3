#include <stdio.h>

int Recursive(int num1, int num2, int num3, int num4, int count) {
	// 時給
	printf("%d時間の再帰的時給: %d\n", count, num2);

	// 再帰的
	num1 += num2;

	// 給料
	printf("%d時間の再帰的給料: %d\n", count, num1);
	num2 = num2 * 2 - 50;

	// 一般的
	num3 += num4;

	printf("%d時間の一般的給料: %d\n", count, num3);
	printf("\n");

	if (num2 >= num3) {
		return num2;
	}

	// 時間
	count++;

	return (num1 + Recursive(num1, num2, num3, num4, count));
}

int main() {

	int num1 = 0;
	int num2 = 100;
	int num3 = 0;
	int num4 = 1072;
	int count = 1;

	Recursive(num1, num2, num3, num4, count);

	return 0;
}