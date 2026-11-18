#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");

	int s1, s2, s3;
	
	s1 = s2 = s3 = 6; // Tüm deðiþkenlere 6 deðeri atanýr
	
	/*
		Yukarýdaki ifade þu þekilde de ifade edilebilir:
		s1 = ( s2 = ( s3 = 6 ) )
		
		Önce s3 = 6 atama iþlemi yapýlýr
		Sonra s2 = s3 atama iþlemi yapýlýr
		Daha sonra s1 = s2 atama iþlemi yapýlýr
	*/
	
	cout << "Sayý 1: " << s1 << endl;
	cout << "Sayý 2: " << s2 << endl;
	cout << "Sayý 3: " << s3 << endl;
	
	return 0;
}

