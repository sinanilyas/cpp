#include <iostream>
#include <windows.h>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    gun bugun = paz;
    gun yarin = static_cast<gun>(paz + 1); // 8

    /* 8 değeri geçerli aralığın dışındadır. Böyle bir durumda
     * program 8 yazdırabilir, beklenmedik bir sonuç üretebilir
     * veya farklı şekilde davranabilir.
     * C++ hiçbir sonucu garanti etmez. */

    cout << "Bugün: " << bugun << endl; // 7
    cout << "Yarın: " << yarin << endl; // Belirsiz davranış

    return 0;
}
