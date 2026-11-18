#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	/* '\t' (9) imleci bir sonraki sekme (tab) konumuna götürür */
	
	cout << "1\t0" << endl;
	cout << "12\t0" << endl;
	cout << "123\t0" << endl;
	cout << "1234\t0" << endl;
	cout << "12345\t0" << endl;
	cout << "123456\t0" << endl;
	cout << "1234567\t0" << endl;
	cout << "12345678\t0" << endl;
	cout << "123456789\t0" << endl;
	
	return 0;
}

