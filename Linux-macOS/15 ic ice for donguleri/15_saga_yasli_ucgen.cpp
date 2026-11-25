#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Bir dış döngünün içerisinde birden fazla iç döngü bulunabilir.
     * İlk iç döngü boşlukları, ikinci iç döngü yıldızları yazdırır.
     * Her satırda boşluk sayısı azalırken yıldız sayısı artar. */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++) cout << "  ";

        for (int j = 1; j <= i; j++) cout << "* ";

        cout << endl;
    }

    return 0;
}
