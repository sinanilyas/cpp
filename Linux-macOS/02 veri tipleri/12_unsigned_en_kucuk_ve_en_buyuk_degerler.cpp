#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	unsigned short s1 = 0;     // Saklayabileceği en küçük değer
	unsigned short s2 = 65535; // Saklayabileceği en büyük değer
	unsigned short s3 = 65536; // Saklayabileceği en büyük değerin bir fazlası
	
	cout << "Sayı 1: " << s1 << endl;
	cout << "Sayı 2: " << s2 << endl;
	cout << "Sayı 3: " << s3 << endl;
	
	return 0;
}

