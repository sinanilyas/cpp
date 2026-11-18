#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Ýç döngü içerisinde dýþ döngünün deðiþkeni de kullanýlabilir.
     * Dýþ döngünün deðiþkeni, iç döngünün tüm tekrarlarý
     * boyunca ayný deðeri korur. */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
