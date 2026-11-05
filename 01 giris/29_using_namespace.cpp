#include <iostream>

namespace sayilar {
	int s1 = 5, s2 = 6;
}

using namespace std;
using namespace sayilar;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");

	cout << "Sayý 1: " << s1 << endl;
	cout << "Sayý 2: " << s2 << endl;

	return 0;
}

