#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int mevsimNo;

    cout << "Mevsim numarasýný giriniz (1-4): ";
    cin >> mevsimNo;

    /* case deðerleri sýralý olmak zorunda deðildir.
     * default sonda olmak zorunda deðildir. */

    switch (mevsimNo)
    {
        case 4:
            cout << "Kýþ" << endl;
            break;
        default:
            cout << "Geçersiz mevsim numarasý!" << endl;
            break;
        case 2:
            cout << "Yaz" << endl;
            break;
        case 1:
            cout << "Ýlkbahar" << endl;
            break;
        case 3:
            cout << "Sonbahar" << endl;
            break;
    }

    return 0;
}
