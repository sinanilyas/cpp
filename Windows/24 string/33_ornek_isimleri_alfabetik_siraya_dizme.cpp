#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    const int ISIM_SAYISI = 5;
    string isimler[ISIM_SAYISI] = {"Zeynep", "Ali", "Mehmet", "Can", "Burak"};

    /* İsimler kabarcık sıralamasıyla (bubble sort) sıralanır. string'ler
     * > işleciyle karşılaştırılabildiği ve atama işleciyle kopyalanabildiği
     * için sayı dizilerini sıralayan kod, yalnızca tipler değiştirilerek
     * kullanılabilir. Karakter dizilerinde strcmp ve strcpy gerekirdi. */
    for (int i = 0; i < ISIM_SAYISI - 1; i++)
    {
        for (int j = 0; j < ISIM_SAYISI - 1 - i; j++)
        {
            if (isimler[j] > isimler[j + 1])
            {
                string gecici = isimler[j];
                isimler[j] = isimler[j + 1];
                isimler[j + 1] = gecici;
            }
        }
    }

    for (int i = 0; i < ISIM_SAYISI; i++)
    {
        cout << isimler[i] << " ";
    }
    cout << endl; // Ali Burak Can Mehmet Zeynep

    /* Karşılaştırma ASCII kodlarına göre yapıldığı için isimlerin hepsi
     * büyük harfle başlamalıdır. Türkçe harfler (Ç, Ğ, İ, Ö, Ş, Ü...)
     * alfabedeki yerlerine göre sıralanmaz. */

    return 0;
}
