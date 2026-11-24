#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	cout << hex;
	cout << "16'lı Sistem: "  << 15 << endl;
	cout << "16'lı Sistem: "  << 0xF << endl;
	cout << "16'lı Sistem: "  << 0b1111 << endl;

	cout << oct;
	cout << "8'li Sistem: " << 15 << endl;
	cout << "8'li Sistem: " << 0xF << endl;
	cout << "8'li Sistem: " << 0b1111 << endl;

	cout << dec;
	cout << "10'lu Sistem: " << 15 << endl;
	cout << "10'lu Sistem: " << 0xF << endl;
	cout << "10'lu Sistem: " << 0b1111 << endl;
	
	return 0;
}

