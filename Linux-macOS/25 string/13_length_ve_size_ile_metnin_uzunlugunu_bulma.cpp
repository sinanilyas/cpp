#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
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
