#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi;

    cout << "Bir tamsayı giriniz: ";
    cin >> sayi;

	/* sayi 0'dan farklı ise:
	 *     sayi = true
	 *     !sayi = false
	 * sayi 0 ise:
	 *     sayi = false
	 *     !sayi = true.
	 */

    if (sayi) cout << "Sayı sıfırdan farklıdır." << endl;
    if (!sayi) cout << "Sayı sıfırdır." << endl;

    return 0;
}
