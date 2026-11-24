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
    }

    /* 1,2,3,4 haricinde bir değer girilirse hiçbir şey yapmaz */

    return 0;
}
