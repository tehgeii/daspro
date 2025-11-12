#include <iostream>
#include <string>
using namespace std;
string nama[5], lanjutt;
long long int nomorHP[5];
int x, y, i;
int main()
{
    cout << "SISTEM PENDATAAN SEMBAKO\n";
    x = 0;
    y = 0;
    do
    {
        if (x >= 5 && y >= 5)
        {
            cout << "Jumlah maksimum nama dan nomor HP sudah tercapai.\n";
            break;
        }
        cout << "Masukkan nama: ";
        cin >> nama[x];
        cout << "Masukkan nomor HP: ";
        cin >> nomorHP[y];

        cout << "Apakah anda ingin melanjutkan? [y || Y || ya || yes]: ";
        cin >> lanjutt;

        x = x + 1;
        y = y + 1;
    } while (lanjutt == "y" || lanjutt == "Y" || lanjutt == "ya" || lanjutt == "yes");

    cout << "\nDaftar nama dan nomor HP yang telah dimasukkan:\n";
    i = 0;
    do
    {
        if (i < x)
        {
            cout << "Nama: " << nama[i] << ", Nomor HP: " << nomorHP[i] << endl;
            i = i + 1;
        }
    } while (i < x);
    return 0;
}