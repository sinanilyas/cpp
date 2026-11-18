#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	// signed (işaretli) değişkenler negatif sayıları saklayabilir
	signed short s1 = -7;
	
	// unsigned (işaretsiz) değişkenler negatif sayıları saklayamaz
	unsigned short s2 = -7;
	
	cout << "Sayı 1: " << s1 << endl;
	cout << "Sayı 2: " << s2 << endl;
	
	return 0;
}

