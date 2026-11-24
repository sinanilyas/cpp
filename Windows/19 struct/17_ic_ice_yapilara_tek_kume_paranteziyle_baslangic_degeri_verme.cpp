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

    /* İç içe yapılara başlangıç değeri verilirken
     * içteki küme parantezleri kullanılmayabilir.
     * Değerler üyelerin tanımlanma sırasına göre atanır. */
    sinav ogrenci = {70, 80, 90};

    cout << ogrenci.yil_ici.vize1 << endl; // 70
    cout << ogrenci.yil_ici.vize2 << endl; // 80
    cout << ogrenci.final << endl;         // 90

    return 0;
}
