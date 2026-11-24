#include <iostream>
#include <cctype>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char metin[] = "Merhaba dunya, nasilsin?";

    /* Karakter dizilerinde döngü koşulu olarak dizinin eleman sayısı
     * yerine null karakteri kullanılabilir. Döngü null karakterine
     * gelene kadar döner. Böylece metnin uzunluğu bilinmeden bütün
     * karakterler dolaşılır.
     *
     * Her karakter toupper ile büyük harfe çevrilir. toupper harf olmayan
     * karakterleri değiştirmediği için karakterin küçük harf olup olmadığını
     * ayrıca sınamaya gerek yoktur. */

    int i = 0;
    while(metin[i] != '\0')
    {
        metin[i] = toupper(metin[i]);
        i++;
    }

    cout << metin << endl; // MERHABA DUNYA, NASILSIN?

    return 0;
}
