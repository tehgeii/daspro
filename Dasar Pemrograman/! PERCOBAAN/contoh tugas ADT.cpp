//judul: tugas ADT daspro Dafi (KTP, SIM, Sertifikat Lomba)
#include <iostream>
#include <string>
using namespace std;
//kamus
//ADT untuk KTP
struct KTP
{
    string nama_ktp;
    string nik_ktp;
    string ttl_ktp;
    string jeniskelamin_ktp;
    string golongandarah_ktp;
    string alamat_ktp;
    string agama_ktp;
    string statusperkawinan_ktp;
    string pekerjaan_ktp;
    string kewarganegaraan_ktp;
};
//ADT untuk SIM
struct SIM
{
    string nama_sim;
    string nomor_sim;
    string golongandarah_sim;
    string alamat_sim;
    string waktuberlaku_sim;
    string jeniskendaraan_sim;
    string pekerjaan_sim;
};
//ADT untuk Sertifikat Lomba
struct SertifikatLomba
{
    string namapeserta_lomba;
    string nomorsertifikat_lomba;
    string nama_lomba;
    string asalsekolah_lomba;
    string waktudiadakan_lomba;
    string peringkat_lomba;
    string tempat_lomba;
    string penyelenggara_lomba;
};
//diskripsi
//inputan data KTP
KTP inputKTP()
{
    cout << "Inputan Data KTP\n\n";
    KTP ktp;
    cout << "Masukkan Nama Anda: ";
    getline(cin, ktp.nama_ktp);
    cout << "Masukkan Nomor NIK Anda: ";
    getline(cin, ktp.nik_ktp);
    cout << "Masukkan Tempat/Tanggal Lahir Anda: ";
    getline(cin, ktp.ttl_ktp);
    cout << "Masukkan Jenis Kelamin Anda: ";
    getline(cin, ktp.jeniskelamin_ktp);
    cout << "Masukkan Golongan Darah Anda: ";
    getline(cin, ktp.golongandarah_ktp);
    cout << "Masukkan Alamat Anda: ";
    getline(cin, ktp.alamat_ktp);
    cout << "Masukkan Agama Anda: ";
    getline(cin, ktp.agama_ktp);
    cout << "Masukkan Status Perkawinan Anda: ";
    getline(cin, ktp.statusperkawinan_ktp);
    cout << "Masukkan Pekerjaan Anda: ";
    getline(cin, ktp.pekerjaan_ktp);
    cout << "Masukkan Kewarganegaraan Anda: ";
    getline(cin, ktp.kewarganegaraan_ktp);
    return ktp;
}
//inputan data SIM
SIM inputSIM()
{
    cout << "\nInputan Data SIM\n\n";
    SIM sim;
    cout << "Masukkan Nama Anda: ";
    getline(cin, sim.nama_sim);
    cout << "Masukkan Nomor SIM Anda: ";
    getline(cin, sim.nomor_sim);
    cout << "Masukkan Golongan Darah Anda: ";
    getline(cin, sim.golongandarah_sim);
    cout << "Masukkan Alamat Anda: ";
    getline(cin, sim.alamat_sim);
    cout << "Masukkan Waktu Berlaku SIM Anda: ";
    getline(cin, sim.waktuberlaku_sim);
    cout << "Masukkan Jenis Kendaraan Anda: ";
    getline(cin, sim.jeniskendaraan_sim);
    cout << "Masukkan Pekerjaan Anda: ";
    getline(cin, sim.pekerjaan_sim);
    return sim;
}
//inputan data Sertifikat Lomba
SertifikatLomba inputSertifikatLomba()
{
    cout << "\nInputan Data Sertifikat Lomba\n\n";
    cout << endl;
    SertifikatLomba sertifikatlomba;
    cout << "Masukkan Nama Peserta Lomba: ";
    getline(cin, sertifikatlomba.namapeserta_lomba);
    cout << "Masukkan Nomor Sertifikat Lomba: ";
    getline(cin, sertifikatlomba.nomorsertifikat_lomba);
    cout << "Masukkan Nama Lomba Yang Diikutkan: ";
    getline(cin, sertifikatlomba.nama_lomba);
    cout << "Masukkan Asal Sekolah Anda: ";
    getline(cin, sertifikatlomba.asalsekolah_lomba);
    cout << "Masukkan Waktu Acara Lomba: ";
    getline(cin, sertifikatlomba.waktudiadakan_lomba);
    cout << "Masukkan Nomor Peringkat Lomba: ";
    getline(cin, sertifikatlomba.peringkat_lomba);
    cout << "Masukkan Tempat Lomba Diadakan: ";
    getline(cin, sertifikatlomba.tempat_lomba);
    cout << "Masukkan Nama Penyelenggara atau Panitia Lomba: ";
    getline(cin, sertifikatlomba.penyelenggara_lomba);
    return sertifikatlomba;
}
int main()
{
    KTP ktp = inputKTP();
    SIM sim = inputSIM();
    SertifikatLomba sertifikatlomba = inputSertifikatLomba();
    //output untuk verifikasi seluruh data
    cout << endl;
    cout << "\n=====Data KTP Anda=====\n";
    cout << "Nama: " << ktp.nama_ktp << endl;
    cout << "Nomor NIK: " << ktp.nik_ktp << endl;
    cout << "Tempat/Tanggal Lahir: " << ktp.ttl_ktp << endl;
    cout << "Jenis Kelamin: " << ktp.jeniskelamin_ktp << endl;
    cout << "Golongan Darah: " << ktp.golongandarah_ktp << endl;
    cout << "Alamat: " << ktp.alamat_ktp << endl;
    cout << "Agama: " << ktp.agama_ktp << endl;
    cout << "Status Perkawinan: " << ktp.statusperkawinan_ktp << endl;
    cout << "Pekerjaan: " << ktp.pekerjaan_ktp << endl;
    cout << "Kewarganegaraan: " << ktp.kewarganegaraan_ktp << endl;
    cout << endl;
    cout << "\n=====Data SIM Anda=====\n";
    cout << "Nama: " << sim.nama_sim << endl;
    cout << "Nomor SIM: " << sim.nomor_sim << endl;
    cout << "Golongan Darah: " << sim.golongandarah_sim << endl;
    cout << "Alamat: " << sim.alamat_sim << endl;
    cout << "Berlaku Hingga: " << sim.waktuberlaku_sim << endl;
    cout << "Jenis Kendaraan: " << sim.jeniskendaraan_sim << endl;
    cout << "Pekerjaan: " << sim.pekerjaan_sim << endl;
    cout << endl;
    cout << "\n=====Data Sertifikat Lomba Anda=====\n";
    cout << "Nama Peserta: " << sertifikatlomba.namapeserta_lomba << endl;
    cout << "Nomor Sertifikat: " << sertifikatlomba.nomorsertifikat_lomba << endl;
    cout << "Nama Lomba: " << sertifikatlomba.nama_lomba << endl;
    cout << "Asal Sekolah: " << sertifikatlomba.asalsekolah_lomba << endl;
    cout << "Waktu Lomba: " << sertifikatlomba.waktudiadakan_lomba << endl;
    cout << "Peringkat: " << sertifikatlomba.peringkat_lomba << endl;
    cout << "Tempat Lomba: " << sertifikatlomba.tempat_lomba << endl;
    cout << "Penyelenggara/Panitia Lomba: " << sertifikatlomba.penyelenggara_lomba << endl;
    return 0;
}
