#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	// Varsayılan (sayıyagöre kendisi gösterim şekline karar veriyor)
	
	cout << 5.12 << endl; // 5.12
	cout << 5.123456789 << endl; // 5.12346
	cout << 123456789.123456789 << endl; // 1.23457e+008
	
	return 0;
}

