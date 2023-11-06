#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

typedef int (*PFunc)();

void Answer(PFunc p, int answer) {
	int dice = p() % 2;
	int anticipation = answer % 2;
	Sleep(3000);

	printf("回答:");

	// 偶数なら丁
	if (dice == 0) {
		printf("丁\n");
	}// 奇数なら半
	else if (dice != 0) {
		printf("半\n");
	}

	// どちらも同じ数なら正解
	if (anticipation == dice) {
		printf("正\n\n");
	}
	else {
		printf("誤\n\n");
	}
}

int dice() {
	int result = rand() % 6 + 1;
	return result;
}

int main() {
	// サイコロを決定
	int currentTime = time(nullptr);
	srand(currentTime);

	// 関数ポインタ
	PFunc pfunc = &dice;
	// 入力した予想
	int answer;

	printf("丁( 2 )、半( 1 )選べ\n\n");
	while (1) {
		printf("丁( 2 )、半( 1 )を入力\n");
		printf("予想:");
		scanf_s("%d", &answer);

		Answer(pfunc, answer);
	}

	return 0;
}