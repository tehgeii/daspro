//judul: input dan cetak nama sebanyak n kali
#include <iostream>
#include <string>
using namespace std;
//kamus
string nama;
int n, i;
//diskripsi
int main()
{
    cout << "masukkan nama: ";
    getline(cin, nama);

    cout << "masukkan jumlah pengulangan: ";
    cin >> n;

    do
    {
        cout << nama << endl;
        i = i + 1;
    } while (i <= n);
    return 0;
}