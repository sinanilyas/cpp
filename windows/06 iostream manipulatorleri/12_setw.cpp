#include <iostream>
#include <iomanip> // setw için gerekli

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	cout << setw(10) << "Elif" << setw(5) << 9 << endl;
	cout << setw(10) << "Mustafa" << setw(5) << 100 << endl;
	cout << setw(10) << "Ayþe" << setw(5) << 85 << endl;
	
	return 0;
}

