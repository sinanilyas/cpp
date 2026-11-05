#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* for döngüsünün baþlatma bölümünde yalnýzca
     * deðiþken tanýmlama veya deðer atama deðil,
     * farklý ifadeler de kullanýlabilir.
     * Bu bölümdeki ifade yalnýzca bir kez çalýþtýrýlýr. */

    int i = 1;

    for (cout << "Döngü baþlýyor." << endl; i <= 5; i++)
    {
        cout << i << endl;
    }

    return 0;
}
