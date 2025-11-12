//judul: kasus parkir kendaraan
#include <iostream>
using namespace std;

//kamus
int durasi, biaya, bayar, kembalian, utang;
char tipe, lanjut;

int main()
{
    
    biaya = 0;

    do
    {
        cout << "    Masukkan tipe kendaraan" << endl;
        cout << " A) Sepeda motor/motor listrik" << endl;
        cout << " B) Tossa" << endl;
        cout << " C) Sepeda" << endl;
        cout << " D) Mobil" << endl;
        cout << " E) MiniTruck/Truck" << endl;
        cout << " F) Bus/MiniBus" << endl;
        cin >> tipe;

        if (tipe == 'A' || tipe == 'a')
        {
            cout << "Anda memakai Sepeda motor/motor listrik!" << endl;
        } else if (tipe == 'B' || tipe == 'b')
        {
            cout << "Anda memakai Tossa!" << endl;
        } else if (tipe == 'C' || tipe == 'c')
        {
            cout << "Anda memakai Sepeda!" << endl;
        } else if (tipe == 'D' || tipe == 'd')
        {
            cout << "Anda memakai Mobil!" << endl;
        } else if (tipe == 'E' || tipe == 'e')
        {
            cout << "Anda memakai MiniTruck/Truck!" << endl;
        } else if (tipe == 'F' || tipe == 'f')
        {
            cout << "Anda memakai Bus/MiniBus!" << endl;
        }
        else
        {
            cout << "Tipe kendaraan tidak dikenali! Silakan coba lagi." << endl;
        }

        cout << "\nMasukkan durasi parkir (dalam jam): ";
        cin >> durasi;

        if (tipe == 'A' || tipe == 'a') 
        {
            biaya = durasi * 3000;
            cout << "Biaya parkir untuk Sepeda Motor/Sepeda Listrik: Rp " << biaya << endl;
        } 
        else if (tipe == 'B' || tipe == 'b') 
        {
            biaya = durasi * 4000;
            cout << "Biaya parkir untuk Tossa: Rp " << biaya << endl;
        } 
        else if (tipe == 'C' || tipe == 'c') 
        {
            biaya = durasi * 2000;
            cout << "Biaya parkir untuk Sepeda: Rp " << biaya << endl;
        }
    
        else if (tipe == 'D' || tipe == 'd') 
        {
            biaya = durasi * 5000;
            cout << "Biaya parkir untuk Mobil: Rp " << biaya << endl;
        }
    
        else if (tipe == 'E' || tipe == 'e') 
        {
            biaya = durasi * 12000;
            cout << "Biaya parkir untuk MiniTruck/Truck: Rp " << biaya << endl;
        }

        else if (tipe == 'F' || tipe == 'f')
        {
            biaya = durasi * 10000;
            cout << "Biaya parkir untuk Bus/MiniBus: Rp " << biaya << endl;
        }
        else
        {
            cout << "Durasi Parkir tidak dikenali! Silakan coba lagi." << endl;
        }
        cout << "\nApakah anda salah memasukkan tipe kendaraan dan waktu durasi parkir anda?" << endl;
        cout << "jika iya ketik (y) dan jika tidak ketik (n) " << endl;
        cin >> lanjut;
    } while (lanjut == 'Y' || lanjut == 'y' );

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
    return 0;
}