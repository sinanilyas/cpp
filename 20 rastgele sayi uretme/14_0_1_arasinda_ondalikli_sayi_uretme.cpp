#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    srand(time(0));

    /* rand() ile üretilen sayý RAND_MAX'a bölünürse
     * 0.0 ile 1.0 arasýnda ondalýklý bir sayý elde edilir. */

    // Ýki tamsayý bölündüðü için sonuç da tamsayý olur.
    cout << rand() / RAND_MAX << endl; // Neredeyse her zaman 0

    // Sayýlardan biri double tipine dönüþtürülürse sonuç double olur.
    double sayi = static_cast<double>(rand()) / RAND_MAX;
    cout << sayi << endl; // Örneðin 0.718162

    // 0.0-1.0 arasýndaki sayý 10 ile çarpýlýrsa 0.0-10.0 arasýnda sayý elde edilir.
    cout << sayi * 10 << endl; // Örneðin 7.18162

    return 0;
}
