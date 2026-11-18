#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	cout << sizeof(float) << endl;        // 64 bit Windows: 4 byte
	cout << sizeof(double) << endl;       // 64 bit Windows: 8 byte
	cout << sizeof(long double) << endl;  // 64 bit Windows: 16 byte
	
	return 0;
}

