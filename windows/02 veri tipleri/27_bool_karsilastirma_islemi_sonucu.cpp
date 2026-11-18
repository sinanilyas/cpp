#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	/* Karþýlaþtýrma iþlemlerinin sonuçlarý true/false olduðu için
	 * bu iþlemlerin sonuçlarý bool deðiþkenlerde saklanabilir */
	
	bool s1 = 4 < 1;
	bool s2 = 4 == 4;

	cout << s1 << endl  // 0
	     << s2 << endl; // 1
	
	return 0;
}

