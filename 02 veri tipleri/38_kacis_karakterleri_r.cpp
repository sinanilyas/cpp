#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	/* '\r' (13) satýr baþýna döner */
	
	// "Silgi" yazýlýr, imleç satýrýn baþýna döner.
	// "Der" ilk üç karakterin üzerine yazýlýr.
	cout << "Silgi\rDer" << endl; // Dergi
	
	return 0;
}

