#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* < operatöründe sınır değer döngüye dâhil değildir.
     * <= operatöründe sınır değer döngüye dâhildir. */

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
