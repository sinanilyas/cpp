#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	/* char veri tipinin sakladýðý deðer int tipli bir deðiþkene atanabilir. */
	
	char karakter = 'A';
	int sayi = karakter;

	cout << sayi << endl;
	
	return 0;
}

