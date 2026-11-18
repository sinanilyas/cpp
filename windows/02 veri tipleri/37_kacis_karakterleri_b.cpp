#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	/* '\b' (8) karakteri kendinden önceki karakteri siler. */
	
	cout << "Dolap\b\bma" << endl; // Dolma
	
	return 0;
}

