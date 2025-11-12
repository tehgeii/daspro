//tugas daspro ADT KTP dafi
#include <iostream>
#include <string>
using namespace std;
//kamus
int no_ktp[6];
int x, y, maks;
//kamus ADT KTP
//TGL
struct TGL
{
    string tempat;
    int HH, BB, TT;
};
//NAMA
struct NAMA
{
   string nama_pjg;
};
//NIK
struct NIK
{
    long long int nik;
};
//JENIS KELAMIN
struct JENIS_KELAMIN
{
    string jk;
};
//GOLONGAN DARAH
struct GOLONGAN_DARAH
{
    char goldar;
};
//ALAMAT
struct ALAMAT
{
    string alamat, kelurahan, kecamatan;
    int rt, rw;
};
//AGAMA
struct AGAMA
{
    string agama;
};
//STATUS PERKAWINAN
struct PERKAWINAN
{
    string perkawinan;
};
//PEKERJAAN
struct PEKERJAAN
{
    string pekerjaan;
};
//KEWARGANEGARAAN
struct KEWARGANEGARAAN
{
    string kewarganegaraan;
};
//MASA BERLAKU KTP
struct BERLAKU
{
    string berlaku;
};
//DIBUATNYA KTP
struct DIBUAT
{
    string kota, provinsi, kabupaten;
    int DD, MM, YY;
};
//DATA KTP
struct KTP
{
    NAMA nama_ktp;
    NIK nomor_nik;
    TGL tgl_lahir_ktp;
    JENIS_KELAMIN jenis_kelamin_ktp;
    GOLONGAN_DARAH golongan_darah_ktp;
    ALAMAT alamat_ktp;
    AGAMA agama_ktp;
    PERKAWINAN perkawinan_ktp;
    PEKERJAAN pekerjaan_ktp;
    KEWARGANEGARAAN kewarganegaraan_ktp;
    BERLAKU berlaku_ktp;
    DIBUAT dibuat_ktp;
};
//INPUTAN DATA ADT KTP
//Search Manual
maks = -99999;
KTP dafi()
{
    KTP ktp;
    cout << "Inputan Data KTP 1\n\n";
    cout << "Masukkan Nama Anda: ";
    getline(cin, Dafi.nama_ktp.nama_pjg);
    cout << "Masukkan Nomor NIK Anda: ";
    cin >> Dafi.nomor_nik.nik;
    cin.ignore();
    cout << "Masukkan Provinsi KTP Anda: ";
    getline(cin, Dafi.dibuat_ktp.provinsi);
    cout << "Masukkan Kabupaten KTP Anda: ";
    getline(cin, Dafi.dibuat_ktp.kabupaten);
    cout << "Masukkan Tempat Lahir Anda: ";
    getline(cin, Dafi.tgl_lahir_ktp.tempat);
    cout << "Masukkan Tanggal Lahir Anda: ";
    cin >> Dafi.tgl_lahir_ktp.HH;
    cout << "Masukkan Bulan Lahir Anda: ";
    cin >> Dafi.tgl_lahir_ktp.BB;
    cout << "Masukkan Tahun Lahir Anda: ";
    cin >> Dafi.tgl_lahir_ktp.TT;
    cin.ignore();
    cout << "Masukkan Jenis Kelamin Anda: ";
    getline(cin, Dafi.jenis_kelamin_ktp.jk);
    cout << "Masukkan Golongan Darah Anda: ";
    cin >> Dafi.golongan_darah_ktp.goldar;
    cin.ignore();
    cout << "Masukkan Alamat Anda: ";
    getline(cin, Dafi.alamat_ktp.alamat);
    cout << "Masukkan Alamat Kelurahan Anda: ";
    getline(cin, Dafi.alamat_ktp.kelurahan);
    cout << "Masukkan Alamat Kecamatan Anda: ";
    getline(cin, Dafi.alamat_ktp.kecamatan);
    cout << "Masukkan Alamat RT Anda: ";
    cin >> Dafi.alamat_ktp.rt;
    cout << "Masukkan Alamat RW Anda: ";
    cin >> Dafi.alamat_ktp.rw;
    cin.ignore();
    cout << "Masukkan Agama Anda: ";
    getline(cin, Dafi.agama_ktp.agama);
    cout << "Masukkan Status Perkawinan Anda: ";
    getline(cin, Dafi.perkawinan_ktp.perkawinan);
    cout << "Masukkan Pekerjaan Anda: ";
    getline(cin, Dafi.pekerjaan_ktp.pekerjaan);
    cout << "Masukkan Kewarganegaraan Anda: ";
    getline(cin, Dafi.kewarganegaraan_ktp.kewarganegaraan);
    cout << "Masukkan Masa Berlaku KTP Anda: ";
    getline(cin, Dafi.berlaku_ktp.berlaku);
    cout << "Masukkan Tempat KTP Dibuat: ";
    getline(cin, Dafi.dibuat_ktp.kota);
    cout << "Masukkan Tanggal Waktu KTP Dibuat: ";
    cin >> Dafi.dibuat_ktp.DD;
    cout << "Masukkan Bulan Waktu KTP Dibuat: ";
    cin >> Dafi.dibuat_ktp.MM;
    cout << "Masukkan Tahun Waktu KTP Dibuat: ";
    cin >> Dafi.dibuat_ktp.YY;
    return ktp;
}
//diskripsi
int main()
{
    KTP ktp = inputKTP();
    //output untuk memverifikasi data KTP
    cout << "\n\n=====Data KTP Anda=====\n";
    cout << "PROVINSI: " << Dafi.dibuat_ktp.provinsi << endl;
    cout << "KABUPATEN: " << Dafi.dibuat_ktp.kabupaten << endl << endl << endl;
    cout << "NIK: " << Dafi.nomor_nik.nik << endl << endl;
    cout << "Nama: " << Dafi.nama_ktp.nama_pjg << endl;
    cout << "Tempat/Tgl Lahir: " << Dafi.tgl_lahir_ktp.tempat << ", " << Dafi.tgl_lahir_ktp.HH << "-" << Dafi.tgl_lahir_ktp.BB << "-" << Dafi.tgl_lahir_ktp.TT << endl;
    cout << "Jenis Kelamin: " << Dafi.jenis_kelamin_ktp.jk << "         Gol Darah: " << Dafi.golongan_darah_ktp.goldar << endl;
    cout << "Alamat: " << Dafi.alamat_ktp.alamat << endl;
    cout << "   RT/RW: " << Dafi.alamat_ktp.rt << "/" << Dafi.alamat_ktp.rw << endl;
    cout << "   Kelurahan: " << Dafi.alamat_ktp.kelurahan << endl;
    cout << "   Kecamatan: " << Dafi.alamat_ktp.kecamatan << endl;
    cout << "Agama: " << Dafi.agama_ktp.agama << endl;
    cout << "Status Perkawinan: " << Dafi.perkawinan_ktp.perkawinan << endl;
    cout << "Pekerjaan: " << Dafi.pekerjaan_ktp.pekerjaan << endl;
    cout << "Kewarganegaraan: " << Dafi.kewarganegaraan_ktp.kewarganegaraan << endl;
    cout << "Berlaku Hingga: " << Dafi.berlaku_ktp.berlaku << endl;
    cout << "Dibuat Di: " << Dafi.dibuat_ktp.kota << ", " << Dafi.dibuat_ktp.DD << "-" << Dafi.dibuat_ktp.MM << "-" << Dafi.dibuat_ktp.YY << endl;
    return 0;
}
