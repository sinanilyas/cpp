#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int s1 = 5, s2 = 2;

    cout << s1 / s2 << endl;   // 2

    /* Sayýlardan en az biri double tipine donusturulurse sonuç double olur. */
    cout << static_cast<double>(s1) / s2 << endl;   // 2.5
    cout << s1 / static_cast<double>(s2) << endl;   // 2.5
    cout << static_cast<double>(s1) / static_cast<double>(s2) << endl;   // 2.5

    return 0;
}
