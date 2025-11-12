//tugas daspro ADT SIM dafi
#include <iostream>
#include <string>
using namespace std;
//kamus
//kamus ADT SIM
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
//NOMOR SIM
struct NOMSIM
{
    string nomorsim;
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
//PEKERJAAN
struct PEKERJAAN
{
    string pekerjaan;
};
//MASA BERLAKU SIM
struct BERLAKU
{
    int DD, MM, YY;
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
SIM Dafi;
SIM inputSIM()
{
    SIM sim;
    cout << "Inputan Data ADT SIM\n\n";
    cout << "Masukkan Jenis Kendaraan SIM Anda: ";
    cin >> Dafi.jenis_kendaraan_sim.JKEN;
    cin.ignore();
    cout << "Masukkan Nomor SIM Anda: ";
    getline(cin, Dafi.nomor_sim.nomorsim);
    cout << "Masukkan Nama Anda: ";
    getline(cin, Dafi.nama_sim.nama_pjg);
    cout << "Masukkan Tempat Lahir Anda: ";
    getline(cin, Dafi.tgl_lahir_sim.tempat);
    cout << "Masukkan Tanggal Lahir Anda: ";
    cin >> Dafi.tgl_lahir_sim.HH;
    cout << "Masukkan Bulan Lahir Anda: ";
    cin >> Dafi.tgl_lahir_sim.BB;
    cout << "Masukkan Tahun Lahir Anda: ";
    cin >> Dafi.tgl_lahir_sim.TT;
    cout << "Masukkan Golongan Darah Anda: ";
    cin >> Dafi.golongan_darah_sim.goldar;
    cin.ignore();
    cout << "Masukkan Jenis Kelamin Anda: ";
    getline(cin, Dafi.jenis_kelamin_sim.jk);
    cout << "Masukkan Alamat Anda: ";
    getline(cin, Dafi.alamat_sim.alamat);
    cout << "Masukkan Alamat Kelurahan Anda: ";
    getline(cin, Dafi.alamat_sim.kelurahan);
    cout << "Masukkan Alamat Kecamatan Anda: ";
    getline(cin, Dafi.alamat_sim.kecamatan);
    cout << "Masukkan Alamat RT Anda: ";
    cin >> Dafi.alamat_sim.rt;
    cout << "Masukkan Alamat RW Anda: ";
    cin >> Dafi.alamat_sim.rw;
    cin.ignore();
    cout << "Masukkan Pekerjaan Anda: ";
    getline(cin, Dafi.pekerjaan_sim.pekerjaan);
    cout << "Masukkan Provinsi SIM Anda: ";
    getline(cin, Dafi.provinsi_sim.prov);
    cout << "Masukkan Tanggal Berlaku SIM Anda: ";
    cin >> Dafi.berlaku_sim.DD;
    cout << "Masukkan Bulan Berlaku SIM Anda: ";
    cin >> Dafi.berlaku_sim.MM;
    cout << "Masukkan Tahun Berlaku SIM Anda: ";
    cin >> Dafi.berlaku_sim.YY;
    return sim;
}
//diskripsi
int main()
{
    SIM sim = inputSIM();
    //output untuk memverifikasi data SIM
    cout << "\n\n=====Data SIM Anda=====\n";
    cout << Dafi.jenis_kendaraan_sim.JKEN << endl;
    cout << Dafi.nomor_sim.nomorsim << endl << endl;
    cout << "1. " << Dafi.nama_sim.nama_pjg << endl;
    cout << "2. " << Dafi.tgl_lahir_sim.tempat << ", " << Dafi.tgl_lahir_sim.HH << "-" << Dafi.tgl_lahir_sim.BB << "-" << Dafi.tgl_lahir_sim.TT << endl;
    cout << "3. " << Dafi.golongan_darah_sim.goldar << " - " << Dafi.jenis_kelamin_sim.jk << endl;
    cout << "4. " << Dafi.alamat_sim.alamat << ", " << Dafi.alamat_sim.kelurahan << ", " << Dafi.alamat_sim.kecamatan << ", " << Dafi.alamat_sim.rt << "/" << Dafi.alamat_sim.rw << endl;
    cout << "5. " << Dafi.pekerjaan_sim.pekerjaan << endl;
    cout << "6. " << Dafi.provinsi_sim.prov << endl << endl;
    cout << "Berlaku Hingga: " << Dafi.berlaku_sim.DD << "-" << Dafi.berlaku_sim.MM << "-" << Dafi.berlaku_sim.YY << endl;
    return 0;
}
