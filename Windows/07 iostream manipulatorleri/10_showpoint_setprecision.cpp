#include <iostream>
#include <iomanip> // setprecision için gerekli
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	// Toplam 4 anlamlı basamak göster,
	// eksik basamakları sondaki sıfırlarla tamamla
	cout << showpoint << setprecision(4);
	
	cout << 5.0 << endl;      // 5.000
	cout << 5.12 << endl;     // 5.120
	cout << 5.123456 << endl; // 5.123
	
	return 0;
}

