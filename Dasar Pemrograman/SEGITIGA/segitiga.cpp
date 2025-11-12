// judul : mencari luas segitiga
// dengan rumus luas adalah 0.5 * alas * tinggi
// dibuat tanggal 21 sept 2024
// di kamar
#include <iostream>
using namespace std;
// kamus
int alas, tinggi;
float luas;

// diskripsi
int main()
{
    cout << "mencari luas segitiga" << endl; // endl adalah untuk ganti baris, baris kebawah
    alas = 5;
    tinggi = 10;
    luas = alas * tinggi * 0.5;

    cout << "dengan alasnya = " << alas << endl;
    cout << "dengan tingginya = " << tinggi << endl;
    cout << "maka luas segitiganya adalah " << luas << endl;
    if (luas > 100)
        {
            cout << "segitiganya besar";
        }
    else
        {
            cout << "segitiganya kecil";
        }
    return 0;
}