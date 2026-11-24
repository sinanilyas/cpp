#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int sonuc;
	
	/* 1 bit sağa kaydırıldığında sayı 2'ye bölünür ve varsa kalan atılır */

	// Eski: 00000000000000000000000000000101 (5)
	// Yeni: 00000000000000000000000000000010 (2)
	sonuc = 5 >> 1;
	cout << sonuc << endl; // 2
	
	/* 2 bit sağa kaydırıldığında sayı 2x2=4'e bölünür ve varsa kalan atılır */
	
	// Eski: 00000000000000000000000000000101 (5)
	// Yeni: 00000000000000000000000000000001 (1)
	sonuc = 5 >> 2;
	cout << sonuc << endl; // 1
	
	/* 3 bit sağa kaydırıldığında sayı 2x2x2=8'e bölünür ve varsa kalan atılır */
	
	// Eski: 00000000000000000000000000000101 (5)
	// Yeni: 00000000000000000000000000000000 (0)
	sonuc = 5 >> 3;
	cout << sonuc << endl; // 0
	
	return 0;
}

