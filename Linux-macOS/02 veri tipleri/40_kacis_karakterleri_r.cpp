#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	/* '\r' (13) satır başına döner */
	
	// "Silgi" yazılır, imleç satırın başına döner.
	// "Der" ilk üç karakterin üzerine yazılır.
	cout << "Silgi\rDer" << endl; // Dergi
	
	return 0;
}

