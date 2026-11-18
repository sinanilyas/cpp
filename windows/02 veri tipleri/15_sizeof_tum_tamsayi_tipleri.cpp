#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	cout << sizeof(short) << endl;     // 64 bit Windows: 2 byte
	cout << sizeof(int) << endl;       // 64 bit Windows: 4 byte
	cout << sizeof(long) << endl;      // 64 bit Windows: 4 byte
	cout << sizeof(long long) << endl; // 64 bit Windows: 8 byte

	return 0;
}

