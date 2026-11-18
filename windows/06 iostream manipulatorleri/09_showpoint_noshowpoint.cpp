#include <iostream>
#include <iomanip> // setprecision için gerekli

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	// Ondalýk noktayý ve sondaki sýfýrlarý göster
	// (varsayýlan precision: 6)
	cout << showpoint;
	
	cout << 5.0 << endl;      // 5.00000
	cout << 5.12 << endl;     // 5.12000
	
	// Varsayýlan ayara geri dön
	cout << noshowpoint;
	
	cout << 5.0 << endl;      // 5
	cout << 5.12 << endl;     // 5.12
	
	return 0;
}

