#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	// Bir deðiþkene sýnýrlarýnýn dýþýnda bir deðer atandýðýnda
	// bu deðer farklý bir deðere dönüþtürülür
	
	short s1 = -32769;  // En küçük deðerin bir eksiði
	short s2 = 32768;  // En büyük deðerin bir fazlasý
	
	cout << "Sayý 1: " << s1 << endl
	     << "Sayý 2: " << s2 << endl;
	
	return 0;
}

