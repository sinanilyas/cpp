#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* İç içe döngüler kullanılarak 1'den 10'a kadar
     * tüm sayıların çarpım tabloları oluşturulabilir.
     * Dış döngü çarpım tablosu oluşturulacak sayıyı,
     * iç döngü ise çarpılacağı sayıları belirler. */

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }

        cout << endl;
    }

    return 0;
}
