#include <iostream>
#include <iomanip> // setprecision için gerekli
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	// Virgülden sonra 4 hane göster,
	// 4 haneden az ise 0 ekleyerek tamamla
	cout << showpoint << setprecision(4) << fixed;
	
	cout << 5.0 << endl;      // 5.0000
	cout << 5.12 << endl;     // 5.1200
	cout << 5.123456 << endl; // 5.1235
	
	return 0;
}

