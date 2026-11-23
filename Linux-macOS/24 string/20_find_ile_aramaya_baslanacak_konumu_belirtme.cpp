#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string cumle = "Ali ile Veli okula gitti";

    /* find fonksiyonuna ikinci değer olarak bir konum verilirse arama
     * metnin başından değil, bu konumdan başlar. */
    cout << cumle.find("li") << endl;    // 1
    cout << cumle.find("li", 2) << endl; // 10

    /* İkinci aramada 2 indisinden başlandığı için "Ali" içindeki "li"
     * atlanır ve "Veli" içindeki "li" bulunur. */

    return 0;
}
