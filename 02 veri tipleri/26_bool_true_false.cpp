#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	/* false = 0 ve true = 1 olarak saklanýr */
	
	bool s1 = false;
	bool s2 = true;

	cout << s1 << endl  // 0
	     << s2 << endl; // 1
	
	return 0;
}

