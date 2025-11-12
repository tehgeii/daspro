#include <iostream>
using namespace std;

// Kamus untuk input
char Kodebuku, pilihan;
int total_semua_buku = 0, total_semua_harga = 0;
int piljudul, metode;
string COD = "Cash On Delivery", minimarket = "Pembayaran Minimarket";
int i; int kategori;

// Kamus untuk kategori buku
string KodeA = "Buku Catatan";
string KodeB = "Buku Novel";
string KodeC = "Buku Pembelajaran";
string KodeD = "Komik";
string KodeE = "Kamus";
string KodeF = "Ensiklopedia";

// Kamus untuk judul dan harga buku
string judul[6][5] = {
    {"Notebook", "Blinder", "Spiral", "Lucu", "Kulit"},
    {"Dikta dan Hukum", "Dilan 1990", "Laskar Pelangi", "5 cm", "Ayat Ayat Cinta"},
    {"IPA", "IPS", "PAI", "Bahasa Indonesia", "Matematika"},
    {"One Piece", "Naruto", "Detektif Conan", "Attack on Titan", "Death Note"},
    {"Bahasa Indonesia", "Bahasa Inggris", "Bahasa Mandarin", "Bahasa Jepang", "Bahasa Rusia"},
    {"Jurnal", "Anak", "Sains", "Islam", "Biografi"}
};

int harga[6][5] = {
    {25000, 32000, 10000, 80000, 45000},
    {100000, 198000, 200000, 170000, 116000},
    {165000, 108000, 139000, 81000, 90000},
    {35000, 25000, 40000, 55000, 88000},
    {100000, 200000, 250000, 175000, 300000},
    {100000, 200000, 250000, 175000, 300000}
};

int stok[6] = {645, 1854, 319, 225, 548, 144};
float diskon[6] = {0.02, 0.10, 0.20, 0.30, 0.15, 0.25};

// Fungsi untuk membeli buku
int beliBuku(int kategori, int judul_buku) {
    if (stok[kategori] > 0) {
        int hargaDiskon = harga[kategori][judul_buku] - (harga[kategori][judul_buku] * diskon[judul_buku]);
        total_semua_buku++;
        stok[kategori]--;
        total_semua_harga += hargaDiskon; // Tambahkan harga buku ke total harga
        cout << "Buku yang kamu pilih adalah: " << judul[kategori][judul_buku] << endl;
        cout << "Harga setelah diskon: Rp." << hargaDiskon << endl;
        return hargaDiskon;
    } else {
        cout << "Maaf, stok buku " << judul[kategori][judul_buku] << " sudah habis!" << endl;
        return 0; // Tidak ada harga yang ditambahkan jika stok habis
    }
}

int main() {
    do {
        cout << "======================================\n";
        cout << "               TOKO BUKU            \n";
        cout << "======================================\n";
        cout << "Daftar buku:\n";
        cout << "A) " << KodeA << " - Stok: " << stok[0] << endl;
        cout << "B) " << KodeB << " - Stok: " << stok[1] << endl;
        cout << "C) " << KodeC << " - Stok: " << stok[2] << endl;
        cout << "D) " << KodeD << " - Stok: " << stok[3] << endl;
        cout << "E) " << KodeE << " - Stok: " << stok[4] << endl;
        cout << "F) " << KodeF << " - Stok: " << stok[5] << endl;
        cout << "======================================\n";
        do {
        cout << "Masukkan KODE buku yang ingin Anda cari (A-F): ";

            cin >> Kodebuku;
        } while ((Kodebuku != 'a') && (Kodebuku != 'A') && (Kodebuku != 'b') && (Kodebuku != 'B') && (Kodebuku != 'c') && (Kodebuku != 'C') && (Kodebuku != 'd') && (Kodebuku != 'D') && (Kodebuku != 'E') && (Kodebuku != 'e') && (Kodebuku != 'f') && (Kodebuku != 'F'));

        kategori = -1;
        switch(Kodebuku) {
            case 'A': case 'a': kategori = 0; break;
            case 'B': case 'b': kategori = 1; break;
            case 'C': case 'c': kategori = 2; break;
            case 'D': case 'd': kategori = 3; break;
            case 'E': case 'e': kategori = 4; break;
            case 'F': case 'f': kategori = 5; break;
            default: kategori = -1; break;
        }

        if (kategori != -1) {
            cout << "Silahkan pilih judul buku yang ingin Anda beli:\n";
            i = 0;
            do {
                cout << i + 1 << ". " << judul[kategori][i] << " - Harga: Rp." << harga[kategori][i] << endl;
                i++;
            } while (i < 5);

            do {
                cout << "Masukkan nomor buku yang ingin Anda beli: ";
                cin >> piljudul;
            } while ((piljudul < 1) || (piljudul > 5));

            if (piljudul >= 1 && piljudul <= 5) {
                beliBuku(kategori, piljudul - 1);
            }
        }

        do {
            cout << "Apakah Anda ingin membeli buku lain? (Y/N): ";
            cin >> pilihan;
        } while ((pilihan != 'y') && (pilihan != 'Y') && (pilihan != 'n') && (pilihan != 'N'));

    } while (pilihan == 'Y' || pilihan == 'y');

    cout << "======================================\n";
    cout << "Total buku yang dipilih: " << total_semua_buku << endl;
    cout << "Total harga yang harus Anda bayar: Rp." << total_semua_harga << endl;
    cout << "======================================\n";

    cout << "============================" << endl;
    cout << "1. " << COD << endl;
    cout << "2. " << minimarket << endl;
    cout << "============================" << endl;

    do {
        cout << "Masukkan metode pembayaran anda: ";
        cin >> metode;
    } while ((metode < 1) || (metode > 2));

    if (metode == 1) {
        cout << "Pemabayaran terkonfirmasi !!!  (COD) " << endl;
        cout << "Silahkan disiapkan untuk pembayarannya saat kurir kami sampai di lokasi tujuan" << endl;
        cout << "Terimakasih telah Berbelanja di Toko Kami " << endl;
    } else if (metode == 2) {
        cout << "Silahkan Anda mengunjungi minimarket terdekat !!! " << endl;
        cout << "Tunjukan nomer Pembayaran dibawah ini kepada kasir Minimarket untuk melanjutkan transaksi " << endl;
        cout << "11122 33444 888555 " << endl;
        cout << "Barang akan kami kirim H+1 setelah pembayaran selesai " << endl;
        cout << "Terimakasih telah Berbelanja di Toko Kami " << endl;
    }

    return 0;
}
