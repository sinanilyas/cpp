#include <iostream>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    gun bugun = paz;
    gun yarin = static_cast<gun>(paz + 1); // 8

    /* 8 deðeri geçerli aralýðýn dýþýndadýr. Böyle bir durumda
     * program 8 yazdýrabilir, beklenmedik bir sonuç üretebilir
     * veya farklý þekilde davranabilir.
     * C++ hiçbir sonucu garanti etmez. */

    cout << "Bugün: " << bugun << endl; // 7
    cout << "Yarýn: " << yarin << endl; // Belirsiz davranýþ

    return 0;
}
