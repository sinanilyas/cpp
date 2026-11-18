#include <iostream>
#include <windows.h>
#define KATSAYI 4.5 // C stili sabit tanımlama

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	cout << KATSAYI << endl;

	return 0;
}

