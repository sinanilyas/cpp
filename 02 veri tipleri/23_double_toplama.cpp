#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	double s1 = 0.1; 
	double s2 = 0.2;
	
	double toplam = s1 + s2;

	cout << fixed << setprecision(20) << toplam << endl; // 0.30000000000000004441
	
	return 0;
}

