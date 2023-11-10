#include <stdio.h>
#include "Comparison.h"

int main() {
	// int
	Comparison<int, int> comparatorInt(1, 2);
	// float
	Comparison<float, float> comparatorFloat(1.0f, 2.0f);
	// double
	Comparison<double, double> comparatorDouble(3.0, 2.0);
	// int,float
	Comparison<int, float> comparatorIntFloat(4, 2.0f);
	// int,double
	Comparison<int, double> comparatorIntDouble(1, 2.0);
	// float,double
	Comparison<float, double> comparatorFloatDouble(3.0f, 2.0);

	// 小さいほうを表示
	printf("<int, int>       %d\n", comparatorInt.Min<int>());
	printf("<float, float>     %f\n", comparatorFloat.Min<float>());
	printf("<double, double>    %lf\n", comparatorDouble.Min<double>());
	printf("<int, float>   %f\n", comparatorIntFloat.Min<float>());
	printf("<int, double>  %ld\n", comparatorIntDouble.Min<int>());
	printf("<double, float> %lf\n", comparatorFloatDouble.Min<double>());

	return 0;
}