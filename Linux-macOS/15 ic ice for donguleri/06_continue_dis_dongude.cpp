#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Dış döngüde kullanılan continue komutu, dış döngünün
     * o anki tekrarının kalan kısmını atlar.
     * Bu nedenle o tekrarda iç döngü de çalıştırılmaz.
     * Dış döngü bir sonraki tekrardan devam eder. */

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3) continue;

        cout << "Dış döngü: " << i << endl;

        for (int j = 1; j <= 3; j++)
        {
            cout << "   İç döngü: " << j << endl;
        }
    }

    return 0;
}
