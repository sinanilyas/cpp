#include <iostream>
using namespace std;

enum durum
{
	beklemede = 0,
	hazirlaniyor = 1,
	kargoda = 2,
	teslimEdildi = 3,
	tamamlandi = 3
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Farklý enum elemanlarý ayný sayýsal deðere sahip olabilir.
     * teslimEdildi ve tamamlandi ayný deðere (3) sahiptir.
     * Bu nedenle birbirine eþit kabul edilir. */

    cout << teslimEdildi << endl; // 3
    cout << tamamlandi << endl;   // 3

    cout << (teslimEdildi == tamamlandi) << endl; // 1 (true)

    durum siparis = teslimEdildi;
    cout << (siparis == tamamlandi) << endl;      // 1 (true)

    return 0;
}