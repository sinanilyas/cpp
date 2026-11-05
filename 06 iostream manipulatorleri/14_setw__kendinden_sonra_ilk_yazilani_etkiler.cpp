#include <iostream>
#include <iomanip> // setw için gerekli

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	// setw yalnýzca kendinden sonra ilk yazýlaný etkiler
	cout << setw(4) << 85 << 90 << endl;  // 90 için ayrýca setw gerekli
	cout << setw(4) << 85 << setw(4) << 90 << endl;
	
	return 0;
}

