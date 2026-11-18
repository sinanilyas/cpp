#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	// Tek cout komutu ile de peş peşe yazdırılabilir	
	cout << "Satır 1" << endl << "Satır 2" << endl;
	
	return 0;
}

