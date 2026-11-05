#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* for döngüsünün sonuna yanlýþlýkla ; konulursa
     * döngünün gövdesi boþ olur.
     * Bu nedenle cout komutu döngüye dâhil edilmez
     * ve döngü tamamlandýktan sonra yalnýzca bir kez çalýþtýrýlýr.
     */

    for (int i = 1; i <= 5; i++);
        cout << "Merhaba" << endl;

    /* Yalnýzca bir kez Merhaba yazýlýr. */

    return 0;
}
