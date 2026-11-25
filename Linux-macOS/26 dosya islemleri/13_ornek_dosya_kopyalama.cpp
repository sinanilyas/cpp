#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    ifstream kaynak("ogrenciler.txt");
    ofstream hedef("ogrenciler_yedek.txt");

    if (kaynak.is_open() && hedef.is_open())
    {
        string satir;
        int satirSayisi = 0;

        while (getline(kaynak, satir))
        {
            hedef << satir << endl;
            satirSayisi++;
        }

        kaynak.close();
        hedef.close();

        cout << satirSayisi << " satır kopyalandı." << endl; // 4 satır kopyalandı.
    }
    else
    {
        cout << "Dosyalardan biri açılamadı." << endl;
    }

    return 0;
}
