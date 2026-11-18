#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Döngü gövdesinde süslü parantez kullanılmazsa
     * yalnızca ilk komut döngüye dâhil edilir. */

    for (int i = 0; i < 5; i++)
        cout << "Merhaba." << endl;
		cout << "Ben C++ öğreniyorum." << endl;
		
	/* Her iki komut alt alta ve aynı hizada yazıldığı için
	 * ikisinin de döngüye dâhil olduğunu algısı oluşur.
	 * Ancak döngüye yalnızca ilk cout komutu dâhildir. */

    return 0;
}