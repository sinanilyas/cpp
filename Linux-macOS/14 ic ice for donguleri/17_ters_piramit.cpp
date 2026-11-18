#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Döngüler ters yönde çalıştırılarak ters piramit oluşturulabilir.
     * Her satırda boşluk sayısı 1 artarken
     * yıldız sayısı 2 azalır. */

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= 5 - i; j++) cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";

        cout << endl;
    }

    return 0;
}
