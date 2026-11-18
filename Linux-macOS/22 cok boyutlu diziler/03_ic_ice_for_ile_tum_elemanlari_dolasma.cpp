#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int matris[3][2];

    /* İki boyutlu dizinin bütün elemanları iç içe iki for döngüsüyle
     * dolaşılır. Dış döngü satırları, iç döngü o satırdaki sütunları
     * dolaşır. Dış döngü değişkeni (i) ilk indis, iç döngü değişkeni
     * (j) ikinci indis olarak kullanılır.
     * Dış döngünün her turunda iç döngü baştan sona tamamlanır. */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matris[i][j] = (i + 1) * 10 + (j + 1);
        }
    }

    /* Matrisi tablo biçiminde yazdırmak için bir satırın elemanları
     * yan yana yazılır. İç döngü bitince, yani satır tamamlanınca
     * alt satıra geçilir. */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matris[i][j] << " ";
        }

        cout << endl;
    }

    /* Ekran çıktısı:
     * 11 12
     * 21 22
     * 31 32
     *
     * Her elemanın onlar basamağı satır sırasını, birler basamağı
     * sütun sırasını gösteriyor. 32, 3. satırın 2. elemanıdır ve
     * indisleri [2][1]'dir. */

    return 0;
}
