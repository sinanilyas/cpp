#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* İç döngüde if kullanılarak yalnızca belirli
     * konumlara karakter yazdırılabilir.
     * İlk ve son satırlarla ilk ve son sütunlara yıldız,
     * diğer konumlara ise boşluk yazdırılır. */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            bool ilkSatir = i == 1;
            bool sonSatir = i == 5;
            bool ilkSutun = j == 1;
            bool sonSutun = j == 8;

            if (ilkSatir || sonSatir || ilkSutun || sonSutun)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
