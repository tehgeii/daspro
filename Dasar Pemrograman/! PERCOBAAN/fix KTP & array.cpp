// judul: fix array untuk KTP P P P P
#include <iostream>
using namespace std;

// kamus:

// untuk format nama
struct Nama
{
    string Nama_depan, Nama_tengah, Nama_belakang;
};

// Tempat tanggal lahir
struct TTL
{
    string Kota_lahir;
    int tgl, tahun, bulan;
};

// Alamat
struct Alamat
{
    string alamat, kelurahan, kecamatan;
    int Rt, Rw, NomerRumah;
};

// untuk yang input satu kali
string jeniskelamin, agama, nikah, pekerjaan, kewarganegaraan, tempat_pembuatan;
long long int NIK;

// karna dibawah ini terlalu ribet untuk array nya, maka kita jadikan satu.
// struct Nama nama;
// struct TTL tanggal_lahir,tanggal_pembuatan;
// struct Alamat almt;

// untuk ADT KTP, kita jadikan satu wadah, yakni didalam kamus KTP
struct KTP
{
    long long int NIK;
    Nama nama;
    TTL tanggal_lahir,tanggal_dibuat;
    Alamat almat;
    string jeniskelamin, agama, nikah, pekerjaan, kewarganegaraan, tempat_pembuatan;
};

// untuk array
int Jumlah_KTP, i, j, x, z, y, min_tgl, min_bulan, min_tahun, maxx_tgl, maxx_bulan, maxx_tahun;

