#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");

	/* C++ stili tanýmlamada sabitler týpký deðiþken tanýmlar gibi
	 * tanýmlanýr ve baþýna const anahtar kelimesi yazýlýr.
	 * C++ dilinde program yazarken bu stil önerilir. */
	const double KATSAYI = 4.5;

	KATSAYI = 2.4; // HATA: Sabit deðeri deðiþtirilemez

	cout << KATSAYI << endl;

	return 0;
}

