#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	/* short 65536 farklý deðer saklayabilir */
	
	// Bir sayýnýn 65536 fazlasý atanýrsa bir tur atýlýp ayný sayý elde edilir.	
	short s1 = 7 + 65536;
	cout << "Sayý 1: " << s1 << endl;
	
	// Bir sayýnýn 65536x2=131072 fazlasý atanýrsa iki tur atýlýp ayný sayý elde edilir.	
	short s2 = 7 + 65536 * 2;
	cout << "Sayý 2: " << s2 << endl;
	
	return 0;
}

