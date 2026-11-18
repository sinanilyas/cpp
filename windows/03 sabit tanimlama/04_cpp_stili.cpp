#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");

	/* C++ stili tanýmlamada sabitler týpký deðiþken tanýmlar gibi
	 * tanýmlanýr ve baþýna const anahtar kelimesi yazýlýr. */
	const double KATSAYI = 4.5;

	cout << KATSAYI << endl;

	return 0;
}

