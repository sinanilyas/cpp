#include <iostream>
#include <windows.h>

namespace sayilar {
	int s1 = 5, s2 = 6;
}

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	cout << "Sayı 1: " << s1 << endl; // HATA: s1 değişkeni tanımlı değil
	cout << "Sayı 2: " << s2 << endl; // HATA: s2 değişkeni tanımlı değil

	return 0;
}

