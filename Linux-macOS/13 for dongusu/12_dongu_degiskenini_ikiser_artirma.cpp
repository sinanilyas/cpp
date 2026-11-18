#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Döngü değişkeni her tekrarda 1 yerine
     * farklı miktarlarda artırılabilir.
     * i += 2 ifadesi, i değerini 2 artırır. */

    for (int i = 0; i <= 10; i += 2)
    {
        cout << i << endl;
    }

    // Ekrana sırasıyla 0, 2, 4, 6, 8 ve 10 yazdırılır.

    return 0;
}
