#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 017;

    /* C++ dilinde başına 0 eklenerek yazılan tamsayı sabitleri
     * 8'li sayı sisteminde yorumlanır.
     * Bu gösterimde yalnızca 0-7 arasındaki rakamlar kullanılabilir.
     *
     * 8'li sayı sistemindeki 17 sayısı
     * 10'lu sayı sisteminde 15'e karşılık gelir.
     * (1x8) + (7x1) = 15 */

    cout << sayi << endl; // 15

    return 0;
}
