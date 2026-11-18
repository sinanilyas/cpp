#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    double sayi;

    cout << "Bir ondalýklý sayý giriniz: ";
    cin >> sayi;

	/* sayi 0.0'dan farklý ise:
	 *     sayi = true
	 *     !sayi = false
	 * sayi 0.0 ise:
	 *     sayi = false
	 *     !sayi = true.
	 */

    if (sayi) cout << "Sayý sýfýrdan farklýdýr." << endl;
    if (!sayi) cout << "Sayý sýfýrdýr." << endl;

    return 0;
}
