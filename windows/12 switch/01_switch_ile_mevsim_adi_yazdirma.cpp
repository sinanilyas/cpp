#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int mevsimNo;

    cout << "Mevsim numarasýný giriniz (1-4): ";
    cin >> mevsimNo;

    switch (mevsimNo)
    {
        case 1:
            cout << "Ýlkbahar" << endl;
            break;
        case 2:
            cout << "Yaz" << endl;
            break;
        case 3:
            cout << "Sonbahar" << endl;
            break;
        case 4:
            cout << "Kýþ" << endl;
            break;
    }

    /* 1,2,3,4 haricinde bir deðer girilirse hiçbir þey yapmaz */

    return 0;
}
