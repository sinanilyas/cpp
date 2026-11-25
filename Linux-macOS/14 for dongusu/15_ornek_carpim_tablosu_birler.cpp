#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Döngü değişkeni kullanılarak çarpım tablosu
     * gibi düzenli çıktılar oluşturulabilir. */

    for (int i = 1; i <= 10; i++)
    {
        cout << "1 x " << i << " = " << 1 * i << endl;
    }

    return 0;
}
