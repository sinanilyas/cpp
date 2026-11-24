#include <iostream>
#include <iomanip> // setprecision için gerekli
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	// fixed kullanılmıyorsa toplam 3 anlamlı basamak gösterilir
	cout << setprecision(3);
		
	cout << "fixed olmadan setprecision(3)" << endl;

	cout << 5.123456 << endl;    // 5.12
	cout << 123.456 << endl;     // 123
	cout << 0.0123456 << endl;   // 0.0123
	
	// fixed ile birlikte kullanılırsa virgülden sonra 3 basamak gösterilir
	cout << fixed << setprecision(3);

	cout << endl;
	cout << "fixed ile birlikte setprecision(3)" << endl;

	cout << 5.123456 << endl;    // 5.123
	cout << 123.456 << endl;     // 123.456
	cout << 0.0123456 << endl;   // 0.012
	
	return 0;
}

