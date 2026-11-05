#include <iostream>
#include <iomanip> // setw için gerekli

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	cout << left << setw(10) << "Elif" << right << setw(5) << 9 << endl;
	cout << left << setw(10) << "Mustafa" << right << setw(5) << 100 << endl;
	cout << left << setw(10) << "Ayþe" << right << setw(5) << 85 << endl;
	
	return 0;
}

