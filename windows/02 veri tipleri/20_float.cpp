#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	float sayi = 1234.5;
	
	cout << fixed << sayi << endl;
	
	return 0;
}

