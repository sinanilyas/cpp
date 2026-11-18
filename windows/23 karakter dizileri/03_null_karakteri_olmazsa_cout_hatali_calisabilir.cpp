#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Süslü parantezle baþlangýç deðeri verilirken null karakteri
     * unutulursa metnin nerede bittiði belli olmaz. cout, null karakterini
     * bulana kadar dizinin arkasýndaki bellek alanýný da okumaya devam eder. */
    char ad[] = {'A', 'l', 'i'}; // MANTIK HATASI: Son karakter null karakteri olmalýdýr
    char soyad[] = {'K', 'a', 'y', 'a', '\0'};

    cout << ad << endl;    // Ali ile birlikte anlamsýz karakterler yazdýrýlabilir.
    cout << soyad << endl; // Kaya

    /* Dizinin arkasýndaki bellek alanýnda tesadüfen 0 deðeri varsa
     * Ali doðru yazdýrýlabilir. Bu, programýn doðru olduðunu göstermez. */

    return 0;
}
