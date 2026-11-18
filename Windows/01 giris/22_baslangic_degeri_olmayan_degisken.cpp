#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	// Değişkenlere başlangıç değeri verilmediğinde hata vermez, rastgele bir değer alır
	int s1, s2, s3, s4, s5;
	
	cout << "Sayı 1: " << s1 << endl;
	cout << "Sayı 2: " << s2 << endl;
	cout << "Sayı 3: " << s3 << endl;
	cout << "Sayı 4: " << s4 << endl;
	cout << "Sayı 5: " << s5 << endl;
	
	return 0;
}

