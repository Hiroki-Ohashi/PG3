#include <stdio.h>
#include <list>

int main() {

	std::list<const char*> yamanotaLine{"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisugani", "Nippori","Tabata",
		"Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Shin-Okubo", "Shinjuku", "Yoyogi", "Harajuku",
		"Shibuya","Ebisu", "Meguro", "Gotanda", "Osaki", "Shinagawa","Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"};

	printf("[1970”N]");
	printf("\n");
	for (std::list<const char*>::iterator itr = yamanotaLine.begin(); itr != yamanotaLine.end(); itr++) {
		printf(*itr);
		printf("\n");
	}

	printf("\n");

	printf("[2019”N]\n");
	printf("\n");
	for (std::list<const char*>::iterator itr = yamanotaLine.begin(); itr != yamanotaLine.end(); itr++) {
		if (*itr == "Tabata") {
			itr = yamanotaLine.insert(itr, "Nishi-Nippori");
			break;
		}
	}
	for (std::list<const char*>::iterator itr = yamanotaLine.begin(); itr != yamanotaLine.end(); itr++) {
		printf(*itr);
		printf("\n");
	}

	printf("\n");

	printf("[2022”N]\n");
	for (std::list<const char*>::iterator itr = yamanotaLine.begin(); itr != yamanotaLine.end(); itr++) {
		if (*itr == "Tamachi") {
			itr = yamanotaLine.insert(itr, "Takanawa-Gateway");
			break;
		}
	}
	for (std::list<const char*>::iterator itr = yamanotaLine.begin(); itr != yamanotaLine.end(); itr++) {
		printf(*itr);
		printf("\n");
	}
	printf("\n");

	return 0;
}