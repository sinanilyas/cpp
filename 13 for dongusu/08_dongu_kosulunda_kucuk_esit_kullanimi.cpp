#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* < operatöründe sýnýr deðer döngüye dâhil deðildir.
     * <= operatöründe sýnýr deðer döngüye dâhildir. */

    for (int i = 0; i < 5; i++)
    {
        cout << i << " ";
    }
    // 0 1 2 3 4

    cout << endl;

    for (int i = 0; i <= 5; i++)
    {
        cout << i << " ";
    }
    // 0 1 2 3 4 5

    return 0;
}
