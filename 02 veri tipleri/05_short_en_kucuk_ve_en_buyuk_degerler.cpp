#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	short s1 = -32768; // Saklayabileceði en küçük deðer
	short s2 = 32767;  // Saklayabileceði en büyük deðer
	
	cout << "Sayý 1: " << s1 << endl
	     << "Sayý 2: " << s2 << endl;
	
	return 0;
}

