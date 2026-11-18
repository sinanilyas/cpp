#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	/* double veri tipi float'a göre daha fazla anlamlý basamak saklayabilir
	 * ancak diðer tüm kayan noktalý veri tipleri gibi double da verilen
	 * sayýyý birebir ayný þekilde saklayacaðýný garanti etmez. */
	
	double s1 = 1234.5678; 
	double s2 = 0.0000009;
	double s3 = 1234567890123456789;

	cout << fixed
	     << s1 << endl  // 1234.567800
	     << s2 << endl  // 0.000001
	     << s3 << endl; // 1234567890123456768.000000
	
	return 0;
}

