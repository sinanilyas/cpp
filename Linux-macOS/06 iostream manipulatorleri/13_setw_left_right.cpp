#include <iostream>
#include <iomanip> // setw için gerekli

using namespace std;

int main(int argc, char** argv) {
	cout << left << setw(10) << "Elif" << right << setw(5) << 9 << endl;
	cout << left << setw(10) << "Mustafa" << right << setw(5) << 100 << endl;
	cout << left << setw(10) << "Zeynep" << right << setw(5) << 85 << endl;

	// Türkçe harfler birden fazla bayt kapladığı için setw ile hizalama kayabilir.
	
	return 0;
}

