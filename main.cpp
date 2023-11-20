#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <functional>

void SetTimeout(std::function<void()> result, int second) {
	Sleep(second * 1000);
	result();
}

int main() {

	// 予想
	int answer;
	// ダイス
	// サイコロを決定
	int currentTime = time(nullptr);
	srand(currentTime);
	int diceResult = rand() % 6 + 1;

	printf("半( 1 )、丁( 2 )選べ\n\n");
	printf("半( 1 )、丁( 2 )を入力\n予想:");
	scanf_s("%d", &answer);

	if (answer == 2) {
		printf("回答：丁\n");
	}
	else if (answer == 1) {
		printf("回答：半\n");
	}

	// 正誤判定
	std::function<void()> result = [&]() {

		// プレイヤー予想
		int playerAnswer = answer % 2;
		// ダイスの結果
		int diceAnswer = diceResult % 2;

		// 偶数なら丁
		if (diceAnswer == 0) {
			printf("答:丁\n");
		}// 奇数なら半
		else if (diceAnswer == 1) {
			printf("答:半\n");
		}

		// どちらも同じ数なら正解
		if (playerAnswer == diceResult) {
			printf("結果:正\n\n");
		}
		else {
			printf("結果:誤\n\n");
		}
	};

	// もったいつける
	SetTimeout(result,3);
	

	return 0;
}