#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	cout << (3 < 5) << endl; // 1
	cout << boolalpha << (3 < 5) << endl; // true
	
	return 0;
}

