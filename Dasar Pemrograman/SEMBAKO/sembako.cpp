#include <iostream>
#include <string>
using namespace std;
string nama, lanjutt;
long long int nomorHP;
int main()
{
    cout << "SISTEM PENDATAAN SEMBAKO\n";
    do
    {
        cout << "Masukkan nama: ";
        cin >> nama;
        cout << "Masukkan nomor HP: ";
        cin >> nomorHP;

        cout << "Apakah anda ingin melanjutkan? [y || Y || ya || yes]: ";
        cin >> lanjutt;
    } while (lanjutt == "y" || lanjutt == "Y" || lanjutt == "ya" || lanjutt == "yes");
    cout << "\nDaftar nama dan nomor HP yang telah dimasukkan:\n";
    cout << "Nama: " << nama << ", " << "Nomor HP: " << nomorHP << endl;
    return 0;
}