#include <iostream>
#include <windows.h>

namespace sayilar {
	int s1 = 5, s2 = 6;
}

using namespace std;
using namespace sayilar;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	cout << "Sayı 1: " << s1 << endl;
	cout << "Sayı 2: " << s2 << endl;

	return 0;
}

