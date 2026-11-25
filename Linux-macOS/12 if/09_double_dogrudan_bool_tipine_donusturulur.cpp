#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    double sayi = 0.01;

    // double doğrudan bool tipine dönüştürülür.
    if (sayi) cout << "Koşul doğrudur." << endl; // Çalışır.

    return 0;
}
