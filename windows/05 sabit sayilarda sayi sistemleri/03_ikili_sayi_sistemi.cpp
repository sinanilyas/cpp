#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Turkish");

    int sayi = 0b1111;

    /* C++ dilinde başına 0b veya 0B eklenerek yazılan tamsayı sabitleri
     * 2'li sayı sisteminde yorumlanır.
     * Bu gösterimde yalnızca 0-1 arasındaki rakamlar kullanılabilir.
     *
     * 2'li sayı sistemindeki 1111 sayısı
     * 10'lu sayı sisteminde 15'e karşılık gelir.
     * (1x8) + (1x4) + (1x2) + (1x1) = 15 */

    cout << sayi << endl; // 15

	return 0;
}
