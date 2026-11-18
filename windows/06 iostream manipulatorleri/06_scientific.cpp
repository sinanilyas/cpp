#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	// Ondalýklý sayýlarý bilimsel gösterim biçiminde göster
	cout << scientific;
		
	cout << 5.12 << endl; // 5.120000e+000
	cout << 5.123456789 << endl; // 5.123457e+000
	cout << 123456789.123456789 << endl; // 1.234568e+008
	
	return 0;
}

