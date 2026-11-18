#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	cout << sizeof(float) << endl;        // 4
	cout << sizeof(double) << endl;       // 8
	cout << sizeof(long double) << endl;  // Genellikle 16; Visual Studio ve Apple Silicon: 8
	
	return 0;
}

