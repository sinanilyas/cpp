#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

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
