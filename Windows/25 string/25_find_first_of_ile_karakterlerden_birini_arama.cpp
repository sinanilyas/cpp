#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string sehir = "Sakarya";

    /* find_first_of verilen karakterlerden herhangi birinin ilk bulunduğu
     * konumu döndürür. find'dan farklı olarak verilen metnin tamamı değil,
     * karakterlerinden biri aranır. Hiçbiri bulunamazsa string::npos
     * döndürülür. */
    cout << sehir.find_first_of("yr") << endl; // 4 (önce 'r' bulunur)

    // find ise "yr" metninin tamamını arar.
    // Sakarya'da "yr" geçmediği için string::npos döndürür.
    cout << boolalpha << (sehir.find("yr") == string::npos) << endl; // true

    return 0;
}
