#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Karakter dizilerinde olduğu gibi string'de de Türkçe harfler
     * (ç, ğ, ı, ö, ş, ü...) UTF-8 kodlamasında birer değil ikişer karakter
     * yer kaplar. length ve size Türkçe harfleri iki karakter sayar. */
    string ad1 = "Sule";
    cout << ad1.length() << endl; // 4

    string ad2 = "Şule";
    cout << ad2.length() << endl; // 5

    /* Bu nedenle Türkçe harften sonraki karakterlerin indisleri de kayar.
     * "Şule" metninde 'u' harfinin indisi 1 değil 2'dir. */
    cout << ad1[1] << endl; // u
    cout << ad2[2] << endl; // u

    return 0;
}
