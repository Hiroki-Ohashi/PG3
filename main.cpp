#include <iostream>
#include <string>
#include <chrono>

int main() {
	// 十万文字
	std::string a(100000, 'a');

	// コピーにかかる時間
	std::string copyTime{};
	auto copyStart = std::chrono::system_clock::now();
	copyTime = a;
	auto copyEnd = std::chrono::system_clock::now();
	std::chrono::duration<double, std::micro> time1 = copyEnd - copyStart;

	// 移動にかかる時間
	std::string moveTime{};
	auto moveStart = std::chrono::system_clock::now();
	moveTime = std::move(a);
	auto moveEnd = std::chrono::system_clock::now();
	std::chrono::duration<double, std::micro> time2 = moveEnd - moveStart;

	// 経過時間
	std::cout << time1.count() << "μs" << std::endl;
	std::cout << time2.count() << "μs" << std::endl;

	return 0;
}