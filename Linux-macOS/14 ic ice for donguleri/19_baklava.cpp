#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* İki ayrı dış döngü kullanılarak baklava dilimi oluşturulabilir.
     * İlk döngü baklavanın üst yarısını,
     * ikinci döngü ise alt yarısını oluşturur. */

    // Üst yarı
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    // Alt yarı
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= 5 - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
