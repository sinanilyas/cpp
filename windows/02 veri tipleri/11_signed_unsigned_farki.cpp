#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	// signed (iþaretli) deðiþkenler negatif sayýlarý saklayabilir
	signed short s1 = -7;
	
	// unsigned (iþaretsiz) deðiþkenler negatif sayýlarý saklayamaz
	unsigned short s2 = -7;
	
	cout << "Sayý 1: " << s1 << endl;
	cout << "Sayý 2: " << s2 << endl;
	
	return 0;
}

