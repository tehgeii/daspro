//judul: input nama lengkap
#include <iostream>
#include <string>
using namespace std;
//kamus
string nama;
//diskripsi
int main()
{
    cout << "masukkan nama lengkap anda: ";
    getline(cin, nama);

    cout << "nama lengkap anda adalah: " << nama << endl;
    return 0;
}