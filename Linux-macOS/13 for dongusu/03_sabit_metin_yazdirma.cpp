#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Merhaba" << endl;
    }

    /* int i = 0 -> i değişkeni tanımlanır ve 0 değeri atanır.
     * i < 5     -> i değeri 5'ten küçük olduğu sürece döngü çalışır.
     * i++       -> Her tekrardan sonra i değeri 1 artırılır.
     *
     * Döngü gövdesi i = 0, 1, 2, 3 ve 4 için çalışır.
     * Böylece "Merhaba" metni ekrana 5 kez yazdırılır.
     * i değeri 5 olduğunda koşul yanlış olur ve döngü sona erer.
     */

    return 0;
}
