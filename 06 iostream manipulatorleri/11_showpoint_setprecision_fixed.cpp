#include <iostream>
#include <iomanip> // setprecision için gerekli

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	// Virgülden sonra 4 hane göster,
	// 4 haneden az ise 0 ekleyerek tamamla
	cout << showpoint << setprecision(4) << fixed;
	
	cout << 5.0 << endl;      // 5.0000
	cout << 5.12 << endl;     // 5.1200
	cout << 5.123456 << endl; // 5.1235
	
	return 0;
}

