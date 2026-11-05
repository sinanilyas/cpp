#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Ýkiden fazla döngü iç içe kullanýlabilir.
     * Bu örnekte 3 katlý, her katýnda 2 sýra ve
     * her sýrada 4 koltuk bulunan bir sinema salonu gösterilir.
     * Her dýþ döngü tekrarýnda içindeki döngüler tamamlanýr. */

    for (int kat = 1; kat <= 3; kat++)
    {
        cout << kat << ". Kat" << endl;

        for (int sira = 1; sira <= 2; sira++)
        {
            cout << sira << ". Sýra: ";

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
