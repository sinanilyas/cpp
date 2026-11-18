#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int s1, s2, s3;
	
	s1 = s2 = s3 = 6; // Tüm değişkenlere 6 değeri atanır
	
	/*
		Yukarıdaki ifade şu şekilde de ifade edilebilir:
		s1 = ( s2 = ( s3 = 6 ) )
		
		Önce s3 = 6 atama işlemi yapılır
		Sonra s2 = s3 atama işlemi yapılır
		Daha sonra s1 = s2 atama işlemi yapılır
	*/
	
	cout << "Sayı 1: " << s1 << endl;
	cout << "Sayı 2: " << s2 << endl;
	cout << "Sayı 3: " << s3 << endl;
	
	return 0;
}

