//judul: kasus parkir kendaraan
#include <iostream>
#include <string>
using namespace std;

//kamus
int durasi, biaya, bayar, kembalian, utang;
char lanjut, tipe;
struct Kendaraan
{
    string nama;
    int biaya_per_jam;
};
Kendaraan kendaraan;
void jk();
void biaya_parkir();
void pembayaran();
int main()
{

    biaya = 0;
    
        jk();
        biaya_parkir();
    do
    {
        cout << "Apakah anda salah memasukkan tipe kendaraan dan waktu durasi parkir anda?" << endl;
        cout << "jika iya ketik (y) dan jika tidak ketik (n) " << endl;
        cin >> lanjut;
    } while ((lanjut == 'Y') && (lanjut == 'y' ));
    
    pembayaran();
}

void jk()
{
    cout << "    Masukkan Nama kendaraan" << endl;
    cout << " A) Sepeda motor/motor listrik" << endl;
    cout << " B) Tossa" << endl;
    cout << " C) Sepeda" << endl;
    cout << " D) Mobil" << endl;   
    cout << " E) MiniTruck/Truck" << endl;       
    cout << " F) Bus/MiniBus" << endl;
    cin >> tipe;
    if (tipe == 'A' || tipe == 'a')
    {
        kendaraan.nama = "Motor";
    } else if (tipe == 'B'|| tipe == 'b')
    {
        kendaraan.nama = "Tossa";
    } else if (tipe == 'C'|| tipe == 'c')
    {
        kendaraan.nama = "Sepeda";
    } else if (tipe == 'D'|| tipe == 'd')
    {
        kendaraan.nama = "Mobil";
    } else if (tipe == 'E'|| tipe == 'e')
    {
        kendaraan.nama = "Truck";
    } else if (tipe == 'F'|| tipe == 'f')
    {
        kendaraan.nama = "Bus";
    }
    else
    {
        cout << "Tipe kendaraan tidak dikenali! Silakan coba lagi." << endl;
    }
}
void biaya_parkir()
{
    cout << "\nMasukkan durasi parkir (dalam jam): ";
    cin >> durasi;
    if (tipe == 'A'|| tipe == 'a')
    {
        kendaraan.biaya_per_jam = 3000;
        biaya = durasi * kendaraan.biaya_per_jam;
        cout << "Biaya parkir: Rp " << biaya << endl;

    } else if (tipe == 'B'|| tipe == 'b')
    {
        kendaraan.biaya_per_jam = 4000;
        biaya = durasi * kendaraan.biaya_per_jam;
        cout << "Biaya parkir: Rp " << biaya << endl;
    } else if (tipe == 'C'|| tipe == 'c')
    {
        kendaraan.biaya_per_jam = 2000;
        biaya = durasi * kendaraan.biaya_per_jam;
        cout << "Biaya parkir: Rp " << biaya << endl;
    } else if (tipe == 'D'|| tipe == 'd')
    {
        kendaraan.biaya_per_jam = 5000;
        biaya = durasi * kendaraan.biaya_per_jam;
        cout << "Biaya parkir: Rp " << biaya << endl;
    } else if (tipe == 'E'|| tipe == 'e')
    {
        kendaraan.biaya_per_jam = 12000;
        biaya = durasi * kendaraan.biaya_per_jam;
        cout << "Biaya parkir: Rp " << biaya << endl;
    } else if (tipe == 'F'|| tipe == 'f')
    {
        kendaraan.biaya_per_jam = 10000;
        biaya = durasi * kendaraan.biaya_per_jam;
        cout << "Biaya parkir: Rp " << biaya << endl;
    }
    else
    {
        cout << "Durasi Parkir tidak dikenali! Silakan coba lagi." << endl;
    }
}
void pembayaran()
{
    cout << "\nMasukkan Jumlah Uang mu: Rp ";
    cin >> bayar;

    if (bayar == biaya)
    {
        cout << "Uang anda pas" << endl;
    } else if (bayar > biaya)
    {
        kembalian = bayar - biaya;
        cout << "Pembayaran anda lunas dan kembalian anda sebesar: Rp " << kembalian << endl;
    }
    else
    {
        utang = biaya - bayar;
        cout << "Uang anda kurang dan anda masih memiliki utang sebesar: Rp " << utang << endl;
    }
}