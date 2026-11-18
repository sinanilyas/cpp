#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	// Ondalıklı sayıları sabit noktalı biçimde göster
	cout << fixed;
		
	cout << 5.12 << endl; // 5.120000
	cout << 5.123456789 << endl; // 5.123457
	cout << 123456789.123456789 << endl; // 123456789.123457
	
	return 0;
}

