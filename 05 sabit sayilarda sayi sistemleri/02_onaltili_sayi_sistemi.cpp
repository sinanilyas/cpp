#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Turkish");

    int sayi = 0x10;

    /* C++ dilinde başına 0x veya 0X eklenerek yazılan tamsayı sabitleri
     * 16'lı sayı sisteminde yorumlanır.
     * Bu gösterimde yalnızca 0-F arasındaki rakamlar kullanılabilir.
     *
     * 16'lı sayı sistemindeki F sayısı
     * 10'lu sayı sisteminde 15'e karşılık gelir.
     * (1xF) = 15 */

    cout << sayi << endl; // 15

	return 0;
}
