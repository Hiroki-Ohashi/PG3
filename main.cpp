#include <stdio.h>

int RecursiveCalcSalary(int RecursiveSalary, int RecursiveHourlyWage, int count, int hour) {
	// 時給
	printf("%d時間の再帰的時給: %d\n", count, RecursiveHourlyWage);

	// 再帰的
	RecursiveSalary += RecursiveHourlyWage;

	// 給料
	printf("%d時間の再帰的給料: %d\n", count, RecursiveSalary);
	RecursiveHourlyWage = RecursiveHourlyWage * 2 - 50;

	printf("\n");

	// 時間
	count++;

	if (count > hour) {
		return 0;
	}

	return (RecursiveSalary + RecursiveCalcSalary(RecursiveSalary, RecursiveHourlyWage, count, hour));
}

int GeneralCalcSalary(int GeneralSalary, int GeneralHourlyWage, int count, int hour) {

	// 一般的
	GeneralSalary = GeneralHourlyWage * count;

	printf("%d時間の一般的給料: %d\n", count, GeneralSalary);

	count++;

	if (count > hour) {
		return 0;
	}

	return GeneralCalcSalary(GeneralSalary, GeneralHourlyWage, count, hour);
}

int main() {

	int RecursiveSalary = 0;
	int RecursiveHourlyWage = 100;
	int GeneralSalary = 0;
	int GeneralHourlyWage = 1072;
	int count = 1;
	int hour = 8;

	RecursiveCalcSalary(RecursiveSalary, RecursiveHourlyWage, count, hour);
	GeneralCalcSalary(GeneralSalary, GeneralHourlyWage, count, hour);

	return 0;
}