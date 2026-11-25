#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    /* Dosyadan okumak için ifstream tipinde bir değişken tanımlanır.
     * Dosya okumak için açılır ve dosyanın içindekiler silinmez. */

    // Programın çalıştığı klasörde bulunan ogrenciler.txt dosyasını
    // okumak üzere aç
    ifstream dosya("ogrenciler.txt");

    /* Dosya içeriği:
     * Ali Kaya
     * Zeynep Demir
     * Mehmet Can
     * Elif Tekin
     */

    string ad;
    string soyad;

    /* Dosyadan cin'de olduğu gibi >> işleciyle okunur. >> işleci
     * boşlukları ve satır sonlarını atlar, bir sonraki boşluğa ya da satır
     * sonuna kadar okur. */
    dosya >> ad >> soyad;

    cout << ad << endl;    // Ali
    cout << soyad << endl; // Kaya

    /* Okuma kaldığı yerden devam eder.
     * Bir sonraki >> işleci Zeynep'i okur. */
    dosya >> ad;

    cout << ad << endl; // Zeynep

    dosya.close();

    return 0;
}
