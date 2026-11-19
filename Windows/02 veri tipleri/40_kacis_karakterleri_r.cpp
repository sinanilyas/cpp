#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	/* '\r' (13) satır başına döner */
	
	// "Silgi" yazılır, imleç satırın başına döner.
	// "Der" ilk üç karakterin üzerine yazılır.
	cout << "Silgi\rDer" << endl; // Dergi
	
	return 0;
}

