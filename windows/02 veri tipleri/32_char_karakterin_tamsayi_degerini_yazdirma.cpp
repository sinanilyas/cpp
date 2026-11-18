#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	/* char veri tipinin sakladığı değer int tipli bir değişkene atanabilir. */
	
	char karakter = 'A';
	int sayi = karakter;

	cout << sayi << endl;
	
	return 0;
}

