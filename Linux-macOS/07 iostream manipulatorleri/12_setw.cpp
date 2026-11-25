#include <iostream>
#include <iomanip> // setw için gerekli

using namespace std;

int main(int argc, char** argv) {
	cout << setw(10) << "Elif" << setw(5) << 9 << endl;
	cout << setw(10) << "Mustafa" << setw(5) << 100 << endl;
	cout << setw(10) << "Zeynep" << setw(5) << 85 << endl;

	// Türkçe harfler birden fazla bayt kapladığı için setw ile hizalama kayabilir.
	
	return 0;
}

