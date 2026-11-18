#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* for döngüsünün artýþ bölümünde yalnýzca ++ ve --
     * operatörleri deðil, farklý ifadeler de kullanýlabilir.
     * Bu bölümdeki ifade döngü gövdesinden sonra çalýþtýrýlýr. */

    for (int i = 1; i <= 10; cout << i++ << endl)
    {
        cout << "Döngü çalýþýyor." << endl;
    }

    return 0;
}
