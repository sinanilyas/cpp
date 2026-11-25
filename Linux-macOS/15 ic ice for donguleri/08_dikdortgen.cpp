#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* İç içe döngüler kullanılarak satır ve sütunlardan
     * oluşan şekiller oluşturulabilir.
     * Dış döngü satırları, iç döngü sütunları oluşturur. */

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "* ";
        }

        // İç döngü tamamlandığında alt satıra geçilir.
        cout << endl;
    }

    return 0;
}
