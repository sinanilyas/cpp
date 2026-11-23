#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string sehir = "Sakarya";

    /* find_first_not_of verilen karakterlerin dışındaki ilk karakterin
     * konumunu döndürür. */

    // 4 ('S', 'a' ve 'k' dışındaki ilk karakter 'r')
    cout << sehir.find_first_not_of("kaS") << endl;

    /* Verilenlerin dışında bir karakter yoksa string::npos döndürülür.
     * Bu sayede bir metnin yalnızca belirli karakterlerden oluşup
     * oluşmadığı anlaşılabilir. */
    string numara = "20251015";

    if (numara.find_first_not_of("0123456789") == string::npos)
    {
        cout << numara << " pozitif bir sayıdır." << endl;
    }

    return 0;
}
