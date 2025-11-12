//tugas daspro ADT STNK Zabrinaa
#include <iostream>
#include <string>
using namespace std;
//kamus
//kamus ADT STNK
//NAMA
struct NAMA
{
   string nama_pemilik;
};
//NomorRegristasi
struct NomorRegristrasi
{
    string noregris;
};
//ALAMAT
struct ALAMAT
{
    string alamat, kelurahan, kecamatan, rtrw;
};
//MERK
struct MERK
{
    string merk_motor;
};
//TIPE
struct TIPE
{
    string tipe_motor;
};
//JENIS
struct JENIS
{
    string jenis_motor;
};
//MODEL
struct MODEL
{
    string model_motor;
};
//TahunPembuatan
struct TahunPembuatan
{
    int th_pembuatan;
};
//ISISILINDER
struct ISISILINDER
{
    int dayalistrik;
};
//NOMORRANGKA
struct NOMORRANGKA
{
    string no_rangka;
};
//NOMORMESIN
struct NOMORMESIN
{
    string no_mesin;
};
//NOMORNIK
struct NOMORNIK
{
    string no_nik;
};
//WARNAMOTOR
struct WARNAMOTOR
{
    string warna;
};
//BAHANBAKARMOTOR
struct BAHANBAKARMOTOR
{
    string bahanbakar;
};
//WARNATNKB
struct WARNATNKB
{
    string warna_tnkb;
};
//TAHUNREGRISTRASI
struct TAHUNREGRISTRASI
{
    int th_regristrasi;
};
//NOMORBPKB
struct NOMORBPKB
{
    string no_bpkb;
};
//NOMORURUTPENDAFTARAN
struct NOMORURUTPENDAFTARAN
{
    string no_urutpendftrn;
};
//KODELOKASI
struct KODELOKASI
{
    string kode_lok;
};

//MASABERLAKUMOTOR
struct MASABERLAKUMOTOR
{
    string berlaku_sampai;
};

