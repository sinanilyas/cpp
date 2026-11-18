#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int s1, s2, s3;
	
	s1 = 6;
	s2 = 7;
	s3 = 8;
	
	cout << "Sayı 1: " << s1 << endl;
	cout << "Sayı 2: " << s2 << endl;
	cout << "Sayı 3: " << s3 << endl;
	
	return 0;
}

