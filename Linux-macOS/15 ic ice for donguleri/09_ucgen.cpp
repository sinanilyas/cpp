#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* İç döngünün tekrar sayısı dış döngünün değişkenine
     * bağlı olarak değiştirilebilir.
     * Böylece her satırda farklı sayıda karakter yazdırılabilir. */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
