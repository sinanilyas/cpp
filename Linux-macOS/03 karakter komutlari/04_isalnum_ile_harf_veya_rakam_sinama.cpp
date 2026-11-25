#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char** argv)
{
    /* isalnum komutu, karakterin harf ya da rakam olup olmadığını sınar. */

    bool sonuc1 = isalnum('R');
    cout << sonuc1 << endl; // 1

    bool sonuc2 = isalnum('7');
    cout << sonuc2 << endl; // 1

    bool sonuc3 = isalnum('%');
    cout << sonuc3 << endl; // 0

    return 0;
}
