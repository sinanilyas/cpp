#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int sayi = 7;
	
	// int tipli sayi değişkeninin boyutu (hafızada kaç byte yer kapladığı) yazdırılır
	cout << sizeof(sayi) << endl;
	
	return 0;
}

