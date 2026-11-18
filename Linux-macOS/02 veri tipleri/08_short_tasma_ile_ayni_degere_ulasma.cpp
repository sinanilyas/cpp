#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	/* short 65536 farklı değer saklayabilir */
	
	// Bir sayının 65536 fazlası atanırsa bir tur atılıp aynı sayı elde edilir.	
	short s1 = 7 + 65536;
	cout << "Sayı 1: " << s1 << endl;
	
	// Bir sayının 65536x2=131072 fazlası atanırsa iki tur atılıp aynı sayı elde edilir.	
	short s2 = 7 + 65536 * 2;
	cout << "Sayı 2: " << s2 << endl;
	
	return 0;
}

