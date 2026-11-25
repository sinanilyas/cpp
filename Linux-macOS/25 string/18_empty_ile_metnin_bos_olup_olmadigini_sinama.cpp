#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string ad;

    cout << "Adınızı giriniz: ";
    getline(cin, ad);

    /* empty fonksiyonu metin boşsa (hiç karakter yoksa) true, değilse
     * false döndürür. Kullanıcı bir şey yazmadan Enter tuşuna basarsa
     * getline boş bir metin okur. */
    if (ad.empty())
    {
        cout << "Ad girilmedi." << endl;
    }
    else
    {
        cout << "Merhaba " << ad << endl;
    }

    /* ad.empty() yerine ad.length() == 0 ya da ad == "" de yazılabilir.
     * Bir metni boşaltmak için ad = ""; ya da ad.clear(); kullanılır. */

    return 0;
}
