//judul: input nama lengkap berdasarkan pilihan
#include <iostream>
#include <string>
using namespace std;
//kamus
string nama;
char pilihan;
//diskripsi
int main()
{
    cout << "masukkan pilihan (Y) atau (N): ";
    cin >> pilihan;

    if (pilihan == 'Y' || pilihan == 'y')
    {
        cout << "masukkan nama lengkap: ";
        cin.ignore();
        getline(cin, nama);
        cout << "nama lengkap anda: " << nama;
    }
    else if (pilihan == 'N' || pilihan == 'n')
    {
        cout << "program diakhiri" << endl;
    }
    else
    {
        cout << "inputan salah" << endl;
    }
    return 0;
}