
#include <iostream>
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
    setlocale(LC_ALL, "Turkish");

    sinav ogrenci = {{70, 80}, 90};

    // Ýçteki yapýnýn bellekte kapladýðý alan.
    cout << sizeof(yil_ici_notlari) << endl; // 8
    cout << sizeof(ogrenci.yil_ici) << endl; // 8

    // Dýþtaki yapýnýn bellekte kapladýðý alan.
    cout << sizeof(sinav) << endl;    // 12
    cout << sizeof(ogrenci) << endl;  // 12

    // Yapý üyelerinin bellekte kapladýðý alan.
    cout << sizeof(ogrenci.yil_ici.vize1) << endl; // 4
    cout << sizeof(ogrenci.yil_ici.vize2) << endl; // 4
    cout << sizeof(ogrenci.final) << endl;         // 4

    return 0;
}
