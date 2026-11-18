#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Ondalýklý sabit sayýlar herhangi bir son ek kullanýlmazsa
     * double tipinde oluþturulur. */

    // Örtük double -> float dönüþümü yapýlýr
    float s1 = 5.2;
    float s2 = 6.; // 6.0
    float s3 = .7; // 0.7

    return 0;
}
