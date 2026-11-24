#include <iostream>
#include <cstring> // strlen için
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    const int UZUNLUK = 50;

    char metin[UZUNLUK] = "Selam";

    // strlen, null karakterine kadar olan karakterleri sayar.
    // null karakteri sayılmaz.
    cout << strlen(metin) << endl; // 5

    // sizeof dizinin eleman sayısını verir.
    cout << sizeof(metin) << endl; // 50

    return 0;
}
