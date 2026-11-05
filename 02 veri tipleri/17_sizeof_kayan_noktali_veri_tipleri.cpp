#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	cout << sizeof(float) << endl;        // 64 bit Windows: 4 byte
	cout << sizeof(double) << endl;       // 64 bit Windows: 8 byte
	cout << sizeof(long double) << endl;  // 64 bit Windows: 16 byte
	
	return 0;
}

