#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	/* float veri tipi her sayıyı doğru bir şekilde saklayacağını garanti etmez.
	 * Saklayamayacağı sayıları saklayabileceği en yakın sayıya dönüştürür. */
	
	float s1 = 1234.5678; 
	float s2 = 0.0000009;
	float s3 = 1234567890123456789;

	cout << fixed
	     << s1 << endl  // 1234.567749
	     << s2 << endl  // 0.000001
	     << s3 << endl; // 1234567939550609408.000000
	
	return 0;
}

