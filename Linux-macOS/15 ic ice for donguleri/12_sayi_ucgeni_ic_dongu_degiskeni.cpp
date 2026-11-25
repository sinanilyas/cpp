#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* İç döngünün değişkeni ekrana yazdırılarak
     * her satırda artan sayı dizileri oluşturulabilir. */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
