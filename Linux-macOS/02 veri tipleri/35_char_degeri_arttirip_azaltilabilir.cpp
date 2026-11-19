#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	/* char veri tipinin sakladığı sayı arttırıp azaltılarak
	 * sakladığı karakter değiştirilebilir. */
	
	char karakter = 'A';
	cout << karakter << endl;
	
	karakter = karakter + 2;
	cout << karakter << endl;
	
	karakter = karakter - 1;
	cout << karakter << endl;
	
	return 0;
}

