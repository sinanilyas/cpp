#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char** argv)
{
    char metin[] = "Merhaba dunya, nasilsin?";

    /* Döngü null karakterine gelene kadar döner. Böylece,
     * metnin uzunluğu bilinmeden bütün karakterler dolaşılır. */

    int i = 0;
    while (metin[i] != '\0')
    {
        metin[i] = toupper(metin[i]);
        i++;
    }

    cout << metin << endl; // MERHABA DUNYA, NASILSIN?

    return 0;
}
