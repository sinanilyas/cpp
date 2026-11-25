#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* İkiden fazla döngü iç içe kullanılabilir.
     * Bu örnekte 3 katlı, her katında 2 sıra ve
     * her sırada 4 koltuk bulunan bir sinema salonu gösterilir.
     * Her dış döngü tekrarında içindeki döngüler tamamlanır. */

    for (int kat = 1; kat <= 3; kat++)
    {
        cout << kat << ". Kat" << endl;

        for (int sira = 1; sira <= 2; sira++)
        {
            cout << sira << ". Sıra: ";

            for (int koltuk = 1; koltuk <= 4; koltuk++)
            {
                cout << koltuk << " ";
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}
