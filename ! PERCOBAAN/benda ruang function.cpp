//judul: trial uas daspro benda ruang & datar with fuction dgn ezzz
#include <iostream>
using namespace std;
//kamus
int sisi1, sisi2, sisi3; //untuk menyimpan ukuran tiap sisi.
/* 
=========================================================================
fungsi utk mengecek jenis benda berdasarkan sisi-sisi yg diberikan.
- sisi1: sisi pertama (wajib diisi)
- sisi2: sisi kedua (masukkan 0 jika tidak diisi)
- sisi3: sisi ketiga (masukkan 0 jika tidak diisi)
mengembalikan string yg menjelaskan jenis benda.
=========================================================================
*/
string cekBenda(int sisi1, int sisi2 = 0, int sisi3 = 0)
{
    //jika hanya ada satu sisi, pastinya kubus
    if (sisi2 == 0 && sisi3 == 0)
    {
        return "Ini adalah kubus.";
    }
    
    //jika ada dua sisi, pastinya benda datar
    if (sisi3 == 0)
    {
        if (sisi1 == sisi2)
        {
             //jika kedua sisi sama
            return "Ini adalah bujur sangkar.";
        }
        else
        {
             //kalau beda
            return "Ini adalah persegi panjang.";
        }
    }
    
    //jika ada tiga sisi, berarti benda ruang
    if (sisi1 == sisi2 && sisi2 == sisi3)
    {
         //jika ketiga sisi sama
        return "Ini adalah kubus.";
    }
    else
    {
         //kalau beda
        return "Ini adalah balok.";
    }
}
//=========================================================================
//diskripsi
int main()
{
    cout << "Masukkan sisi pertama: ";
    cin >> sisi1;
    cout << "Masukkan sisi kedua (0 jika tidak ada): ";
    cin >> sisi2;

    //jika sisi2 = 0, berarti cmn satu sisi (kubus)
    if (sisi2 == 0)
    {
        //panggil fungsi cekBenda dengan 1 sisi
        cout << cekBenda(sisi1) << endl;
    }
    else
    {
        //nek sisi2 ono, njaluk sisi3
        cout << "Masukkan sisi ketiga (0 jika tidak ada): ";
        cin >> sisi3;
        
        //yen sisi3 = 0, berarti benda datar
        if (sisi3 == 0)
        {
            //panggil fungsi cekBenda dengan 2 sisi
            cout << cekBenda(sisi1, sisi2) << endl;
        }
        else
        {
            //nek kabeh sisi ono, berarti benda ruang
            //panggil fungsi cekBenda dengan 3 sisi
            cout << cekBenda(sisi1, sisi2, sisi3) << endl;
        }
    }
    //wes rampung
    return 0;
}