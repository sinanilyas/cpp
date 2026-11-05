#include <iostream>
#include <iomanip> // setprecision için gerekli

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	// Toplam 4 anlamlý basamak göster,
	// eksik basamaklarý sondaki sýfýrlarla tamamla
	cout << showpoint << setprecision(4);
	
	cout << 5.0 << endl;      // 5.000
	cout << 5.12 << endl;     // 5.120
	cout << 5.123456 << endl; // 5.123
	
	return 0;
}

