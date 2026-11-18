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

    /* Ýç içe yapýlara baþlangýç deðeri verilirken
     * içteki yapýnýn deðerleri de küme parantezleri
     * içerisinde belirtilir. */
    sinav ogrenci = {{70, 80}, 90};

    cout << ogrenci.yil_ici.vize1 << endl; // 70
    cout << ogrenci.yil_ici.vize2 << endl; // 80
    cout << ogrenci.final << endl;         // 90

    return 0;
}
