#include <iostream>

namespace sayilar {
	int sayi = 6;
}

namespace degerler {
	int sayi = 8;
}

using namespace std;
using namespace sayilar;
using namespace degerler;

int main(int argc, char** argv) {
	cout << "Sayı: " << sayilar::sayi << endl;
	cout << "Sayı: " << degerler::sayi << endl;

	return 0;
}

