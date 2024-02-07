#include <iostream>
#include <string>
#include <chrono>

int main() {
	// �\������
	std::string a(100000, 'a');

	// �R�s�[�ɂ����鎞��
	std::string copyTime{};
	auto copyStart = std::chrono::system_clock::now();
	copyTime = a;
	auto copyEnd = std::chrono::system_clock::now();
	std::chrono::duration<double, std::micro> time1 = copyEnd - copyStart;

	// �ړ��ɂ����鎞��
	std::string moveTime{};
	auto moveStart = std::chrono::system_clock::now();
	moveTime = std::move(a);
	auto moveEnd = std::chrono::system_clock::now();
	std::chrono::duration<double, std::micro> time2 = moveEnd - moveStart;

	// �o�ߎ���
	std::cout << time1.count() << "��s" << std::endl;
	std::cout << time2.count() << "��s" << std::endl;

	return 0;
}