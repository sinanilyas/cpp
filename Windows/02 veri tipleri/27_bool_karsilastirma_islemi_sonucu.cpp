#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	/* Karşılaştırma işlemlerinin sonuçları true/false olduğu için
	 * bu işlemlerin sonuçları bool değişkenlerde saklanabilir */
	
	bool s1 = 4 < 1;
	bool s2 = 4 == 4;

	cout << s1 << endl  // 0
	     << s2 << endl; // 1
	
	return 0;
}

