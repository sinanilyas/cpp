#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	// int 4 byte (32 bit) yer kapladığı için
	// örneğin 3 sayısı hafızada aşağıdaki şekilde saklanır
	// 00000000000000000000000000000011
	int sonuc;
	
	/* 1 bit sola kaydırıldığında sayının 2 katı bulunur */
	
	// Eski: 00000000000000000000000000000011 (3)
	// Yeni: 00000000000000000000000000000110 (6)
	sonuc = 3 << 1;
	cout << sonuc << endl; // 6
	
	/* 2 bit sola kaydırıldığında sayının 2x2=4 katı bulunur */

	// Eski: 00000000000000000000000000000011 (3)
	// Yeni: 00000000000000000000000000001100 (12)
	sonuc = 3 << 2;
	cout << sonuc << endl; // 12
	
	/* 3 bit sola kaydırıldığında sayının 2x2x2=8 katı bulunur */

	// Eski: 00000000000000000000000000000011 (3)
	// Yeni: 00000000000000000000000000011000 (24)
	sonuc = 3 << 3;
	cout << sonuc << endl; // 24
	
	return 0;
}

