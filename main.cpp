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

	// �\�z
	int answer;
	// �_�C�X
	// �T�C�R��������
	int currentTime = time(nullptr);
	srand(currentTime);
	int diceResult = rand() % 6 + 1;

	printf("��( 1 )�A��( 2 )�I��\n\n");
	printf("��( 1 )�A��( 2 )�����\n�\�z:");
	scanf_s("%d", &answer);

	if (answer == 2) {
		printf("�񓚁F��\n");
	}
	else if (answer == 1) {
		printf("�񓚁F��\n");
	}

	// ���딻��
	std::function<void()> result = [&]() {

		// �v���C���[�\�z
		int playerAnswer = answer % 2;
		// �_�C�X�̌���
		int diceAnswer = diceResult % 2;

		// �����Ȃ璚
		if (diceAnswer == 0) {
			printf("��:��\n");
		}// ��Ȃ甼
		else if (diceAnswer == 1) {
			printf("��:��\n");
		}

		// �ǂ�����������Ȃ琳��
		if (playerAnswer == diceResult) {
			printf("����:��\n\n");
		}
		else {
			printf("����:��\n\n");
		}
	};

	// ������������
	SetTimeout(result,3);
	

	return 0;
}