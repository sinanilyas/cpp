#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string sehir = "Sakarya";

    /* string değişkenlerinin kendi fonksiyonları vardır. Bu fonksiyonlar
     * cin.get'te olduğu gibi değişken adından sonra nokta konularak
     * çağrılır.
     *
     * length ve size fonksiyonları metindeki karakter sayısını verir.
     * İkisi aynı işi yapar. Karakter dizilerindeki strlen gibi null
     * karakteri sayılmaz. */
    cout << sehir.length() << endl; // 7
    cout << sehir.size() << endl;   // 7

    /* sizeof(sehir) metnin uzunluğunu vermez. string değişkeninin kendi
     * boyutunu verir ve bu boyut metnin uzunluğuna göre değişmez. */

    return 0;
}
