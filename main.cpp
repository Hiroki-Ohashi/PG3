#include <stdio.h>

int CalcSalary(int num1, int num2, int num3, int num4, int count) {
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

	return (num1 + CalcSalary(num1, num2, num3, num4, count));
}

int main() {

	int RecursiveSalary = 0;
	int RecursiveHourlyWage = 100;
	int GeneralSalary = 0;
	int GeneralHourlyWage = 1072;
	int count = 1;

	CalcSalary(RecursiveSalary, RecursiveHourlyWage, GeneralSalary, GeneralHourlyWage, count);

	return 0;
}