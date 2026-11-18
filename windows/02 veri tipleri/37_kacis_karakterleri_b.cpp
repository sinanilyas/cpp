#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	/* '\b' (8) karakteri kendinden önceki karakteri siler. */
	
	cout << "Dolap\b\bma" << endl; // Dolma
	
	return 0;
}

