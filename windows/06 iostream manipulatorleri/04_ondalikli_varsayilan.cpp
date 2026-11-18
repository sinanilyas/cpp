#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	// Varsayýlan (sayýyagöre kendisi gösterim þekline karar veriyor)
	
	cout << 5.12 << endl; // 5.12
	cout << 5.123456789 << endl; // 5.12346
	cout << 123456789.123456789 << endl; // 1.23457e+008
	
	return 0;
}

