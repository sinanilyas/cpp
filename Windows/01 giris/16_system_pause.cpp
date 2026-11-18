#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	cout << "Satır 1" << endl;
	cout << "Satır 2" << endl;

	/* Bir tuşa basılana kadar bekle.
	 * system("pause") yalnızca Windows'ta çalışır. Linux ve macOS'ta
	 * çalışmaz; bu sistemlerde gerekli de değildir. */
	system("pause");
	
	return 0;
}

