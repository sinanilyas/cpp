#include <iostream>
#include <windows.h>
#define KATSAYI 4.5

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	KATSAYI = 2.4; // HATA: Sabit değeri değiştirilemez

	cout << KATSAYI << endl;

	return 0;
}

