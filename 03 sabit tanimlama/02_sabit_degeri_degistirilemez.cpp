#include <iostream>
#define KATSAYI 4.5

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");

	KATSAYI = 2.4; // HATA: Sabit deðeri deðiþtirilemez

	cout << KATSAYI << endl;

	return 0;
}

