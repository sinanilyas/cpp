#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int sonuc;
	
	/* Özel Veya (Exclusive Or - EXOR/XOR )
	 * bitlerin farklı olup olmadığını kontrol eder
	 * 0 ^ 0 = 0
	 * 0 ^ 1 = 1
	 * 1 ^ 0 = 1
	 * 1 ^ 1 = 0
	 */
	
	// Sayı1: 00000000000000000000000000000101 (5)
	// Sayı2: 00000000000000000000000000000011 (3)
	// Sonuç: 00000000000000000000000000000110 (6)
	sonuc = 5 ^ 3;
	cout << sonuc << endl; // 6
	
	// Sayı1: 00000000000000000000000000001010 (10)
	// Sayı2: 00000000000000000000000000000110 (6)
	// Sonuç: 00000000000000000000000000001100 (12)
	sonuc = 10 ^ 6;
	cout << sonuc << endl; // 12
	
	// Sayı1: 00000000000000000000000000001111 (15)
	// Sayı2: 00000000000000000000000000000110 (6)
	// Sonuç: 00000000000000000000000000001001 (9)
	sonuc = 15 ^ 6;
	cout << sonuc << endl; // 9
	
	return 0;
}

