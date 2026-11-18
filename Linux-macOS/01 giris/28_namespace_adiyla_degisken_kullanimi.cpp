#include <iostream>

namespace sayilar {
	int s1 = 5, s2 = 6;
}

using namespace std;

int main(int argc, char** argv) {
	cout << "Sayı 1: " << sayilar::s1 << endl;
	cout << "Sayı 2: " << sayilar::s2 << endl;

	return 0;
}