// Deskripsi:
int main()
{
    cout << "==========================================" << endl;
    cout << "                   KTP                    " << endl;
    cout << "==========================================" << endl;
    cout << "Berapa KTP yang ingin anda input & output? "; cin >> Jumlah_KTP;

    // array untuk input KTP
    KTP formatKTP[Jumlah_KTP];
    i = 0;

    // untuk input nya (array dan loop)
    do {
        // Nama
        cout << "KTP KE-" << i + 1 << endl;
        cout << "Masukan Nomer NIK MU: "; cin >> formatKTP[i].NIK;
        cout << "Masukan Nama mu dong :) " << endl;
        cout << "Nama depan kamu: "; cin >> formatKTP[i].nama.Nama_depan;
        cout << "Kalo nama tengah Kamu: "; cin >> formatKTP[i].nama.Nama_tengah;
        cout << "hm...tereakhir nama belakang kamu: "; cin >> formatKTP[i].nama.Nama_belakang;

        // Tempat & tanggal lahir
        cin.ignore();
        cout << "Dimanakah kamu lahir kawan? (kota/kab): "; getline(cin,formatKTP[i].tanggal_lahir.Kota_lahir);
        cout << "Kalo tanggal lahir kamu? "; cin >> formatKTP[i].tanggal_lahir.tgl;
        cout << "oke, sekarang bulan lahir mu (angka): "; cin >> formatKTP[i].tanggal_lahir.bulan;
        cout << "sip, last tahun lahir kamu: "; cin >> formatKTP[i].tanggal_lahir.tahun;

        // Jenis Kelamin
        cin.ignore();
        cout << "Jemis kelamin mu apa? : "; getline(cin, formatKTP[i].jeniskelamin);
        // Alamat
        cout << "Apa jalan/ alamat rumah kamu: "; getline(cin,formatKTP[i].almat.alamat);
        cout << "Rt? : "; cin >> formatKTP[i].almat.Rt;
        cout << "Rw? : "; cin >> formatKTP[i].almat.Rw;
        cout << "Kelurahan? : "; cin >> formatKTP[i].almat.kelurahan;
        cin.ignore();
        cout << "Kecamatan? : "; getline(cin, formatKTP[i].almat.kecamatan);
        // Agama
        cout << "Agama mu opo? : "; cin >> formatKTP[i].agama;
        // Status Perkawinan
        cout << "Status Perkawinan (belum/sudah): "; cin >> formatKTP[i].nikah;
        // Pekerjaan
        cout << "Pekerjaan mu opo? : "; cin >> formatKTP[i].pekerjaan;
        // Kewarganegaraan
        cout << "Kewarganegaraan: "; cin >> formatKTP[i].kewarganegaraan;
        // tanggal pembuatan KTP
        cout << "Dimanakah kamu membuat KTP ini?  : "; cin >> formatKTP[i].tempat_pembuatan;
        cout << "Tanggal berapa? : "; cin >> formatKTP[i].tanggal_dibuat.tgl;
        cout << "bulan? (angka)  : "; cin >> formatKTP[i].tanggal_dibuat.bulan;
        cout << "Tahun?  ; ";cin >> formatKTP[i].tanggal_dibuat.tahun;

        i = i + 1;
    }while(i < Jumlah_KTP);

    // untuk output nya
    j = 0;
    do
    {
        cout << "KTP KE-" << j + 1 << endl;
        cout << "NIK: " << formatKTP[j].NIK << endl;
        cout << "Nama: " << formatKTP[j].nama.Nama_depan << " " << formatKTP[j].nama.Nama_tengah << " " << formatKTP[j].nama.Nama_belakang << endl;
        cout << "Tempat/Tanggal lahir: " << formatKTP[j].tanggal_lahir.Kota_lahir << "," << formatKTP[j].tanggal_lahir.tgl << "-"
            << formatKTP[j].tanggal_lahir.bulan << "-" << formatKTP[j].tanggal_lahir.tahun << endl;
        cout << "Jenis Kelamin: " << formatKTP[j].jeniskelamin << endl;
        cout << "Alamat: " << formatKTP[j].almat.alamat << endl;
        cout << "     Rt/Rw: " << formatKTP[j].almat.Rt << "/" << formatKTP[j].almat.Rw << endl;
        cout << "     Kelurahan: " << formatKTP[j].almat.kelurahan << endl;
        cout << "     Kecamatan: " << formatKTP[j].almat.kecamatan << endl;
        cout << "Agama: " << formatKTP[j].agama << endl;
        cout << "Status Perkawinan: " << formatKTP[j].nikah << endl;
        cout << "Pekerjaan: " << formatKTP[j].pekerjaan << endl;
        cout << "Kewarganegaraan: " << formatKTP[j].kewarganegaraan << endl;
        cout << "Tempat pembuatan: " << formatKTP[j].tempat_pembuatan << endl;
        cout << "Tanggal pembuatan: " << formatKTP[j].tanggal_dibuat.tgl << "-" << formatKTP[j].tanggal_dibuat.bulan << "-"
           << formatKTP[j].tanggal_dibuat.tahun << endl;
        j = j + 1;
    }while(j < Jumlah_KTP);

    // searching KTP yang dibuatnya duluan
    x = 0;
    min_tgl = formatKTP[0].tanggal_dibuat.tgl;
    min_bulan = formatKTP[0].tanggal_dibuat.bulan;
    min_tahun = formatKTP[0].tanggal_dibuat.tahun;
    do
    {
        if (formatKTP[x].tanggal_dibuat.tahun < min_tahun ||
            (formatKTP[x].tanggal_dibuat.tahun == min_tahun && formatKTP[x].tanggal_dibuat.bulan < min_bulan) ||
            (formatKTP[x].tanggal_dibuat.tahun == min_tahun && formatKTP[x].tanggal_dibuat.bulan == min_bulan && formatKTP[x].tanggal_dibuat.tgl < min_tgl))
            {
                min_tgl = formatKTP[x].tanggal_dibuat.tgl;
                min_bulan = formatKTP[x].tanggal_dibuat.bulan;
                min_tahun = formatKTP[x].tanggal_dibuat.tahun;
            }
            x = x + 1;
    } while (x < Jumlah_KTP);

    // searching KTP yang dibuatnya belakangan
    z = 0;
    maxx_tgl = formatKTP[0].tanggal_dibuat.tgl;
    maxx_bulan = formatKTP[0].tanggal_dibuat.bulan;
    maxx_tahun = formatKTP[0].tanggal_dibuat.tahun;
    do
    {
        if (formatKTP[z].tanggal_dibuat.tahun > maxx_tahun ||
            (formatKTP[z].tanggal_dibuat.tahun == maxx_tahun && formatKTP[z].tanggal_dibuat.bulan > maxx_bulan) ||
            (formatKTP[z].tanggal_dibuat.tahun == maxx_tahun && formatKTP[z].tanggal_dibuat.bulan == maxx_bulan && formatKTP[z].tanggal_dibuat.tgl > maxx_tgl))
            {
                maxx_tgl = formatKTP[z].tanggal_dibuat.tgl;
                maxx_bulan = formatKTP[z].tanggal_dibuat.bulan;
                maxx_tahun = formatKTP[z].tanggal_dibuat.tahun;
            }
            z = z + 1;
    } while (z < Jumlah_KTP);

    cout << "KTP yang dibuatnya duluan adalah: " << min_tgl << " - " << min_bulan << " - " << min_tahun << endl;
    cout << "KTP yang dibuatnya belakang adalah: " << maxx_tgl << " - " << maxx_bulan << " - " << maxx_tahun << endl;

    // sorting tiiiing tinggggg
    y = 0;
    do
    {

    }

    return 0;
}
