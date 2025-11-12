//tugas daspro ADT Dafi (KTP, SIM, Sertifikat Lomba)
#include <iostream>
#include <string>
using namespace std;
//kamus untuk KTP
struct KTP
{
    string nama, nik, ttl, jk, golonganDarah, alamat, agama, status, pekerjaan, kewarganegaraan;
};
//kamus untuk SIM
struct SIM
{
    string nama, nomor, golonganDarah, alamat, waktuBerlaku, jenisKendaraan, pekerjaan;
};
//kamus untuk Sertifikat Lomba
struct SertifikatLomba
{
    string namaPeserta, nomor, namaLomba, asalSekolah, waktu, peringkat, tempat, penyelenggara;
};
//inputan data KTP
KTP inputKTP()
{
    KTP ktp;
    cout << "Inputan Data KTP\n\n";
    cout << "Masukkan Nama Anda: ";
    getline(cin, ktp.nama);
    cout << "Masukkan Nomor NIK Anda: ";
    getline(cin, ktp.nik);
    cout << "Masukkan Tempat/Tanggal Lahir Anda: ";
    getline(cin, ktp.ttl);
    cout << "Masukkan Jenis Kelamin Anda: ";
    getline(cin, ktp.jk);
    cout << "Masukkan Golongan Darah Anda: ";
    getline(cin, ktp.golonganDarah);
    cout << "Masukkan Alamat Anda: ";
    getline(cin, ktp.alamat);
    cout << "Masukkan Agama Anda: ";
    getline(cin, ktp.agama);
    cout << "Masukkan Status Perkawinan Anda: ";
    getline(cin, ktp.status);
    cout << "Masukkan Pekerjaan Anda: ";
    getline(cin, ktp.pekerjaan);
    cout << "Masukkan Kewarganegaraan Anda: ";
    getline(cin, ktp.kewarganegaraan);
    return ktp;
}
//inputan data SIM
SIM inputSIM()
{
    SIM sim;
    cout << "\nInputan Data SIM\n\n";
    cout << "Masukkan Nama Anda: ";
    getline(cin, sim.nama);
    cout << "Masukkan Nomor SIM Anda: ";
    getline(cin, sim.nomor);
    cout << "Masukkan Golongan Darah Anda: ";
    getline(cin, sim.golonganDarah);
    cout << "Masukkan Alamat Anda: ";
    getline(cin, sim.alamat);
    cout << "Masukkan Waktu Berlaku SIM Anda: ";
    getline(cin, sim.waktuBerlaku);
    cout << "Masukkan Jenis Kendaraan Anda: ";
    getline(cin, sim.jenisKendaraan);
    cout << "Masukkan Pekerjaan Anda: ";
    getline(cin, sim.pekerjaan);
    return sim;
}
//inputan data Sertifikat Lomba
SertifikatLomba inputSertifikatLomba()
{
    SertifikatLomba sertifikatlomba;
    cout << "\nInputan Data Sertifikat Lomba\n\n";
    cout << "Masukkan Nama Peserta Lomba: ";
    getline(cin, sertifikatlomba.namaPeserta);
    cout << "Masukkan Nomor Sertifikat Lomba: ";
    getline(cin, sertifikatlomba.nomor);
    cout << "Masukkan Nama Lomba Yang Diikutkan: ";
    getline(cin, sertifikatlomba.namaLomba);
    cout << "Masukkan Asal Sekolah Anda: ";
    getline(cin, sertifikatlomba.asalSekolah);
    cout << "Masukkan Waktu Acara Lomba: ";
    getline(cin, sertifikatlomba.waktu);
    cout << "Masukkan Nomor Peringkat Lomba: ";
    getline(cin, sertifikatlomba.peringkat);
    cout << "Masukkan Tempat Lomba Diadakan: ";
    getline(cin, sertifikatlomba.tempat);
    cout << "Masukkan Nama Penyelenggara atau Panitia Lomba: ";
    getline(cin, sertifikatlomba.penyelenggara);
    return sertifikatlomba;
}
//Diskripsi
int main()
{
    KTP ktp = inputKTP();
    SIM sim = inputSIM();
    SertifikatLomba sertifikatlomba = inputSertifikatLomba();
    //output untuk memverifikasi data KTP
    cout << "\n\n=====Data KTP Anda=====\n";
    cout << "Nama: " << ktp.nama << endl;
    cout << "Nomor NIK: " << ktp.nik << endl;
    cout << "Tempat/Tanggal Lahir: " << ktp.ttl << endl;
    cout << "Jenis Kelamin: " << ktp.jk << endl;
    cout << "Golongan Darah: " << ktp.golonganDarah << endl;
    cout << "Alamat: " << ktp.alamat << endl;
    cout << "Agama: " << ktp.agama << endl;
    cout << "Status Perkawinan: " << ktp.status << endl;
    cout << "Pekerjaan: " << ktp.pekerjaan << endl;
    cout << "Kewarganegaraan: " << ktp.kewarganegaraan << endl;
    //output untuk memverifikasi data SIM
    cout << "\n=====Data SIM Anda=====\n";
    cout << "Nama: " << sim.nama << endl;
    cout << "Nomor SIM: " << sim.nomor << endl;
    cout << "Golongan Darah: " << sim.golonganDarah << endl;
    cout << "Alamat: " << sim.alamat << endl;
    cout << "Waktu Berlaku: " << sim.waktuBerlaku << endl;
    cout << "Jenis Kendaraan: " << sim.jenisKendaraan << endl;
    cout << "Pekerjaan: " << sim.pekerjaan << endl;
    //output untuk memverifikasi data Sertifikat Lomba
    cout << "\n=====Data Sertifikat Lomba Anda=====\n";
    cout << "Nama Peserta: " << sertifikatlomba.namaPeserta << endl;
    cout << "Nomor Sertifikat: " << sertifikatlomba.nomor << endl;
    cout << "Nama Lomba: " << sertifikatlomba.namaLomba << endl;
    cout << "Asal Sekolah: " << sertifikatlomba.asalSekolah << endl;
    cout << "Waktu Acara: " << sertifikatlomba.waktu << endl;
    cout << "Peringkat: " << sertifikatlomba.peringkat << endl;
    cout << "Tempat: " << sertifikatlomba.tempat << endl;
    cout << "Penyelenggara: " << sertifikatlomba.penyelenggara << endl;
    return 0;
}
