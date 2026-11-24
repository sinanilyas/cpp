#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int mevsimNo;

    cout << "Mevsim numarasını giriniz (1-4): ";
    cin >> mevsimNo;

    /* Eğer kullanıcı
     * 1 girerse İlkbahar Yaz Sonbahar Kış yazdırılır.
     * 2 girerse Yaz Sonbahar Kış yazdırılır.
     * 3 girerse Sonbahar Kış yazdırılır.
     * 4 girerse Kış yazdırılır. */

    switch (mevsimNo)
    {
        case 1:
            cout << "İlkbahar" << endl;
        case 2:
            cout << "Yaz" << endl;
        case 3:
            cout << "Sonbahar" << endl;
        case 4:
            cout << "Kış" << endl;
    }

    return 0;
}
