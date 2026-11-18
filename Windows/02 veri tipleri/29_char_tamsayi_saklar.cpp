#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	/* char veri tipi karakterleri arka planda tamsayı olarak saklar.
	 * Bu yüzden char tipli değişkenlere direkt bir tamsayı değeri atanabilir. */
	
	char karakter = 65;

	cout << karakter << endl;
	
	return 0;
}

