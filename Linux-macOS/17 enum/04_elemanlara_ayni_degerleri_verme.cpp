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
    /* Farklı enum elemanları aynı sayısal değere sahip olabilir.
     * teslimEdildi ve tamamlandi aynı değere (3) sahiptir.
     * Bu nedenle birbirine eşit kabul edilir. */

    cout << teslimEdildi << endl; // 3
    cout << tamamlandi << endl;   // 3

    cout << (teslimEdildi == tamamlandi) << endl; // 1 (true)

    durum siparis = teslimEdildi;
    cout << (siparis == tamamlandi) << endl;      // 1 (true)

    return 0;
}