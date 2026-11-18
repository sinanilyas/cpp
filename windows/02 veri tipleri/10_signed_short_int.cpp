#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	short s1 = 6;
	short int s2 = 7;         // int yazmak zorunlu deðildir
	signed short s3 = 8;      // signed yazmak zorunlu deðildir
	signed short int s4 = 9;
	
	cout << "Sayý 1: " << s1 << endl;
	cout << "Sayý 2: " << s2 << endl;
	cout << "Sayý 3: " << s3 << endl;
	cout << "Sayý 4: " << s4 << endl;
	
	return 0;
}

