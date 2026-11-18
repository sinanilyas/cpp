#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	/* '\n' (10) alt satıra geçer */
	
	// "Silgi" yazılır, imleç alt satıra geçer.
	// "Dergi" yazılır.
	cout << "Silgi\nDergi" << endl;
	
	return 0;
}

