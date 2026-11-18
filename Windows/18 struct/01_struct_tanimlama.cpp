#include <iostream>
#include <windows.h>
using namespace std;

/* struct anahtar sözcüğü ile farklı veri tipindeki
 * üyeler bir araya getirilerek yeni bir yapı türü tanımlanabilir. */

struct urun
{
    int kod;
    double fiyat;
};

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    return 0;
}
