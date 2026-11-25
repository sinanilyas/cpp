#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Karakter dizisinin herhangi bir karakteri, diğer dizilerde olduğu
     * gibi indisi kullanılarak değiştirilebilir. */

    char ad[] = "ali";

    ad[0] = 'A';

    cout << ad << endl; // Ali

    return 0;
}
