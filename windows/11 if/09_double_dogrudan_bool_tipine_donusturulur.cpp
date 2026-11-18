#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    double sayi = 0.01;

    // double doðrudan bool tipine dönüþtürülür.
    if (sayi) cout << "Koþul doðrudur." << endl; // Çalýþýr.

    return 0;
}
