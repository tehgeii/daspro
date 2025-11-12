//tugas daspro ADT ijazah SMA zabrinaa
#include <iostream>
#include <string>
using namespace std;
//kamus
//kamus ADT Ijazah SMA
//TGL
struct TGL
{
    string tgll;
};
//NAMA
struct NAMA
{
   string nama_pjg;
};
//NPSN
struct NPSN
{
    int npsn;
};
//KABUPATEN
struct KABUPATEN
{
    string Kab;
};
//PROVINSI
struct PROVINSI
{
    string Prov;
};
//NAMA_ORTUWAL
struct NAMA_ORTUWAL
{
    string namaortuwali;
};
//NIS
struct NIS
{
    int nomor_nis;
};
//NISN
struct NISN
{
    int nomor_nisn;
};
//DATA Ijazah SMA
struct IjazahSMA
{
    NAMA nama_ijazahsma;
    NPSN npsn_ijazahsma;
    TGL ttl_ijazahsma;
    KABUPATEN kabupaten_ijazahsma;
    PROVINSI provinsi_ijazahsma;
    NAMA_ORTUWAL namaortuwali_ijazahsma;
    NIS nis_ijazahsma;
    NISN nisn_ijazahsma;

};
//INPUTAN DATA ADT Ijazah SMA
IjazahSMA zabrinaa;
IjazahSMA inputIjazahSMA()
{
    IjazahSMA ijazahsma;
    cout << "Inputan Data ADT IjazahSMA\n\n";
    cout << "Masukkan Nama Panjang Anda: ";
    getline(cin,zabrinaa.nama_ijazahsma.nama_pjg);
    cout << "Masukkan NPSN Anda: ";
    cin >> zabrinaa.npsn_ijazahsma.npsn;
    cin.ignore();
    cout << "Masukkan Tempat/Tanggal Lahir Anda: ";
    getline(cin,zabrinaa.ttl_ijazahsma.tgll);
    cout << "Masukkan Kabupaten Anda: ";
    getline(cin,zabrinaa.kabupaten_ijazahsma.Kab);
    cout << "Masukkan Provinsi Anda: ";
    cin >> zabrinaa.provinsi_ijazahsma.Prov;
    cin.ignore();
    cout << "Masukkan Nama Orang Tua Wali Anda: ";
    getline(cin,zabrinaa.namaortuwali_ijazahsma.namaortuwali);
    cout << "Masukkan Nomor Induk Siswa Anda: ";
    cin >> zabrinaa.nis_ijazahsma.nomor_nis;
    cin.ignore();
    cout << "Masukkan Nomor Induk Siswa Nasional Anda: ";
    cin >> zabrinaa.nisn_ijazahsma.nomor_nisn;
    cin.ignore();
    return ijazahsma;
}
//diskripsi
int main()
{
    IjazahSMA ijazahsma = inputIjazahSMA();
    //output untuk memverifikasi data IjazahSMA
    cout << "\n\n=====Data IjazahSMA Anda=====\n";
    cout << "Nama Panjang: " << zabrinaa.nama_ijazahsma.nama_pjg << endl;
    cout << "Nomor NPSN: " << zabrinaa.npsn_ijazahsma.npsn<< endl;
    cout << "Tempat/Tanggal Lahir: " << zabrinaa.ttl_ijazahsma.tgll << endl;
    cout << "Kabupaten: " << zabrinaa.kabupaten_ijazahsma.Kab << endl;
    cout << "Provinsi: " << zabrinaa.provinsi_ijazahsma.Prov << endl;
    cout << "Nama Orang Tua Wali: " << zabrinaa.namaortuwali_ijazahsma.namaortuwali << endl;
    cout << "Nomor Induk Siswa : " << zabrinaa.nis_ijazahsma.nomor_nis << endl;
    cout << "Nomor Induk Siswa Nasional: " << zabrinaa.nisn_ijazahsma.nomor_nisn << endl;
    return 0;
}
