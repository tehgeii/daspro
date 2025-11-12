//judul: deret bilangan
#include <iostream>
using namespace std;
//kamus
int bil, bal;
//diskripsi
int main()
{
    cout << "deret bilangan 1-20" << endl;
    bil = 1;
    do
    {
        bal = 21-bil;
        do
        {
            cout << bal << " ";
            bal = bal-1;
        } while (bal > 0);
        cout << endl;
        bil = bil+1;
    } while (bil < 21);
    return 0;
}
