//tugas daspro ADT SIM zabrinaa
#include <iostream>
#include <string>
using namespace std;
//kamus
//kamus ADT SIM
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
//NOMOR SIM
struct NOMSIM
{
    long long int nomorsim;
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
    string alamat, kelurahan, kecamatan, rtrw;
};
//PEKERJAAN
struct PEKERJAAN
{
    string pekerjaan;
};
//MASA BERLAKU SIM
struct BERLAKU
{
    string berlaku;
};
//JENIS KENDARAAN SIM
struct JENIS_KENDARAAN
{
    char JKEN;
};
//PROVINSI
struct PROVINSI
{
    string prov;
};
//DATA SIM
struct SIM
{
    JENIS_KENDARAAN jenis_kendaraan_sim;
    NAMA nama_sim;
    NOMSIM nomor_sim;
    TGL tgl_lahir_sim;
    JENIS_KELAMIN jenis_kelamin_sim;
    GOLONGAN_DARAH golongan_darah_sim;
    ALAMAT alamat_sim;
    PEKERJAAN pekerjaan_sim;
    BERLAKU berlaku_sim;
    PROVINSI provinsi_sim;
};
//INPUTAN DATA ADT SIM
SIM zabrinaa;
SIM inputSIM()
{
    SIM sim;
    cout << "Inputan Data ADT SIM\n\n";
    cout << "Masukkan Nama Panjang Anda: ";
    getline(cin, zabrinaa.nama_sim.nama_pjg);
    cout << "Masukkan Nomor SIM Anda: ";
    cin >> zabrinaa.nomor_sim.nomorsim;
    cout << "Masukkan Jenis Kendaraan SIM Anda: ";
    cin >> zabrinaa.jenis_kendaraan_sim.JKEN;
    cin.ignore();
    cout << "Masukkan Tempat/Tanggal Lahir Anda: ";
    getline(cin, zabrinaa.tgl_lahir_sim.tgll);
    cout << "Masukkan Jenis Kelamin Anda: ";
    getline(cin, zabrinaa.jenis_kelamin_sim.jk);
    cout << "Masukkan Golongan Darah Anda: ";
    cin >> zabrinaa.golongan_darah_sim.goldar;
    cin.ignore();
    cout << "Masukkan Alamat Anda: ";
    getline(cin, zabrinaa.alamat_sim.alamat);
    cout << "Masukkan Alamat Kelurahan Anda: ";
    getline(cin, zabrinaa.alamat_sim.kelurahan);
    cout << "Masukkan Alamat Kecamatan Anda: ";
    getline(cin, zabrinaa.alamat_sim.kecamatan);
    cout << "Masukkan Alamat RT/RW Anda: ";
    getline(cin, zabrinaa.alamat_sim.rtrw);
    cout << "Masukkan Pekerjaan Anda: ";
    getline(cin, zabrinaa.pekerjaan_sim.pekerjaan);
    cout << "Masukkan Provinsi SIM Anda: ";
    getline(cin, zabrinaa.provinsi_sim.prov);
    cout << "Masukkan Masa Berlaku SIM Anda: ";
    getline(cin, zabrinaa.berlaku_sim.berlaku);
    return sim;
}
//diskripsi
int main()
{
    SIM sim = inputSIM();
    //output untuk memverifikasi data SIM
    cout << "\n\n=====Data SIM Anda=====\n";
    cout << "Nama Panjang: " << zabrinaa.nama_sim.nama_pjg << endl;
    cout << "Jenis Kendaraan: " << zabrinaa.jenis_kendaraan_sim.JKEN << endl;
    cout << "Nomor SIM: " << zabrinaa.nomor_sim.nomorsim << endl;
    cout << "Tempat/Tanggal Lahir: " << zabrinaa.tgl_lahir_sim.tgll << endl;
    cout << "Jenis Kelamin: " << zabrinaa.jenis_kelamin_sim.jk << endl;
    cout << "Golongan Darah: " << zabrinaa.golongan_darah_sim.goldar << endl;
    cout << "Alamat: " << zabrinaa.alamat_sim.alamat << endl;
    cout << "Kelurahan: " << zabrinaa.alamat_sim.kelurahan << endl;
    cout << "Kecamatan: " << zabrinaa.alamat_sim.kecamatan << endl;
    cout << "RT/RW: " << zabrinaa.alamat_sim.rtrw << endl;
    cout << "Pekerjaan: " << zabrinaa.pekerjaan_sim.pekerjaan << endl;
    cout << "Provinsi: " << zabrinaa.provinsi_sim.prov << endl;
    cout << "Masa Berlaku: " << zabrinaa.berlaku_sim.berlaku << endl;
    return 0;
}
