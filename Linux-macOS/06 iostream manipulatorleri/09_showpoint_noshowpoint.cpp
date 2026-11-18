#include <iostream>
#include <iomanip> // setprecision için gerekli

using namespace std;

int main(int argc, char** argv) {
	// Ondalık noktayı ve sondaki sıfırları göster
	// (varsayılan precision: 6)
	cout << showpoint;
	
	cout << 5.0 << endl;      // 5.00000
	cout << 5.12 << endl;     // 5.12000
	
	// Varsayılan ayara geri dön
	cout << noshowpoint;
	
	cout << 5.0 << endl;      // 5
	cout << 5.12 << endl;     // 5.12
	
	return 0;
}

