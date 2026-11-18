#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    // cin girilen deðeri deðiþkenin veri tipine göre yorumlar.

    int yas;
    double boy;
    char cinsiyet;

    cout << "Yaþ: ";
    cin >> yas;

    cout << "Boy: ";
    cin >> boy;

    cout << "Cinsiyet: ";
    cin >> cinsiyet;

    cout << "Yaþ: " << yas << endl;
    cout << "Boy: " << boy << endl;
    cout << "Cinsiyet: " << cinsiyet << endl;

    return 0;
}
