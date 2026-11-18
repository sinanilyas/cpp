#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	/* char tipli değişkenlerde saklanacak karakterler
	* tek tırnak arasında yazılır. */
	
	char karakter = 'A';

	cout << karakter << endl;
	
	return 0;
}

