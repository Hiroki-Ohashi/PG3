#include <stdio.h>

template <typename Type>
Type Min(Type a, Type b) {
	if(a > b) {
		return a;
	}
	else {
		return b;
	}
}

// char型の場合
char Min(char a[], char b[]) {
	printf("数字以外は代入できません");
	return 0;
}

int main() {

	int a = 10;
	int b = 20;
	
	printf("%d\n", Min(a, b));

	float c = 10.0f;
	float d = 54.0f;

	printf("%f\n", Min(c, d));

	double e = 30;
	double f = 20;

	printf("%lf\n", Min(e, f));

	char g[] = "aaaa";
	char h[] = "bbb";

	Min(g, h);

	return 0;
}