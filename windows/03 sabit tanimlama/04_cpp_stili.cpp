#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	/* C++ stili tanımlamada sabitler tıpkı değişken tanımlar gibi
	 * tanımlanır ve başına const anahtar kelimesi yazılır. */
	const double KATSAYI = 4.5;

	cout << KATSAYI << endl;

	return 0;
}

