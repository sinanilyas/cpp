#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	/* char veri tipi karakterleri arka planda tamsayý olarak saklar.
	 * Bu yüzden char tipli deðiþkenlere direkt bir tamsayý deðeri atanabilir. */
	
	char karakter = 65;

	cout << karakter << endl;
	
	return 0;
}

