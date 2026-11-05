#include <iostream>

namespace sayilar {
	int s1 = 5, s2 = 6;
}

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");

	cout << "Sayý 1: " << s1 << endl; // HATA: s1 deðiþkeni tanýmlý deðil
	cout << "Sayý 2: " << s2 << endl; // HATA: s2 deðiþkeni tanýmlý deðil

	return 0;
}

