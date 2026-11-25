#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Süslü parantezle başlangıç değeri verilirken null karakteri
     * unutulursa metnin nerede bittiği belli olmaz. cout, null karakterini
     * bulana kadar dizinin arkasındaki bellek alanını da okumaya devam eder. */
    char ad[] = {'A', 'l', 'i'}; // MANTIK HATASI: Son karakter null karakteri olmalıdır

    cout << ad << endl;    // Ali ile birlikte anlamsız karakterler yazdırılabilir.

    /* Dizinin arkasındaki bellek alanında tesadüfen 0 değeri varsa
     * Ali doğru yazdırılabilir. Fakat bu programın doğru olduğunu göstermez. */

    return 0;
}
