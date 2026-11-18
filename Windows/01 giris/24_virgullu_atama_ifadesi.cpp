#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int s1, s2, s3;
	
	// Tüm değişkenlere 6 değeri atanır,
	// 7 ve 8 değerleri dikkate alınmaz
	s1 = s2 = s3 = 6, 7, 8;
	
	cout << "Sayı 1: " << s1 << endl;
	cout << "Sayı 2: " << s2 << endl;
	cout << "Sayı 3: " << s3 << endl;
	
	return 0;
}

