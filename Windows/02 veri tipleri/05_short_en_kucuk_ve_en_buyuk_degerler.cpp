#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	short s1 = -32768; // Saklayabileceği en küçük değer
	short s2 = 32767;  // Saklayabileceği en büyük değer
	
	cout << "Sayı 1: " << s1 << endl
	     << "Sayı 2: " << s2 << endl;
	
	return 0;
}

