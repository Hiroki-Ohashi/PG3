#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <functional>

int main() {

	std::function<void(int, int)> result = [&](int p, int answer) {
		int dice = p % 2;
		int anticipation = answer % 2;
		Sleep(3000);

		printf("��:");

		// �����Ȃ璚
		if (dice == 0) {
			printf("��\n");
		}// ��Ȃ甼
		else if (dice != 0) {
			printf("��\n");
		}

		// �ǂ�����������Ȃ琳��
		if (anticipation == dice) {
			printf("����:��\n\n");
		}
		else {
			printf("����:��\n\n");
		}
	};

	// �T�C�R��������
	int currentTime = time(nullptr);
	srand(currentTime);

	std::function<int()> dice = [&]() {
		int result = rand() % 6 + 1;
		return result;
	};

	
	// �\�z
	int answer;

	printf("��( 2 )�A��( 1 )�I��\n\n");
	while (1) {
		printf("��( 2 )�A��( 1 )�����\n");
		printf("�\�z:");
		scanf_s("%d", &answer);

		result(dice(), answer);
	}

	return 0;
}