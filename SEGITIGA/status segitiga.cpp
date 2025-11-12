//judul: status segitiga dengan 3 inputan nilai sisi
#include <iostream>
using namespace std;
//kamus
int s1, s2, s3;
//diskripsi
main()
{
    cout << "masukkan panjang sisi segitiga 1: ";
    cin >> s1;
    cout << "masukkan panjang sisi segitiga 2: ";
    cin >> s2;
    cout << "masukkan panjang sisi segitiga 3: ";
    cin >> s3;

    if (s1 == s2 && s2 == s3)
    {
        cout << "segitiga sama sisi" << endl;
    } else if (s1 == s2 || s2 == s3 || s1 == s3)
    {
        cout << "segitiga sama kaki" << endl;
    }
    else
    {
        cout << "segitiga sembarang" << endl;
    }
    return 0;
}
