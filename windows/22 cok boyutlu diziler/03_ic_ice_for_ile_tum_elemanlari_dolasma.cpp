#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int matris[3][2];

    /* Ýki boyutlu dizinin bütün elemanlarý iç içe iki for döngüsüyle
     * dolaþýlýr. Dýþ döngü satýrlarý, iç döngü o satýrdaki sütunlarý
     * dolaþýr. Dýþ döngü deðiþkeni (i) ilk indis, iç döngü deðiþkeni
     * (j) ikinci indis olarak kullanýlýr.
     * Dýþ döngünün her turunda iç döngü baþtan sona tamamlanýr. */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matris[i][j] = (i + 1) * 10 + (j + 1);
        }
    }

    /* Matrisi tablo biçiminde yazdýrmak için bir satýrýn elemanlarý
     * yan yana yazýlýr. Ýç döngü bitince, yani satýr tamamlanýnca
     * alt satýra geçilir. */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matris[i][j] << " ";
        }

        cout << endl;
    }

    /* Ekran çýktýsý:
     * 11 12
     * 21 22
     * 31 32
     *
     * Her elemanýn onlar basamaðý satýr sýrasýný, birler basamaðý
     * sütun sýrasýný gösteriyor. 32, 3. satýrýn 2. elemanýdýr ve
     * indisleri [2][1]'dir. */

    return 0;
}
