#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü gövdesinde süslü parantez kullanýlmazsa
     * yalnýzca ilk komut döngüye dâhil edilir. */

    for (int i = 0; i < 5; i++)
        cout << "Merhaba." << endl;
		cout << "Ben C++ öðreniyorum." << endl;
		
	/* Her iki komut alt alta ve ayný hizada yazýldýðý için
	 * ikisinin de döngüye dâhil olduðunu algýsý oluþur.
	 * Ancak döngüye yalnýzca ilk cout komutu dâhildir. */

    return 0;
}