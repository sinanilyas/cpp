#include <iostream>
#include <windows.h>

namespace sayilar {
	int sayi = 6;
}

namespace degerler {
	int sayi = 8;
}

using namespace std;
using namespace sayilar;
using namespace degerler;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	// HATA: Hangi namespace'teki değişkenin kullanılacağı belirsiz
	cout << "Sayı: " << sayi << endl;

	return 0;
}

