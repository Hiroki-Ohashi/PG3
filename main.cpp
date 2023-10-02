#include <stdio.h>

int Recursive(int num1, int num2, int num3,int count) {
	// 働いた時間
	count += 1;
	// 一般的な賃金体系
	num1 = num1 * count;
	// 再帰的な賃金体系
	num2 = num2 * 2 - 50;
	printf("%d時間 一般的:%d 再帰的:%d\n", count, num1, num2);

	return Recursive(num1, num2, num3, count);
}

int main() {

	int num1 = 100;
	int num2 = 1072; 
	int num3 = 0;
	int count = 1;

	Recursive(num1, num2, num3, count);

	return 0;
}