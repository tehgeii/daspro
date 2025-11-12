//judul: fungsi jam DAFI
#include <iostream>
using namespace std;
//kamus
struct jamberangkat
{
    int JB, MB, DB, TB;
};
struct jamdatang
{
    int JD, MD, DD, TD;
};
struct totaljam
{
    int TBD, TJJ, TMM, TDD;
};
int TB, TD, TBD, TJJ, TMM, TDD;
int ubah_format_jam_ke_detik(int jam, int menit, int detik);
int ngurangi_jam(int waktudatang, int waktuberangkat);
void balik_ke_bentuk_jam(int total_detik, int &jam, int &menit, int &detik);
void outputan(int total_detik, int jam, int menit, int detik);
void inputan_jam_berangkat(jamberangkat &jb);
void inputan_jam_datang(jamdatang &jd);
//diskripsi
int main()
{
    cout << "jam\n\n";
    //inputan jam berangkat
    jamberangkat jb;
    inputan_jam_berangkat(jb);
    TB = ubah_format_jam_ke_detik(jb.JB, jb.MB, jb.DB);
    //inputan jam datang
    jamdatang jd;
    inputan_jam_datang(jd);
    TD = ubah_format_jam_ke_detik(jd.JD, jd.MD, jd.DD);
    //menghitung total waktu perjalanan
    TBD = ngurangi_jam(TD, TB);
    //mengubah total detik ke dalam bentuk jam, menit, detik
    balik_ke_bentuk_jam(TBD, TJJ, TMM, TDD);
    //hasil
    outputan(TBD, TJJ, TMM, TDD);
    return 0;
}
int ubah_format_jam_ke_detik(int jam, int menit, int detik)
{
    return jam * 3600 + menit * 60 + detik;
}
int ngurangi_jam(int waktudatang, int waktuberangkat)
{
    return waktudatang - waktuberangkat;
}
void balik_ke_bentuk_jam(int total_detik, int &jam, int &menit, int &detik)
{
    jam = total_detik / 3600;
    menit = (total_detik % 3600) / 60;
    detik = total_detik % 60;
}
void outputan(int total_detik, int jam, int menit, int detik)
{
    cout << "\nMaka Total Waktu Perjalanan Anda Adalah: " << total_detik << " Detik" << endl;
    cout << "Atau " << jam << " Jam " << menit << " Menit " << detik << " Detik" << endl;
}
//input jam berangkat
void inputan_jam_berangkat(jamberangkat &jb)
{
    cout << "Masukkan Data Waktu Jam Berangkat Anda" << endl;
    cout << "Jam: ";
    cin >> jb.JB;
    cout << "Menit: ";
    cin >> jb.MB;
    cout << "Detik: ";
    cin >> jb.DB;
}
//input jam datang
void inputan_jam_datang(jamdatang &jd)
{
    cout << "\nMasukan Data Waktu Jam Datang Anda" << endl;
    cout << "Jam: ";
    cin >> jd.JD;
    cout << "Menit: ";
    cin >> jd.MD;
    cout << "Detik: ";
    cin >> jd.DD;
}