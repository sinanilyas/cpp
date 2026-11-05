#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

    if (sayi > 0)
        cout << "Sayý pozitiftir." << endl;
    else if (sayi < 0)
        cout << "Sayý negatiftir." << endl;
    else
        cout << "Sayý sýfýrdýr." << endl;

    return 0;
}
