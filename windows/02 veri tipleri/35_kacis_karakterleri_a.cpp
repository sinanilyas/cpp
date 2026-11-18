#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	/* '\a' (7) karakteri ekranda görünmez, uyarý sesi verilmesini saðlar. */
	
	cout << "Uyarý sesi çalacak" << '\a' << endl;
	
	return 0;
}

