#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	/* char veri tipinin sakladýðý sayý arttýrýp azaltýlarak
	 * sakladýðý karakter deðiþtirilebilir. */
	
	char karakter = 'A';
	cout << karakter << endl;
	
	karakter = karakter + 2;
	cout << karakter << endl;
	
	karakter = karakter - 1;
	cout << karakter << endl;
	
	return 0;
}

