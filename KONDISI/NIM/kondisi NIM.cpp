//judul: tugas daspro kondisi NIM
#include <iostream>
using namespace std;
//kamus
//char digunakan untuk menyimpan satu karakter, huruf, maupun angka (tidak bisa lebih dari satu)
char fakultas;
char jenjang;
char prodi;
int thnmsk;
//diskripsi
int main()
{
    //masukkan fakultas, jenjang, prodi, dan tahun masuk
    cout << "Masukkan huruf pertama dari NIM (Contoh: A11 berarti 'A'): ";
    cin >> fakultas;

    cout << "Masukkan angka atau digit kedua dari NIM (Contoh: A14 berarti '1'): ";
    cin >> jenjang;

    cout << "Masukkan angka atau digit ketiga dari NIM (Contoh: A14 berarti '4'): ";
    cin >> prodi;

    cout << "Masukkan tahun masuknya: ";
    cin >> thnmsk;

    cout << "\n"; //kasih jarak antar atau per baris

    //masukkan untuk tiap fakultas berdasarkan huruf pertama dari NIM
    if (fakultas == 'A')
    {
        cout << "Fakultas: Fasilkom, ";
    }
    else if (fakultas == 'B')
    {
        cout << "Fakultas: FEB, ";
    }
    else if (fakultas == 'E')
    {
        cout << "Fakultas: Fakultas Teknik, ";
    }
    else if (fakultas == 'D')
    {
        cout << "Fakultas: FKM, ";
    }
    else
    {
        cout << "Fakultas: ??, ";
    }

    //masukkan untuk tiap jenjang perkuliahan berdasarkan angka atau digit kedua dari NIM
    if (jenjang == '1')
    {
        cout << "Jenjang: Sarjana (S1), ";
    }
    else if (jenjang == '2')
    {
        cout << "Jenjang: Diploma (D3), ";
    }
    else
    {
        cout << "Jenjang: ??, ";
    }

    //masukkan untuk tiap prodi perkuliahan berdasarkan angka atau digit ketiga dari NIM
     if (fakultas == 'A') //fasilkom
     {
        if (jenjang == '1')
        {
            if (prodi == '1')
            {
                cout << "Prodi: Teknik Informatika, ";
            }
            else if (prodi == '2')
            {
                cout << "Prodi: Sistem Informasi, ";
            }
            else if (prodi == '4')
            {
                cout << "Prodi: Desain Komunikasi Visual (DKV), ";
            }
            else
            {
                cout << "Prodi: ??, ";
            }
        }
        else if (jenjang == '2')
        {
            if (prodi == '2')
            {
                cout << "Prodi: Teknik Informatika, ";
            }
            else
            {
                cout << "Prodi: ??, ";
            }
        }
        else
        {
            cout << "Prodi: ??, ";
        }
    } 
    else if (fakultas == 'B') //feb
    {
        if (prodi == '2')
        {
            cout << "Prodi: Akuntansi, ";
        }
        else
        {
            cout << "Prodi: ??, ";
        }
    }
    else if (fakultas == 'E') //ft
    {
        if (prodi == '1')
        {
            cout << "Prodi: Teknik Elektro, ";
        }
        else
        {
            cout << "Prodi: ??,";
        }
    }
    else if (fakultas == 'D') //fkm
    {
        if (prodi == '2')
        {
            cout << "Prodi: Rekam Medis, ";
        }
        else
        {
            cout << "Prodi: ??, ";
        }
    }
    else
    {
        cout << "Prodi: ??, ";
    }

    //masukkan tahun angkatan perkuliahan
    cout << "Tahun Angkatan: " << thnmsk << endl;

    return 0;
}