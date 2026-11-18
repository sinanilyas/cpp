#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	/* Karşılaştırma işlemlerinin sonuçları true/false olduğu için
	 * bu işlemlerin sonuçları bool değişkenlerde saklanabilir */
	
	bool s1 = 4 < 1;
	bool s2 = 4 == 4;

	cout << s1 << endl  // 0
	     << s2 << endl; // 1
	
	return 0;
}

