#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	/* '\a' (7) karakteri ekranda görünmez, uyarı sesi verilmesini sağlar. */
	
	cout << "Uyarı sesi çalacak" << '\a' << endl;
	
	return 0;
}

