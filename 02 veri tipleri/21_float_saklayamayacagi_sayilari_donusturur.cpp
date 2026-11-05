#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	/* float veri tipi her sayýyý doðru bir þekilde saklayacaðýný garanti etmez.
	 * Saklayamayacaðý sayýlarý saklayabileceði en yakýn sayýya dönüþtürür. */
	
	float s1 = 1234.5678; 
	float s2 = 0.0000009;
	float s3 = 1234567890123456789;

	cout << fixed
	     << s1 << endl  // 1234.567749
	     << s2 << endl  // 0.000001
	     << s3 << endl; // 1234567939550609408.000000
	
	return 0;
}

