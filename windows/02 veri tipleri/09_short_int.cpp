#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	short int s1 = 7; // int yazmak zorunlu deðildir
	short s2 = 9;

	cout << "Sayý 1: " << s1 << endl;
	cout << "Sayý 2: " << s2 << endl;
	
	return 0;
}

