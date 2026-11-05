#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	long double s1 = 1234.5678; 
	long double s2 = 0.0000009;
	long double s3 = 1234567890123456789;

	cout << fixed
	     << s1 << endl  // 1234.567800
	     << s2 << endl  // 0.000001
	     << s3 << endl; // 1234567890123456789.000000
	
	return 0;
}

