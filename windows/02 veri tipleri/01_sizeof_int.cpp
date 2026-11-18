#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	// int tipli değişkenlerin boyutu (hafızada kaç byte yer kapladığı) yazdırılır
	cout << sizeof(int) << endl;
	
	return 0;
}

