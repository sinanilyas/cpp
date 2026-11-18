#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi = 2;
    const int UC = 3;

    /* HATA: case etiketlerinde derleme zamanında
     * değeri belli olan sabit ifadeler kullanılmalıdır.
     * Normal değişkenler case değeri olarak kullanılamaz. */

    switch (sayi)
    {
        case 1:
            cout << "Bir" << endl;
            break;
        case UC: // const ile sabit olarak tanımlandığı için çalışır
            cout << "Üç" << endl;
            break;
    }

    return 0;
}
