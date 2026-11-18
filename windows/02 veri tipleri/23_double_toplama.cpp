#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	double s1 = 0.1; 
	double s2 = 0.2;
	
	double toplam = s1 + s2;

	cout << fixed << setprecision(20) << toplam << endl; // 0.30000000000000004441
	
	return 0;
}

