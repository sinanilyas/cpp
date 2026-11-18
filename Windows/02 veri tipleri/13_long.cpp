#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	long s1 = 6;
	long int s2 = 7;
	signed long s3 = 8;
	signed long int s4 = 9;
	
	cout << "Sayı 1: " << s1 << endl;
	cout << "Sayı 2: " << s2 << endl;
	cout << "Sayı 3: " << s3 << endl;
	cout << "Sayı 4: " << s4 << endl;
	
	return 0;
}

