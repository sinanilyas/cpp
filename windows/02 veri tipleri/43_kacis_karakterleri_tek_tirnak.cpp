#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	/* Ekrana ' yazdırmak için direkt ' veya \' yazılır. */
	
	cout << "Bana 'merhaba' dedi." << endl;
	cout << "Bana \'merhaba\' dedi." << endl;
	
	return 0;
}

