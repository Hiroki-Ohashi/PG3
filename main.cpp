#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

typedef int (*PFunc)();

void Answer(PFunc p, int answer) {
	int dice = p() % 2;
	int anticipation = answer % 2;
	Sleep(3000);

	printf("��:");

	// �����Ȃ璚
	if (dice == 0) {
		printf("��\n");
		Sleep(1500);
	}// ��Ȃ甼
	else if (dice != 0) {
		printf("��\n");
		Sleep(1500);
	}

	// �ǂ�����������Ȃ琳��
	if (anticipation == dice) {
		printf("��\n\n");
	}
	else {
		printf("��\n\n");
	}
}

int dice() {
	int result = rand() % 6 + 1;
	return result;
}

int main() {
	// �T�C�R��������
	int currentTime = time(nullptr);
	srand(currentTime);

	// �֐��|�C���^
	PFunc pfunc = &dice;
	// ���͂����\�z
	int answer;

	printf("��( 2 )�A��( 1 )�I��\n\n");
	while (1) {
		printf("��( 2 )�A��( 1 )�����\n");
		printf("�\�z:");
		scanf_s("%d", &answer);

		Answer(pfunc, answer);
	}

	return 0;
}