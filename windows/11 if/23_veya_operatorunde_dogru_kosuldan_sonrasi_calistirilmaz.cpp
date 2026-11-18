#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

    /* Ýlk koþul true ise ikinci koþul ne olursa olsun
     * sonuç true olacaktýr. Bu yüzden ilk koþulun true
     * olmasý durumunda ikinci koþul hiç kontrol edilmez.
     */

    // Kullanýcý 0 girdiðinde sayi == 0 koþulu true olur.
    // Bu nedenle 100 / sayi iþlemi yapýlmaz
    // ve sýfýra bölme hatasý önlenir.
    if (sayi == 0 || 100 / sayi > 10)
        cout << "Koþul doðrudur." << endl;
    else
        cout << "Koþul yanlýþtýr." << endl;

    return 0;
}
