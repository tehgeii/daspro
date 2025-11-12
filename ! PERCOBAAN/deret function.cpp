//judul: trial uas daspro deret fuction, gila ez bet dah, g pake penjelasan bisa ini mah
#include <iostream>
using namespace std;
//kamus
int total, i, awal, akhir, jarak, hasil;
//fungsi untuk menghitung total deret
int hitungDeret(int awal, int akhir, int jarak)
{
    total = 0; //variabel utk menyimpan hasil penjumlahan deret
    i = awal;  //variabel utk angka saat ini dalam deret

    do
    {
        total = total + i; //masukkan angka saat ini ke total
        i = i + jarak; //naikkan angka ke angka berikutnya
    } while (i <= akhir);

    return total; //balik ke hasil total penjumlahan
}
//diskripsi
int main()
{
    cout << "Masukkan angka awal: ";
    cin >> awal;
    cout << "Masukkan angka akhir: ";
    cin >> akhir;
    cout << "Masukkan jarak antar angka: ";
    cin >> jarak;

    //memanggil fungsi utk menghitung total deret
    hasil = hitungDeret(awal, akhir, jarak);
    //hasil
    cout << "Total jumlah deret: " << hasil << endl;
    //rampung
    return 0;
}