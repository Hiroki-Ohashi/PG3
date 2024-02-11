#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using PFunc = void (*)(int);

// サイコロの目
int Dice() {
	int result = rand() % 6 + 1;
	return result;
}

// 答え
void Answer(int answer) {
	int dice = Dice();
	// 偶数なら丁
	if (dice % 2 == 0) {
		printf("丁\n");
		Sleep(1000 * 1.5f);
	}// 奇数なら半
	else if (dice % 2 != 0) {
		printf("半\n");
		Sleep(1000 * 1.5f);
	}

	// 同じなら正解
	if (answer == 1 && dice % 2 != 0) {
		printf("正解\n\n");
	}
	else if (answer == 2 && dice % 2 == 0) {
		printf("正解\n\n");
	}
	else {
		printf("不正解\n\n");
	}
}

void SetTimeout(PFunc p, int time, int answer) {
	printf("答え\n");
	Sleep(1000 * time);
	p(answer);
}

int main() {
	// サイコロの目を決定する
	srand((unsigned int)time(nullptr));
	// 関数ポインタ
	PFunc pfunc = Answer;
	// 入力予想
	int answer;

	printf("サイコロは丁( 2 )、半( 1 )\n\n");
	while (1) {
		printf("丁( 2 )、半( 1 )どちらかを入力\n");
		printf("予想:");
		scanf_s("%d", &answer);

		SetTimeout(pfunc, 3, answer);
	}

	return 0;
}