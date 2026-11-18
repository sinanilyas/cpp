#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* İç içe döngüler kullanılarak piramit oluşturulabilir.
     * İlk iç döngü boşlukları, ikinci iç döngü yıldızları yazdırır.
     * Her satırda boşluk sayısı 1 azalırken
     * yıldız sayısı 2 artar. */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++) cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";

        cout << endl;
    }

    return 0;
}
