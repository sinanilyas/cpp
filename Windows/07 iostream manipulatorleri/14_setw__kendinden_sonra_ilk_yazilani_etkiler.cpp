#include <iostream>
#include <iomanip> // setw için gerekli
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	// setw yalnızca kendinden sonra ilk yazılanı etkiler
	cout << setw(4) << 85 << 90 << endl;  // 90 için ayrıca setw gerekli
	cout << setw(4) << 85 << setw(4) << 90 << endl;
	
	return 0;
}

