#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");

	// int 4 byte (32 bit) yer kapladýðý için
	// örneðin 3 sayýsý hafýzada aþaðýdaki þekilde saklanýr
	// 00000000000000000000000000000011
	int sonuc;
	
	/* 1 bit sola kaydýrýldýðýnda sayýnýn 2 katý bulunur */
	
	// Eski: 00000000000000000000000000000011 (3)
	// Yeni: 00000000000000000000000000000110 (6)
	sonuc = 3 << 1;
	cout << sonuc << endl; // 6
	
	/* 2 bit sola kaydýrýldýðýnda sayýnýn 2x2=4 katý bulunur */

	// Eski: 00000000000000000000000000000011 (3)
	// Yeni: 00000000000000000000000000001100 (12)
	sonuc = 3 << 2;
	cout << sonuc << endl; // 12
	
	/* 3 bit sola kaydýrýldýðýnda sayýnýn 2x2x2=8 katý bulunur */

	// Eski: 00000000000000000000000000000011 (3)
	// Yeni: 00000000000000000000000000011000 (24)
	sonuc = 3 << 3;
	cout << sonuc << endl; // 24
	
	return 0;
}

