//tugas daspro ADT kartu pelajar dafi
#include <iostream>
#include <string>
using namespace std;
//kamus
//kamus ADT Kartu Pelajar
//TGL
struct TGL
{
    string tempat, BB;
    int HH, TT;
};
//NAMA
struct NAMA
{
   string nama_pjg, gelarD, gelarB;
};
//NOMOR NIS
struct NONIS
{
    long long int nomnis, nonis;
};
//ALAMAT
struct ALAMAT
{
    string alamat, kelurahan, kecamatan;
    int rt, rw;
};
//MASA BERLAKU KARTU
struct BERLAKU
{
    string berlaku;
};
//TGL KARTU DIBUAT
struct TGLK
{
    string tempatt, MM;
    int DD, YY;
};
//NAMA SEKOLAH
struct SEKOLAH
{
    string sklh;
};
//JENJANG PENDIDIKAN
struct JENJANG
{
    string jenpen;
};
//YANG MENANDATANGANI
struct PARAF
{
    string namaparaf;
};
//DATA KARTU PELAJAR
struct KP
{
    NONIS nomornis;
    NAMA nama_kp;
    TGL tgl_lahir_kp;
    ALAMAT alamat_kp;
    TGLK tanggaldibuat_kp;
    PARAF kepalasekolah;
    BERLAKU berlaku_kp;
    JENJANG jenjangpendidikan;
    SEKOLAH sekolah;
};
//INPUTAN DATA ADT KARTU PELAJAR
KP Dafi;
KP inputKP()
{
    KP kp;
    cout << "Inputan Data ADT KARTU PELAJAR\n\n";
    cout << "Masukkan Jenjang Pendidikan Sekolah Anda: ";
    getline(cin, Dafi.jenjangpendidikan.jenpen);
    cout << "Masukkan Nama Sekolah Anda: ";
    getline(cin, Dafi.sekolah.sklh);
    cout << "Masukkan Nama Anda: ";
    getline(cin, Dafi.nama_kp.nama_pjg);
    cout << "Masukkan NIS Anda: ";
    cin >> Dafi.nomornis.nomnis;
    cout << "Masukkan NISN Anda: ";
    cin >> Dafi.nomornis.nonis;
    cin.ignore();
    cout << "Masukkan Tempat Lahir Anda: ";
    getline(cin, Dafi.tgl_lahir_kp.tempat);
    cout << "Masukkan Tanggal Lahir Anda: ";
    cin >> Dafi.tgl_lahir_kp.HH;
    cin.ignore();
    cout << "Masukkan Bulan Lahir Anda: ";
    getline(cin, Dafi.tgl_lahir_kp.BB);
    cout << "Masukkan Tahun Lahir Anda: ";
    cin >> Dafi.tgl_lahir_kp.TT;
    cin.ignore();
    cout << "Masukkan Alamat Anda: ";
    getline(cin, Dafi.alamat_kp.alamat);
    cout << "Masukkan Alamat Kelurahan Anda: ";
    getline(cin, Dafi.alamat_kp.kelurahan);
    cout << "Masukkan Alamat Kecamatan Anda: ";
    getline(cin, Dafi.alamat_kp.kecamatan);
    cout << "Masukkan Alamat RT Anda: ";
    cin >> Dafi.alamat_kp.rt;
    cout << "Masukkan Alamat RW Anda: ";
    cin >> Dafi.alamat_kp.rw;
    cin.ignore();
    cout << "Masukkan Nama Kepala Sekolah Anda: ";
    getline(cin, Dafi.kepalasekolah.namaparaf);
    cout << "Masukkan Tempat Dibuatnya Kartu Anda: ";
    getline(cin, Dafi.tanggaldibuat_kp.tempatt);
    cout << "Masukkan Tanggal Dibuatnya Kartu Anda: ";
    cin >> Dafi.tanggaldibuat_kp.DD;
    cin.ignore();
    cout << "Masukkan Bulan Dibuatnya Kartu Anda: ";
    getline(cin, Dafi.tanggaldibuat_kp.MM);
    cout << "Masukkan Tahun Dibuatnya Kartu Anda: ";
    cin >> Dafi.tanggaldibuat_kp.YY;
    cin.ignore();
    cout << "Masukkan Gelar Depan Kepala Sekolah Anda: ";
    getline(cin, Dafi.nama_kp.gelarD);
    cout << "Masukkan Gelar Belakang Kepala Sekolah Anda: ";
    getline(cin, Dafi.nama_kp.gelarB);
    cout << "Masukkan Masa Berlaku Kartu Pelajar Anda: ";
    getline(cin, Dafi.berlaku_kp.berlaku);
    return kp;
}
//diskripsi
int main()
{
    KP kp = inputKP();
    //output untuk memverifikasi data Kartu Pelajar
    cout << "\n\n=====Data Kartu Pelajar Anda=====\n";
    cout << "Jenjang Pendidikan: " << Dafi.jenjangpendidikan.jenpen << endl;
    cout << "Sekolah: " << Dafi.sekolah.sklh << endl << endl;
    cout << "Nama: " << Dafi.nama_kp.nama_pjg << endl;
    cout << "NIS: " << Dafi.nomornis.nomnis << endl;
    cout << "NISN: " << Dafi.nomornis.nonis << endl;
    cout << "Tempat/Tanggal Lahir: " << Dafi.tgl_lahir_kp.tempat << ", " << Dafi.tgl_lahir_kp.HH << " " << Dafi.tgl_lahir_kp.BB << " " << Dafi.tgl_lahir_kp.TT << endl;
    cout << "Alamat: " << Dafi.alamat_kp.alamat << " RT " << Dafi.alamat_kp.rt << " RW " << Dafi.alamat_kp.rw << ", " << Dafi.alamat_kp.kelurahan << ", " << Dafi.alamat_kp.kecamatan << endl;
    cout << "Kartu Dibuat Di: " << Dafi.tanggaldibuat_kp.tempatt << ", " << Dafi.tanggaldibuat_kp.DD << " " << Dafi.tanggaldibuat_kp.MM << " " << Dafi.tanggaldibuat_kp.YY << endl;
    cout << "Nama Kepala Sekolah: " << Dafi.nama_kp.gelarD << " " << Dafi.kepalasekolah.namaparaf << ", " << Dafi.nama_kp.gelarB << endl;
    cout << "Masa Berlaku: " << Dafi.berlaku_kp.berlaku << endl;
    return 0;
}
