#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");

	int sonuc;

	// Eski: 00000000000000000000000000000101 (5)
	// Yeni: 11111111111111111111111111111010 (-6)
	sonuc = ~5;
	cout << sonuc << endl; // -6

	// Eski: 00000000000000000000000000001010 (10)
	// Yeni: 11111111111111111111111111110101 (-11)
	sonuc = ~10;
	cout << sonuc << endl; // -11

	// Eski: 11111111111111111111111111111011 (-5)
	// Yeni: 00000000000000000000000000000100 (4)
	sonuc = ~-5;
	cout << sonuc << endl; // 4

	return 0;
}

