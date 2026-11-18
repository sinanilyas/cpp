#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	/* double veri tipi float'a göre daha fazla anlamlı basamak saklayabilir
	 * ancak diğer tüm kayan noktalı veri tipleri gibi double da verilen
	 * sayıyı birebir aynı şekilde saklayacağını garanti etmez. */
	
	double s1 = 1234.5678; 
	double s2 = 0.0000009;
	double s3 = 1234567890123456789;

	cout << fixed
	     << s1 << endl  // 1234.567800
	     << s2 << endl  // 0.000001
	     << s3 << endl; // 1234567890123456768.000000
	
	return 0;
}

