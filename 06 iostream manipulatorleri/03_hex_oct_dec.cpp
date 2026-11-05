#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	cout << hex;
	cout << "16'lý Sistem: "  << 15 << endl;
	cout << "16'lý Sistem: "  << 0xF << endl;
	cout << "16'lý Sistem: "  << 0b1111 << endl;

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

