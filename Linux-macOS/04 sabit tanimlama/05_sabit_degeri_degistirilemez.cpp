#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	/* C++ stili tanımlamada sabitler tıpkı değişken tanımlar gibi
	 * tanımlanır ve başına const anahtar kelimesi yazılır.
	 * C++ dilinde program yazarken bu stil önerilir. */
	const double KATSAYI = 4.5;

	KATSAYI = 2.4; // HATA: Sabit değeri değiştirilemez

	cout << KATSAYI << endl;

	return 0;
}

