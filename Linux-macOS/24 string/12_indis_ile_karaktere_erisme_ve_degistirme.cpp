#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string sehir = "sakarya";

    /* string'in karakterlerine karakter dizilerinde olduğu gibi indisle
     * erişilebilir. İlk karakterin indisi 0'dır. */
    cout << sehir[0] << endl; // s
    cout << sehir[2] << endl; // k

    // Karakterler indis kullanılarak değiştirilebilir.
    sehir[0] = 'S';

    cout << sehir << endl; // Sakarya

    return 0;
}
