#include <iostream>
#define KATSAYI 4.5

using namespace std;

int main(int argc, char** argv) {
	KATSAYI = 2.4; // HATA: Sabit değeri değiştirilemez

	cout << KATSAYI << endl;

	return 0;
}

