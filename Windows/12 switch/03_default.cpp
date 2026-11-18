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

    /* Eğer kullanıcı 1-4 dışında bir sayı girerse
     * hiçbir case eşleşmez ve default çalıştırılır. */

    switch (mevsimNo)
    {
        case 1:
            cout << "İlkbahar" << endl;
            break;
        case 2:
            cout << "Yaz" << endl;
            break;
        case 3:
            cout << "Sonbahar" << endl;
            break;
        case 4:
            cout << "Kış" << endl;
            break;
        default:
            cout << "Geçersiz mevsim numarası!" << endl;
            break;
    }

    return 0;
}
