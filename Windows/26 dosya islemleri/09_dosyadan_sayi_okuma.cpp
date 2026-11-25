#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* sayilar.txt dosyasında sayılar iki satıra yazılmıştır:
     * 45 70 85
     * 60 92
     */
    ifstream dosya("sayilar.txt");

    if (dosya.is_open())
    {
        int sayi;

        /* >> işleci dosyadan cin'de olduğu gibi sayı da okur.
         * Sayılar arasındaki boşluklar ve satır sonları atlanır.
         *
         * dosya >> sayi da getline gibi koşul olarak yazılabilir. Sayı
         * okunabildiyse koşul doğru, okunamadıysa yanlış olur. */
        while (dosya >> sayi)
        {
            cout << sayi << endl;
        }

        dosya.close();
    }
    else
    {
        cout << "sayilar.txt açılamadı." << endl;
    }

    /* Ekran çıktısı:
     * 45
     * 70
     * 85
     * 60
     * 92
     */

    return 0;
}
