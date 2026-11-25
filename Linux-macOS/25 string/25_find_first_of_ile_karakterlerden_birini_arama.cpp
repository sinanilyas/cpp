#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string sehir = "Sakarya";

    /* find_first_of verilen karakterlerden herhangi birinin ilk bulunduğu
     * konumu döndürür. find'dan farklı olarak verilen metnin tamamı değil,
     * karakterlerinden biri aranır. Hiçbiri bulunamazsa string::npos
     * döndürülür. */
    cout << sehir.find_first_of("yr") << endl; // 4 (önce 'r' bulunur)

    return 0;
}
