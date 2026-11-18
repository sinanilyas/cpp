#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");

	int s1, s2, s3;
	
	// Tüm deðiþkenlere 6 deðeri atanýr,
	// 7 ve 8 deðerleri dikkate alýnmaz
	s1 = s2 = s3 = 6, 7, 8;
	
	cout << "Sayý 1: " << s1 << endl;
	cout << "Sayý 2: " << s2 << endl;
	cout << "Sayý 3: " << s3 << endl;
	
	return 0;
}

