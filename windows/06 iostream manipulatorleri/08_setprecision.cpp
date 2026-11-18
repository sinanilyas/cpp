#include <iostream>
#include <iomanip> // setprecision için gerekli

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	// fixed kullanýlmýyorsa toplam 3 anlamlý basamak gösterilir
	cout << setprecision(3);
		
	cout << "fixed olmadan setprecision(3)" << endl;

	cout << 5.123456 << endl;    // 5.12
	cout << 123.456 << endl;     // 123
	cout << 0.0123456 << endl;   // 0.0123
	
	// fixed ile birlikte kullanýlýrsa virgülden sonra 3 basamak gösterilir
	cout << fixed << setprecision(3);

	cout << endl;
	cout << "fixed ile birlikte setprecision(3)" << endl;

	cout << 5.123456 << endl;    // 5.123
	cout << 123.456 << endl;     // 123.456
	cout << 0.0123456 << endl;   // 0.012
	
	return 0;
}

