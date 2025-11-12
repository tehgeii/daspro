#include <iostream>
using namespace std;

// Kamus untuk input
char Kodebuku, pilihan;
int total_semua_buku = 0, total_semua_harga = 0;

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

// Fungsi untuk melakukan pembelian
void beliBuku(int kategori, int judulIndex) {
    if (stok[kategori] > 0) {
        int hargaDiskon = harga[kategori][judulIndex] * (1 - diskon[kategori]);
        total_semua_harga += hargaDiskon;
        total_semua_buku++;
        stok[kategori]--;
        cout << "Buku yang kamu pilih adalah: " << judul[kategori][judulIndex] << endl;
        cout << "Harga setelah diskon: Rp." << hargaDiskon << endl;
    } else {
        cout << "Stok buku habis!" << endl;
    }
}

int main() {
    do {
        
        cout << "======================================\n";
        cout << "                TOKO BUKU            \n";
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
        cout << "Masukkan KODE buku yang ingin Anda cari: ";
        cin >> Kodebuku;
        }while ((Kodebuku != 'A') || (Kodebuku != 'a') || (Kodebuku != 'B') || (Kodebuku != 'b') || (Kodebuku != 'C') || (Kodebuku != 'c') || (Kodebuku != 'D') || (Kodebuku != 'd') || (Kodebuku != 'E') || (Kodebuku != 'e') || (Kodebuku != 'F') || (Kodebuku != 'f'));
        int kategori = -1;
        if (Kodebuku == 'A' || Kodebuku == 'a') kategori = 0;
        else if (Kodebuku == 'B' || Kodebuku == 'b') kategori = 1;
        else if (Kodebuku == 'C' || Kodebuku == 'c') kategori = 2;
        else if (Kodebuku == 'D' || Kodebuku == 'd') kategori = 3;
        else if (Kodebuku == 'E' || Kodebuku == 'e') kategori = 4;
        else if (Kodebuku == 'F' || Kodebuku == 'f') kategori = 5;

        if (kategori != -1) {
            cout << "Silahkan pilih judul buku yang ingin Anda beli:\n";
            int i = 0;
            do {
                cout << i + 1 << ". " << judul[kategori][i] << " - Harga: Rp." << harga[kategori][i] << endl;
                i++;
            } while (i < 5);

            int piljudul;
            cout << "Masukkan nomor buku yang ingin Anda beli: ";
            cin >> piljudul;

            if (piljudul >= 1 && piljudul <= 5) {
                beliBuku(kategori, piljudul - 1);
            } else {
                cout << "Nomor buku tidak valid!" << endl;
            }
        } else {
            cout << "Kode buku tidak valid!" << endl;
        }

        cout << "Apakah Anda ingin membeli buku lain? (Y/N): ";
        cin >> pilihan;
    } while (pilihan == 'Y' || pilihan == 'y');

    cout << "Total buku yang dipilih: " << total_semua_buku << endl;
    cout << "Total harga yang harus Anda bayar: Rp." << total_semua_harga << endl;

    return 0;
}