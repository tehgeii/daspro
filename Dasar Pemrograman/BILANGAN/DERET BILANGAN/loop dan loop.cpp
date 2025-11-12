//judul: deret bilangan
#include <iostream>
using namespace std;
//kamus
int bil, bal, hasil;
//diskripsi
int main()
{
    cout << "deret bilangan: " << endl;
    bil = 3;
    bal = 26;
    hasil = 0;
    do
    {
        cout << "-" << bil << " ";
        hasil = hasil - bil;
        bil = bil+3;
        do
        {
            cout << "+ " << bal << " ";
            hasil = hasil + bal;
            bal = bal-2;
            break;
        } while(bal >= 10);
    } while(bil <= 27);
    cout << "= " << hasil << endl;
    return 0;
}