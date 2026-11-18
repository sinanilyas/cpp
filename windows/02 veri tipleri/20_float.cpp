#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	float sayi = 1234.5;
	
	cout << fixed << sayi << endl;
	
	return 0;
}

