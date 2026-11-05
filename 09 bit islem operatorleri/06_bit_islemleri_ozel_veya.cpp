#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");

	int sonuc;
	
	/* Özel Veya (Exclusive Or - EXOR/XOR )
	 * bitlerin farklý olup olmadýðýný kontrol eder
	 * 0 ^ 0 = 0
	 * 0 ^ 1 = 1
	 * 1 ^ 0 = 1
	 * 1 ^ 1 = 0
	 */
	
	// Sayý1: 00000000000000000000000000000101 (5)
	// Sayý2: 00000000000000000000000000000011 (3)
	// Sonuç: 00000000000000000000000000000110 (6)
	sonuc = 5 ^ 3;
	cout << sonuc << endl; // 6
	
	// Sayý1: 00000000000000000000000000001010 (10)
	// Sayý2: 00000000000000000000000000000110 (6)
	// Sonuç: 00000000000000000000000000001100 (12)
	sonuc = 10 ^ 6;
	cout << sonuc << endl; // 12
	
	// Sayý1: 00000000000000000000000000001111 (15)
	// Sayý2: 00000000000000000000000000000110 (6)
	// Sonuç: 00000000000000000000000000001001 (9)
	sonuc = 15 ^ 6;
	cout << sonuc << endl; // 9
	
	return 0;
}

