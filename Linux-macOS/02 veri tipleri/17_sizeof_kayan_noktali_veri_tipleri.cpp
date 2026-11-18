#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	cout << sizeof(float) << endl;        // 4
	cout << sizeof(double) << endl;       // 8
	cout << sizeof(long double) << endl;  // Genellikle 16; Visual Studio ve Apple Silicon: 8
	
	return 0;
}

