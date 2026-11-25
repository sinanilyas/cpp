#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Eleman sayısından daha az başlangıç değeri verilirse
     * değer verilmeyen elemanlara 0 verilir. */
    int sayilar[5] = {10, 20};

    for (int i = 0; i < 5; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    // Ekrana 10 20 0 0 0 yazdırılır.

    return 0;
}
