#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	// Bir değişkene sınırlarının dışında bir değer atandığında
	// bu değer farklı bir değere dönüştürülür
	
	short s1 = -32769;  // En küçük değerin bir eksiği
	short s2 = 32768;  // En büyük değerin bir fazlası
	
	cout << "Sayı 1: " << s1 << endl
	     << "Sayı 2: " << s2 << endl;
	
	return 0;
}

