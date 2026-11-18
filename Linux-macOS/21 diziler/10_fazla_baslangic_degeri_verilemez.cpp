#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Eleman sayısından fazla başlangıç değeri verilirse
     * program derlenmez. */

    // HATA: Dizinin eleman sayısından fazla başlangıç değeri verilmiş
    int sayilar[3] = {10, 20, 30, 40};

    cout << sayilar[0] << endl;

    return 0;
}
