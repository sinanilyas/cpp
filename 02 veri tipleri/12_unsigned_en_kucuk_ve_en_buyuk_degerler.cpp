#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	unsigned short s1 = 0;     // Saklayabileceði en küçük deðer
	unsigned short s2 = 65535; // Saklayabileceði en büyük deðer
	unsigned short s3 = 65536; // Saklayabileceði en büyük deðerin bir fazlasý
	
	cout << "Sayý 1: " << s1 << endl;
	cout << "Sayý 2: " << s2 << endl;
	cout << "Sayý 3: " << s3 << endl;
	
	return 0;
}

