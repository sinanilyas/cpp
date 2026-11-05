#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	/* bool veri tipi sadece 0 ve 1 deðerlerini saklar.
	 * 0 haricindeki tüm sayýlarý 1'e dönüþtürür. */
	
	bool s1 = 0;
	bool s2 = 1;
	bool s3 = -5;
	bool s4 = 8;

	cout << s1 << endl  // 0
	     << s2 << endl  // 1
	     << s3 << endl  // 1
	     << s4 << endl; // 1
	
	return 0;
}

