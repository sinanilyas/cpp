#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi1, sayi2;

    cout << "Ýki sayý giriniz: " << endl;
    cin >> sayi1 >> sayi2;

    cout << "Toplam: " << sayi1 + sayi2 << endl;

    return 0;
}
