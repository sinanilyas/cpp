#include <iostream>
#include <iomanip> // setw için gerekli
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	cout << left << setw(10) << "Elif" << right << setw(5) << 9 << endl;
	cout << left << setw(10) << "Mustafa" << right << setw(5) << 100 << endl;
	cout << left << setw(10) << "Ayşe" << right << setw(5) << 85 << endl;
	
	return 0;
}

