#include <iostream>
#include <iomanip> // setw için gerekli
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	cout << setw(10) << "Elif" << setw(5) << 9 << endl;
	cout << setw(10) << "Mustafa" << setw(5) << 100 << endl;
	cout << setw(10) << "Ayşe" << setw(5) << 85 << endl;
	
	return 0;
}

