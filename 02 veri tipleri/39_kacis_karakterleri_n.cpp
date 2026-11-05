#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	/* '\n' (10) alt satýra geçer */
	
	// "Silgi" yazýlýr, imleç alt satýra geçer.
	// "Dergi" yazýlýr.
	cout << "Silgi\nDergi" << endl;
	
	return 0;
}