//DATA STNK
struct STNK
{
    NAMA nama_pemilik_stnk;
    NomorRegristrasi noregris_stnk;
    ALAMAT alamat_stnk;
    MERK merk_motor_stnk;
    TIPE tipe_motor_stnk;
    JENIS jenis_motor_stnk;
    MODEL model_motor_stnk;
    TahunPembuatan th_pembuatan_stnk;
    ISISILINDER dayalistrik_stnk;
    NOMORRANGKA no_rangka_stnk;
    NOMORMESIN no_mesin_stnk;
    NOMORNIK no_nik_stnk;
    WARNAMOTOR warna_stnk;
    BAHANBAKARMOTOR bahanbakar_stnk;
    WARNATNKB warna_tnkb_stnk;
    TAHUNREGRISTRASI th_regristrasi_stnk;
    NOMORBPKB no_bpkb_stnk;
    NOMORURUTPENDAFTARAN no_urutpendftrn_stnk;
    KODELOKASI kode_lok_stnk;
    MASABERLAKUMOTOR berlaku_sampai_stnk;


};
//INPUTAN DATA ADT STNK
STNK zabrinaa;
STNK inputSTNK()
{
    STNK stnk;
    cout << "Inputan Data ADT STNK\n\n";
    cout << "Masukkan Nama Pemilik Anda: ";
    getline(cin, zabrinaa.nama_pemilik_stnk.nama_pemilik);
    cout << "Masukkan NomorRegristasi Anda: ";
    cin >> zabrinaa.noregris_stnk.noregris;
    cin.ignore();
    cout << "Masukkan Alamat Anda: ";
    getline(cin, zabrinaa.alamat_stnk.alamat);
    cout << "Masukkan Alamat Kelurahan Anda: ";
    getline(cin, zabrinaa.alamat_stnk.kelurahan);
    cout << "Masukkan Alamat Kecamatan Anda: ";
    getline(cin, zabrinaa.alamat_stnk.kecamatan);
    cout << "Masukkan Alamat RT/RW Anda: ";
    getline(cin, zabrinaa.alamat_stnk.rtrw);
    cout << "Masukkan Merk Motor Anda: ";
    getline(cin, zabrinaa.merk_motor_stnk.merk_motor);
    cout << "Masukkan Tipe Motor Anda: ";
    cin >> zabrinaa.tipe_motor_stnk.tipe_motor;
    cin.ignore();
    cout << "Masukkan Jenis Motor Anda: ";
    getline(cin, zabrinaa.jenis_motor_stnk.jenis_motor);
    cout << "Masukkan Model Motor Anda: ";
    getline(cin, zabrinaa.model_motor_stnk.model_motor);
    cout << "Masukkan Tahun Pembuatan Motor Anda: ";
    cin >> zabrinaa.th_pembuatan_stnk.th_pembuatan;
    cin.ignore();
    cout << "Masukkan Isi Silinder Anda: ";
    cin >> zabrinaa.dayalistrik_stnk.dayalistrik;
    cin.ignore();
    cout << "Masukkan Nomor Rangka Motor Anda: ";
    getline(cin, zabrinaa.no_rangka_stnk.no_rangka);
    cout << "Masukkan Nomor Mesin Motor Anda: ";
    getline(cin, zabrinaa.no_mesin_stnk.no_mesin);
    cout << "Masukkan Nomor NIK Motor Anda: ";
    getline(cin, zabrinaa.no_nik_stnk.no_nik);
    cout << "Masukkan Warna Motor Anda: ";
    getline(cin, zabrinaa.warna_stnk.warna);
    cout << "Masukkan Bahan Bakar Motor Anda: ";
    getline(cin, zabrinaa.bahanbakar_stnk.bahanbakar);
    cout << "Masukkan Warna TNKB Anda: ";
    getline(cin, zabrinaa.warna_tnkb_stnk.warna_tnkb);
    cout << "Masukkan Tahun Regristrasi Anda: ";
    cin >> zabrinaa.th_regristrasi_stnk.th_regristrasi;
    cin.ignore();
    cout << "Masukkan Nomor BPKB Anda: ";
    getline(cin, zabrinaa.no_bpkb_stnk.no_bpkb);
    cout << "Masukkan Nomor Urut Pendaftaran Anda: ";
    getline(cin, zabrinaa.no_urutpendftrn_stnk.no_urutpendftrn);
    cout << "Masukkan Kode Lokasi Anda: ";
    getline(cin, zabrinaa.kode_lok_stnk.kode_lok);
    cout << "Masukkan Masa Berlaku Motor Anda: ";
    getline(cin, zabrinaa.berlaku_sampai_stnk.berlaku_sampai);

    return stnk;
}
//diskripsi
int main()
{
    STNK stnk = inputSTNK();
    //output untuk memverifikasi data STNK
    cout << "\n\n=====Data STNK Anda=====\n";
    cout << "Nama Pemilik: " << zabrinaa.nama_pemilik_stnk.nama_pemilik  << endl;
    cout << "Nomor Regristrasi: " << zabrinaa.noregris_stnk.noregris<< endl;
    cout << "Alamat: " << zabrinaa.alamat_stnk.alamat << endl;
    cout << "Kelurahan: " << zabrinaa.alamat_stnk.kelurahan << endl;
    cout << "Kecamatan: " << zabrinaa.alamat_stnk.kecamatan << endl;
    cout << "RT/RW: " << zabrinaa.alamat_stnk.rtrw << endl;
    cout << "Merk: " << zabrinaa.merk_motor_stnk.merk_motor << endl;
    cout << "Tipe: " << zabrinaa.tipe_motor_stnk.tipe_motor << endl;
    cout << "Jenis: " << zabrinaa.jenis_motor_stnk.jenis_motor << endl;
    cout << "Model : " << zabrinaa.model_motor_stnk.model_motor << endl;
    cout << "Tahun Pembuatan: " << zabrinaa.th_pembuatan_stnk.th_pembuatan << endl;
    cout << "Isi Silinder : " << zabrinaa.dayalistrik_stnk.dayalistrik << endl;
    cout << "Nomor Rangka: " << zabrinaa.no_rangka_stnk.no_rangka << endl;
    cout << "Nomor Mesin: " << zabrinaa.no_mesin_stnk.no_mesin << endl;
    cout << "Nomor NIK: " << zabrinaa.no_nik_stnk.no_nik << endl;
    cout << "Warna Motor: " << zabrinaa.warna_stnk.warna << endl;
    cout << "Bahan Bakar : " << zabrinaa.bahanbakar_stnk.bahanbakar << endl;
    cout << "Warna TNKB: " << zabrinaa.warna_tnkb_stnk.warna_tnkb << endl;
    cout << "Tahun Regristrasi : " << zabrinaa.th_regristrasi_stnk.th_regristrasi << endl;
    cout << "Nomor BPKB: " << zabrinaa.no_bpkb_stnk.no_bpkb << endl;
    cout << "Nomor Urut Pendaftaran: " << zabrinaa.no_urutpendftrn_stnk.no_urutpendftrn << endl;
    cout << "Kode Lokasi : " << zabrinaa.kode_lok_stnk.kode_lok << endl;
    cout << "Masa Berlaku: " << zabrinaa.berlaku_sampai_stnk.berlaku_sampai << endl;
    return 0;
}
