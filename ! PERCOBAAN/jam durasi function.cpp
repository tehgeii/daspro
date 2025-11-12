//judul: trial uas daspro jam, ngitung durasi with fuction dgn ez anjayy
#include <iostream>
using namespace std;
//kamus
int totaldetik1, totaldetik2, selisihdetik;
string time1, time2;
int jam1, menit1, detik1;
int jam2, menit2, detik2;
int jamakhir, menitakhir, detikakhir;
/*
=========================================================================
- fungsi utk memecah waktu dari string "JJ:MM:DD".
- const string& time yaitu sebuah string yangyg g bisa diubah dlm fungsi pecahwaktu.
- const artinya nilai string maupun int tdk bisa mengubah di dlm fungsi.
- sedangkan & artinya tidak dpt membuat salinan dr string maupun int yg diberikan ke fungsi,
  tp langsung mengakses ke string maupun int asli.
=========================================================================
*/
void pecahwaktu(const string& waktu, int& jam, int& menit, int& detik)
{
    //ambil hari, jam, dan menit dari input string.
    //sscanf artinya membaca data dr string dgn format tertentu
    //dan menyimpannya ke dalam variabel. lalu time.c_str()
    //artinya string time yg diubah menjadi character khusus yg
    //hanya dipakai oleh si sscanf.
    sscanf(waktu.c_str(), "%d:%d:%d", &jam, &menit, &detik);
}
//=========================================================================
//fungsi untuk menghitung durasi antara dua waktu
//durasi dihitung dalam jam, menit, dan detik
void drsantar_duawkt(int jam1, int menit1, int detik1, int jam2, int menit2, int detik2, int& jamfix, int& menitfix, int& detikfix)
{
    //ubah kedua waktu menjadi total detik
    totaldetik1 = jam1 * 3600 + menit1 * 60 + detik1;
    totaldetik2 = jam2 * 3600 + menit2 * 60 + detik2;

    //hitung selisih dalam detik
    selisihdetik = (totaldetik1 > totaldetik2) ? (totaldetik1 - totaldetik2) : (totaldetik2 - totaldetik1);

    //konversi kembali ke jam, menit, dan detik
    jamfix = selisihdetik / 3600; //hitung jam
    selisihdetik %= 3600;
    menitfix = selisihdetik / 60; //hitung menit
    detikfix = selisihdetik % 60; //hitung detik
}
//=========================================================================
//diskripsi
int main()
{
    cout << "Masukkan waktu pertama (JJ:MM:DD): ";
    cin >> time1;
    cout << "Masukkan waktu kedua (JJ:MM:DD): ";
    cin >> time2;

    //pecah waktu pertama dan kedua ke dalam jam, menit, dan detik
    pecahwaktu(time1, jam1, menit1, detik1);
    pecahwaktu(time2, jam2, menit2, detik2);

    //hitung durasi antara kedua waktu
    drsantar_duawkt(jam1, menit1, detik1, jam2, menit2, detik2, jamakhir, menitakhir, detikakhir);

    //menampilkan hasil durasi
    cout << "Durasi adalah: " << jamakhir << " jam, " 
         << menitakhir << " menit, " 
         << detikakhir << " detik." << endl;
    return 0;
}