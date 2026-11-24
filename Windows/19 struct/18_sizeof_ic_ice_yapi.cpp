
#include <iostream>
#include <windows.h>
using namespace std;

struct yil_ici_notlari
{
    int vize1;
    int vize2;
};

struct sinav
{
    yil_ici_notlari yil_ici;
    int final;
};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    sinav ogrenci = {{70, 80}, 90};

    // İçteki yapının bellekte kapladığı alan.
    cout << sizeof(yil_ici_notlari) << endl; // 8
    cout << sizeof(ogrenci.yil_ici) << endl; // 8

    // Dıştaki yapının bellekte kapladığı alan.
    cout << sizeof(sinav) << endl;    // 12
    cout << sizeof(ogrenci) << endl;  // 12

    // Yapı üyelerinin bellekte kapladığı alan.
    cout << sizeof(ogrenci.yil_ici.vize1) << endl; // 4
    cout << sizeof(ogrenci.yil_ici.vize2) << endl; // 4
    cout << sizeof(ogrenci.final) << endl;         // 4

    return 0;
}
