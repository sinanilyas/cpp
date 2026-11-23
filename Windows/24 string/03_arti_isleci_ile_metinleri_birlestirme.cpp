#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string ad = "Ali";
    string soyad = "Kaya";

    /* + işleci iki metni birleştirerek yeni bir metin oluşturur. string,
     * sabit metinlerle de birleştirilebilir. Karakter dizilerindeki strcat
     * fonksiyonundan farklı olarak sonucun hedef diziye sığıp sığmayacağı
     * düşünülmez. */
    string adSoyad = ad + " " + soyad;

    cout << adSoyad << endl; // Ali Kaya

    // Birleştirilen değişkenler değişmez.
    cout << ad << endl; // Ali

    return 0;
}
