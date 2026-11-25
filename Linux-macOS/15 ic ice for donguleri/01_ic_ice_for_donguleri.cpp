#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Bir for döngüsünün içerisinde başka bir for döngüsü bulunabilir.
     * Dış döngünün her tekrarında iç döngü baştan sona çalıştırılır. */

    for (int i = 1; i <= 3; i++)
    {
        cout << "Dış döngü: " << i << endl;

        for (int j = 1; j <= 2; j++)
        {
            cout << "   İç döngü: " << j << endl;
        }
    }

    /* Dış döngü 3 kez, her seferinde iç döngü 2 kez çalışır.
     * Böylece iç döngünün gövdesi toplam 3 × 2 = 6 kez çalıştırılır. */

    return 0;
}
