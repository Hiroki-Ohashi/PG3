#include <stdio.h>
#include <thread>
#include <iostream>

void thread1() {
	std::cout << "thread1" << std::endl;
}

void thread2() {
	std::cout << "thread2" << std::endl;
}

void thread3() {
	std::cout << "thread3" << std::endl;
}


int main() {

	std::thread th1(thread1);
	th1.join();

	std::thread th2(thread2);
	th2.join();

	std::thread th3(thread3);
	th3.join();

	return 0;
}