#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    double sayi;

    cout << "Bir ondalıklı sayı giriniz: ";
    cin >> sayi;

	/* sayi 0.0'dan farklı ise:
	 *     sayi = true
	 *     !sayi = false
	 * sayi 0.0 ise:
	 *     sayi = false
	 *     !sayi = true.
	 */

    if (sayi) cout << "Sayı sıfırdan farklıdır." << endl;
    if (!sayi) cout << "Sayı sıfırdır." << endl;

    return 0;
}
