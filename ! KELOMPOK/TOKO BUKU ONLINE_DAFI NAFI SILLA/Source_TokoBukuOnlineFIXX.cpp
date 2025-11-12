//judul: toko buku
#include <iostream>
using namespace std;
// kamus:

// kamus untuk input
char Kodebuku,pilihan,tas,tass;
int bayar,kembalian,utang,piljudul,pengantar,tas_belanja;

// kamus untuk individual
string KodeA = "Buku Catatan";
string KodeB = "Buku Novel";
string KodeC = "Buku Pembelajaran";
string KodeD = "Komik";
string KodeE = "Kamus";
string KodeF = "Ensiklopedia";

// kamus untuk judul Buku catatan
string judulcatatan1 = "notebook";
string judulcatatan2 = "blinder";
string judulcatatan3 = "spiral";
string judulcatatan4 = "lucu";
string judulcatatan5 = "kulit";

// kamus untuk judul buku novel
string judulnovel1 = "dikta dan hukum";
string judulnovel2 = "dilan 1990";
string judulnovel3 = "laskar pelangi";
string judulnovel4 = "5 cm";
string judulnovel5 = "ayat ayat cinta";

// kamus untuk judul buku pembelajaran
string judulpelajaran1 = "IPA";
string judulpelajaran2 = "IPS";
string judulpelajaran3 = "PAI";
string judulpelajaran4 = "BAHASA INDONESIA";
string judulpelajaran5 = "MATEMATIKA";

// KAMUS UNTUK JUDUL KOMIK
string judulkomik1 = "one piece";
string judulkomik2 = "naruto";
string judulkomik3 = "detektif conan";
string judulkomik4 = "attack on titan";
string judulkomik5 = "death note";

// kamus untuk judul kamus
string judulkamus1 = "bahasa indonesia";
string judulkamus2 = "bahasa inggris";
string judulkamus3 = "bahasa mandarin";
string judulkamus4 = "bahasa jepang";
string judulkamus5 = "bahasa rusia";

// kamus untuk judul ensiklopedia
string judulensiklopedia1 = "jurnal";
string judulensiklopedia2 = "anak";
string judulensiklopedia3 = "sains";
string judulensiklopedia4 = "islam";
string judulensiklopedia5 = "biografi";


// jumlah stok untuk tipe buku
int stokA = 645;
int stokB = 1854;
int stokC = 319;
int stokD = 225;
int stokE = 548;
int stokF = 144;

//kamus untuk harga Buku Catatan
int HBC1 = 25000;
int HBC2 = 32000;
int HBC3 = 10000; 
int HBC4 = 80000;
int HBC5 = 45000;

// KAMUS UNTUK HARGA BUKU NOVEL
int HBN1 = 100000;
int HBN2 = 198000;
int HBN3 = 200000;
int HBN4 = 170000;
int HBN5 = 116000;

// kamus untuk harga pembelajaran
int HBP1 = 165000;
int HBP2 = 108000;
int HBP3 = 139000;
int HBP4 = 81000;
int HBP5 = 90000;

// KAMUS UNTUK BUKU KOMIK
int HBKOM1 = 35000;
int HBKOM2 = 25000;
int HBKOM3 = 40000;
int HBKOM4 = 55000;
int HBKOM5 = 88000;

// kamus untuk harga buku kamus
int HBKAM1 = 100000;
int HBKAM2 = 200000;
int HBKAM3 = 250000;
int HBKAM4 = 175000;
int HBKAM5 = 300000;

// KAMUS UNTUK HARGA BUKU ENSIKLOPEDIA
int HBE1 = 100000;
int HBE2 = 200000;
int HBE3 = 250000;
int HBE4 = 175000;
int HBE5 = 300000;

// kamus untuk menghitung jumlah buku yang kita pilih
int total_semua_buku;
int total_semua_harga;
int total_diskon;
// buat diskon A
int total_fixdiskonA1;
int total_fixdiskonA2;
int total_fixdiskonA3;
int total_fixdiskonA4;
int total_fixdiskonA5;
// buat diskon B
int total_fixdiskonB1;
int total_fixdiskonB2;
int total_fixdiskonB3;
int total_fixdiskonB4;
int total_fixdiskonB5;
// buat diskon C
int total_fixdiskonC1;
int total_fixdiskonC2;
int total_fixdiskonC3;
int total_fixdiskonC4;
int total_fixdiskonC5;
// buat diskon D
int total_fixdiskonD1;
int total_fixdiskonD2;
int total_fixdiskonD3;
int total_fixdiskonD4;
int total_fixdiskonD5;
// buat diskon E
int total_fixdiskonE1;
int total_fixdiskonE2;
int total_fixdiskonE3;
int total_fixdiskonE4;
int total_fixdiskonE5;
// buat diskon F
int total_fixdiskonF1;
int total_fixdiskonF2;
int total_fixdiskonF3;
int total_fixdiskonF4;
int total_fixdiskonF5;

// kamus untuk diskon
float hargadiskonA = 0.02;
float hargadiskonB = 0.10;
float hargadiskonC = 0.20;
float hargadiskonD = 0.30;
float hargadiskonE = 0.15;
float hargadiskonF = 0.25;

//kamus untuk uang tip
string tip1 = "0";
string tip2 = "1000";
string tip3 = "2000";
string tip4 = "5000";
string tip5 = "10000";
int uangtip;
int tipp1 = 0;
int tipp2 = 1000;
int tipp3 = 2000;
int tipp4 = 5000;
int tipp5 = 10000;
int total_tip;

// kamus untuk metode pembayaran
string transfer = "Trasnfer";
string QRIS = "Qris";
string Ewallet = "Ewallet";
string COD = "COD";
string minimarket = "minimarket";
int metode;

// biyaya pengiriman
int total_pengiriman;
int JNT = 18000;
int JNE = 12000;
int SiCEPAT = 10000;
int NINJA_Expres = 15000;
int Pos_Indonesia = 8000;

// kamus untuk metode pengiriman
char pengiriman;

// kamus untuk bank 
string bank1 = "BCA";
string bank2 = "BRI";
string bank3 = "BNI";
string bank4 = "Mandiri";
string bank5 = "Danamon";
int milihbank;

// kamus untuk qris
int milih_Qris,Qris_atm;
int AdminQris = 500; 
int qris_bri = 2000;
int qris_bca = 2500;
int qris_mandi = 2200;
int qris_bni = 2700;
int qris_dana = 3000;

// kamus untuk pembayaran E-wallet
int milih_wallet,nomer_tlp,pin;

//diskripsi
int main()
{
    total_semua_buku = 0;
    total_semua_harga = 0;
    total_diskon = 0;
    total_fixdiskonA1 = 0;
    total_fixdiskonA2 = 0;
    total_fixdiskonA3 = 0;
    total_fixdiskonA4 = 0;
    total_fixdiskonA5 = 0;
    total_fixdiskonB1 = 0;
    total_fixdiskonB2 = 0;
    total_fixdiskonB3 = 0;
    total_fixdiskonB4 = 0;
    total_fixdiskonB5 = 0;
    total_fixdiskonC1 = 0;
    total_fixdiskonC2 = 0;
    total_fixdiskonC3 = 0;
    total_fixdiskonC4 = 0;
    total_fixdiskonC5 = 0;
    total_fixdiskonD1 = 0;
    total_fixdiskonD2 = 0;
    total_fixdiskonD3 = 0;
    total_fixdiskonD4 = 0;
    total_fixdiskonD5 = 0;
    total_fixdiskonE1 = 0;
    total_fixdiskonE2 = 0;
    total_fixdiskonE3 = 0;
    total_fixdiskonE4 = 0;
    total_fixdiskonE5 = 0;
    total_fixdiskonF1 = 0;
    total_fixdiskonF2 = 0;
    total_fixdiskonF3 = 0;
    total_fixdiskonF4 = 0;
    total_fixdiskonF5 = 0;
    total_pengiriman = 0;
    total_tip = 0;

    do
    {
        cout << " =======================================" << endl;
        cout << "                TOKO BUKU               " << endl;
        cout << " =======================================" << endl;
        cout << " Daftar buku:" << endl;
        cout << " A) " << KodeA << " - Stok: " << stokA << endl;
        cout << " B) " << KodeB << " - Stok: " << stokB << endl;
        cout << " C) " << KodeC << " - Stok: " << stokC << endl;
        cout << " D) " << KodeD << " - Stok: " << stokD << endl;
        cout << " E) " << KodeE << " - Stok: " << stokE << endl;
        cout << " F) " << KodeF << " - Stok: " << stokF << endl;
        cout << " =======================================" << endl;

        cout << "Masukkan KODE buku yang ingin Anda cari !!! " << endl;
        cin >> Kodebuku;
        
    } while ((Kodebuku != 'a') && (Kodebuku != 'A') && (Kodebuku != 'b') && (Kodebuku != 'B') && (Kodebuku != 'c') && (Kodebuku != 'C') && (Kodebuku != 'd') && (Kodebuku != 'D') && (Kodebuku != 'E') && (Kodebuku != 'e') && (Kodebuku != 'f') && (Kodebuku != 'F'));
        
    do
    {
        
        do
        {
        cout << "" << endl;
        if ((Kodebuku == 'A') || (Kodebuku == 'a'))
        {
            cout << " ========================================================" << endl;
            cout << "  Silahkan pilih judul / tipe buku yang ingin anda beli  " << endl;
            cout << " ========================================================" << endl;
            cout << endl;
            cout << " Buku apa yang anda pilih ? " << endl;
            cout << " 1." << judulcatatan1 << "-Harga Rp." << HBC1 <<endl;
            cout << " 2." << judulcatatan2 << "-Harga Rp." << HBC2 <<endl;
            cout << " 3." << judulcatatan3 << "-Harga Rp." << HBC3 <<endl;
            cout << " 4." << judulcatatan4 << "-Harga Rp." << HBC4 <<endl;
            cout << " 5." << judulcatatan5 << "-Harga Rp." << HBC5 <<endl;
            cout << "Masukkan nomer buku yang ingin kamu beli !!! " << endl;
            cin >> piljudul;
        
        } else if ((Kodebuku == 'B') || (Kodebuku == 'b'))
        {
            cout << "========================================================" << endl;
            cout << "silahkan pilih judul/type buku yang ingin anda beli !!! " << endl;
            cout << "========================================================" << endl;
            cout << endl;
            cout << "Buku apa yang anda pilih ? " << endl;
            cout << "1." << judulnovel1 << "-Harga Rp." << HBN1 <<endl;
            cout << "2." << judulnovel2 << "-Harga Rp." << HBN2 <<endl;
            cout << "3." << judulnovel3 << "-Harga Rp." << HBN3 <<endl;
            cout << "4." << judulnovel4 << "-Harga Rp." << HBN4 <<endl;
            cout << "5." << judulnovel5 << "-Harga Rp." << HBN5 <<endl;
            cout << "masukan nomer buku yang ingin kamu beli !!! " << endl;
            cin >> piljudul;
        } else if ((Kodebuku == 'C') || (Kodebuku == 'c'))
        {
            cout << "========================================================" << endl;
            cout << "silahkan pilih judul/type buku yang ingin anda beli !!! " << endl;
            cout << "========================================================" << endl;
            cout << endl;
            cout << "Buku apa yang anda pilih ? " << endl;
            cout << "1." << judulpelajaran1 << "-Harga Rp." << HBP1 <<endl;
            cout << "2." << judulpelajaran2 << "-Harga Rp." << HBP2 <<endl;
            cout << "3." << judulpelajaran3 << "-Harga Rp." << HBP3 <<endl;
            cout << "4." << judulpelajaran4 << "-Harga Rp." << HBP4 <<endl;
            cout << "5." << judulpelajaran5 << "-Harga Rp." << HBP5 <<endl;
            cout << "masukan nomer buku yang ingin kamu beli !!! " << endl;
            cin >> piljudul;
        } else if ((Kodebuku == 'D') || (Kodebuku == 'd'))
        {
            cout << "========================================================" << endl;
            cout << "silahkan pilih judul/type buku yang ingin anda beli !!! " << endl;
            cout << "========================================================" << endl;
            cout << endl;
            cout << "Buku apa yang anda pilih ? " << endl;
            cout << "1." << judulkomik1 << "-Harga Rp." << HBKOM1 <<endl;
            cout << "2." << judulkomik2 << "-Harga Rp." << HBKOM2 <<endl;
            cout << "3." << judulkomik3 << "-Harga Rp." << HBKOM3 <<endl;
            cout << "4." << judulkomik4 << "-Harga Rp." << HBKOM4 <<endl;
            cout << "5." << judulkomik5 << "-Harga Rp." << HBKOM5 <<endl;
            cout << "masukan nomer buku yang ingin kamu beli !!! " << endl;
            cin >> piljudul;
        } else if ((Kodebuku == 'E') || (Kodebuku == 'e'))
        {
            cout << "========================================================" << endl;
            cout << "silahkan pilih judul/type buku yang ingin anda beli !!! " << endl;
            cout << "========================================================" << endl;
            cout << endl;
            cout << "Buku apa yang anda pilih ? " << endl;
            cout << "1." << judulkamus1 << "-Harga Rp." << HBKAM1 <<endl;
            cout << "2." << judulkamus2 << "-Harga Rp." << HBKAM2 <<endl;
            cout << "3." << judulkamus3 << "-Harga Rp." << HBKAM3 <<endl;
            cout << "4." << judulkamus4 << "-Harga Rp." << HBKAM4 <<endl;
            cout << "5." << judulkamus5 << "-Harga Rp." << HBKAM5 <<endl;
            cout << "masukan nomer buku yang ingin kamu beli !!! " << endl;
            cin >> piljudul;
        } else if ((Kodebuku == 'F') || (Kodebuku == 'f'))
        {
            cout << "========================================================" << endl;
            cout << "silahkan pilih judul/type buku yang ingin anda beli !!! " << endl;
            cout << "========================================================" << endl;
            cout << endl;
            cout << "Buku apa yang anda pilih ? " << endl;
            cout << "1." << judulensiklopedia1 << "-Harga Rp." << HBE1 <<endl;
            cout << "2." << judulensiklopedia2 << "-Harga Rp." << HBE2 <<endl;
            cout << "3." << judulensiklopedia3 << "-Harga Rp." << HBE3 <<endl;
            cout << "4." << judulensiklopedia4 << "-Harga Rp." << HBE4 <<endl;
            cout << "5." << judulensiklopedia5 << "-Harga Rp." << HBE5 <<endl;
            cout << "masukan nomer buku yang ingin kamu beli !!! " << endl;
            cin >> piljudul;
        }
        else
        {
            cout << "MAAF BUKU YANG ANDA CARI TIDAK DITEMUKAN" << endl;
        }
        
        } while ((piljudul < 1) || (piljudul > 5));
        
        pengantar = 0;
        if (Kodebuku == 'A' || Kodebuku == 'a') pengantar = 1;
        else if (Kodebuku == 'B' || Kodebuku == 'b') pengantar = 2;
        else if (Kodebuku == 'C' || Kodebuku == 'c') pengantar = 3;
        else if (Kodebuku == 'D' || Kodebuku == 'd') pengantar = 4;
        else if (Kodebuku == 'E' || Kodebuku == 'e') pengantar = 5;
        else if (Kodebuku == 'F' || Kodebuku == 'f') pengantar = 6;

        if (pengantar == 1)
        {
            if (piljudul == 1)
            {
                cout << "Buku yang kamu pilih adalah : " << judulcatatan1 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBC1 << endl;
                total_diskon = HBC1 * hargadiskonA;
                total_fixdiskonA1 = HBC1 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 2% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonA1 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonA1;
                total_semua_buku ++;
                stokA--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 2)
            {
                cout << "Buku yang kamu pilih adalah : " << judulcatatan2 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBC2 << endl;
                total_diskon = HBC2 * hargadiskonA;
                total_fixdiskonA2 = HBC2 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 2% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonA2 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonA2;
                total_semua_buku ++;
                stokA--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 3)
            {
                cout << "Buku yang kamu pilih adalah : " << judulcatatan3 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBC3 << endl;
                total_diskon = HBC3 * hargadiskonA;
                total_fixdiskonA3 = HBC3 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 2% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonA3 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonA3;
                total_semua_buku ++;
                stokA--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 4)
            {
                cout << "Buku yang kamu pilih adalah : " << judulcatatan4 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBC4 << endl;
                total_diskon = HBC4 * hargadiskonA;
                total_fixdiskonA4 = HBC4 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 2% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonA4 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonA4;
                total_semua_buku ++;
                stokA--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 5)
            {
                cout << "Buku yang kamu pilih adalah : " << judulcatatan5 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBC5 << endl;
                total_diskon = HBC5 * hargadiskonA;
                total_fixdiskonA5 = HBC5 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 2% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonA5 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonA5;
                total_semua_buku ++;
                stokA--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            }
            else
            {
                cout << "Buku yang kamu cari tidak ada " << endl;
            }
        } else if (pengantar == 2)
        {
            if (piljudul == 1)
            {
                cout << "Buku yang kamu pilih adalah : " << judulnovel1 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBN1 << endl;
                total_diskon = HBN1 * hargadiskonB;
                total_fixdiskonB1 = HBN1 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 10% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonB1 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonB1;
                total_semua_buku ++;
                stokB--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 2)
            {
                cout << "Buku yang kamu pilih adalah : " << judulnovel2 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBN2 << endl;
                total_diskon = HBN2 * hargadiskonB;
                total_fixdiskonB2 = HBN2 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 10% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonB2 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonB2;
                total_semua_buku ++;
                stokB--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            }else if (piljudul == 3)
            {
                cout << "Buku yang kamu pilih adalah : " << judulnovel3 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBN3 << endl;
                total_diskon = HBN3 * hargadiskonB;
                total_fixdiskonB3 = HBN3 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 10% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonB3 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonB3;
                total_semua_buku ++;
                stokB--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 4)
            {
                cout << "Buku yang kamu pilih adalah : " << judulnovel4 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBN4 << endl;
                total_diskon = HBN4 * hargadiskonB;
                total_fixdiskonB4 = HBN4 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 10% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonB4 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonB4;
                total_semua_buku ++;
                stokB--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 5)
            {
                cout << "Buku yang kamu pilih adalah : " << judulnovel5 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBN5 << endl;
                total_diskon = HBN5 * hargadiskonB;
                total_fixdiskonB5 = HBN5 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 10% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonB5 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonB5;
                total_semua_buku ++;
                stokB--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            }
            else
            {
                cout << "Buku yang kamu cari tidak ada " << endl;
            }
        } else if (pengantar == 3)
        {
            if (piljudul == 1)
            {
                cout << "Buku yang kamu pilih adalah : " << judulpelajaran1 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBP1 << endl;
                total_diskon = HBP1 * hargadiskonC;
                total_fixdiskonC1 = HBP1 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 20% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonC1 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonC1;
                total_semua_buku ++;
                stokC--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 2)
            {
                cout << "Buku yang kamu pilih adalah : " << judulpelajaran2 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBP2 << endl;
                total_diskon = HBP2 * hargadiskonC;
                total_fixdiskonC2 = HBP2 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 20% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonC2 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonC2;
                total_semua_buku ++;
                stokC--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            }else if (piljudul == 3)
            {
                cout << "Buku yang kamu pilih adalah : " << judulpelajaran3 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBP3 << endl;
                total_diskon = HBP3 * hargadiskonC;
                total_fixdiskonC3 = HBP3 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 20% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonC3 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonC3;
                total_semua_buku ++;
                stokC--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 4)
            {
                cout << "Buku yang kamu pilih adalah : " << judulpelajaran4 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBP4 << endl;
                total_diskon = HBP4 * hargadiskonC;
                total_fixdiskonC4 = HBP4 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 20% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonC4 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonC4;
                total_semua_buku ++;
                stokC--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 5)
            {
                cout << "Buku yang kamu pilih adalah : " << judulpelajaran5 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBP5 << endl;
                total_diskon = HBP5 * hargadiskonC;
                total_fixdiskonC5 = HBP5 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 20% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonC5 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonC5;
                total_semua_buku ++;
                stokC--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            }
            else
            {
                cout << "Buku yang kamu cari tidak ada " << endl;
            }
        }else if (pengantar == 4)
        {
            if (piljudul == 1)
            {
                cout << "Buku yang kamu pilih adalah : " << judulkomik1 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBKOM1 << endl;
                total_diskon = HBKOM1 * hargadiskonD;
                total_fixdiskonD1 = HBKOM1 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 30% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonD1 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonD1;
                total_semua_buku ++;
                stokD--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 2)
            {
                cout << "Buku yang kamu pilih adalah : " << judulkomik2 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBKOM2 << endl;
                total_diskon = HBKOM2 * hargadiskonD;
                total_fixdiskonD2 = HBKOM2 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 30% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonD2 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonD2;
                total_semua_buku ++;
                stokD--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            }else if (piljudul == 3)
            {
                cout << "Buku yang kamu pilih adalah : " << judulkomik3 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBKOM3 << endl;
                total_diskon = HBKOM3 * hargadiskonD;
                total_fixdiskonD3 = HBKOM3 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 30% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonD3 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonD3;
                total_semua_buku ++;
                stokD--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 4)
            {
                cout << "Buku yang kamu pilih adalah : " << judulkomik4 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBKOM4 << endl;
                total_diskon = HBKOM4 * hargadiskonD;
                total_fixdiskonD4 = HBKOM4 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 30% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonD4 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonD4;
                total_semua_buku ++;
                stokD--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 5)
            {
                cout << "Buku yang kamu pilih adalah : " << judulkomik5 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBKOM5 << endl;
                total_diskon = HBKOM5 * hargadiskonD;
                total_fixdiskonD5 = HBKOM5 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 30% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonD5 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonD5;
                total_semua_buku ++;
                stokD--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            }
            else
            {
                cout << "Buku yang kamu cari tidak ada " << endl;
            }
        } else if (pengantar == 5)
        {
            if (piljudul == 1)
            {
                cout << "Buku yang kamu pilih adalah : " << judulkamus1 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBKAM1 << endl;
                total_diskon = HBKAM1 * hargadiskonE;
                total_fixdiskonE1 = HBKAM1 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 15% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonE1 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonE1;
                total_semua_buku ++;
                stokE--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 2)
            {
                cout << "Buku yang kamu pilih adalah : " << judulkamus2 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBKAM2 << endl;
                total_diskon = HBKAM2 * hargadiskonE;
                total_fixdiskonE2 = HBKAM2 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 15% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonE2 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonE2;
                total_semua_buku ++;
                stokE--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            }else if (piljudul == 3)
            {
                cout << "Buku yang kamu pilih adalah : " << judulkamus3 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBKAM3 << endl;
                total_diskon = HBKAM3 * hargadiskonE;
                total_fixdiskonE3 = HBKAM3 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 15% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonE3 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonE3;
                total_semua_buku ++;
                stokE--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 4)
            {
                cout << "Buku yang kamu pilih adalah : " << judulkamus4 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBKAM4 << endl;
                total_diskon = HBKAM4 * hargadiskonE;
                total_fixdiskonE4 = HBKAM4 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 15% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonE4 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonE4;
                total_semua_buku ++;
                stokE--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 5)
            {
                cout << "Buku yang kamu pilih adalah : " << judulkamus5 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBKAM5 << endl;
                total_diskon = HBKAM5 * hargadiskonE;
                total_fixdiskonE5 = HBKAM5 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 15% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonE5 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonE5;
                total_semua_buku ++;
                stokE--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            }
            else
            {
                cout << "Buku yang kamu cari tidak ada " << endl;
            }
        } else if (pengantar == 6)
        {
            if (piljudul == 1)
            {
                cout << "Buku yang kamu pilih adalah : " << judulensiklopedia1 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBE1 << endl;
                total_diskon = HBE1 * hargadiskonF;
                total_fixdiskonF1 = HBE1 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 25% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonF1 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonF1;
                total_semua_buku ++;
                stokF--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 2)
            {
                cout << "Buku yang kamu pilih adalah : " << judulensiklopedia2 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBE2 << endl;
                total_diskon = HBE2 * hargadiskonF;
                total_fixdiskonF2 = HBE2 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 25% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonF2 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonF2;
                total_semua_buku ++;
                stokF--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            }else if (piljudul == 3)
            {
                cout << "Buku yang kamu pilih adalah : " << judulensiklopedia3 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBE3 << endl;
                total_diskon = HBE3 * hargadiskonF;
                total_fixdiskonF3 = HBE3 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 25% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonF3 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonF3;
                total_semua_buku ++;
                stokF--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 4)
            {
                cout << "Buku yang kamu pilih adalah : " << judulensiklopedia4 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBE4 << endl;
                total_diskon = HBE4 * hargadiskonF;
                total_fixdiskonF4 = HBE4 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 25% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonF4 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonF4;
                total_semua_buku ++;
                stokF--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            } else if (piljudul == 5)
            {
                cout << "Buku yang kamu pilih adalah : " << judulensiklopedia5 << endl;
                cout << "Harga buku tersebut adalah Rp." << HBE5 << endl;
                total_diskon = HBE5 * hargadiskonF;
                total_fixdiskonF5 = HBE5 - total_diskon;
                cout << "Selamat Anda mendapatkan Diskon sebesar 25% " << endl; 
                cout << "Harga Buku menjadi Rp." << total_fixdiskonF5 << endl;
                total_semua_harga = total_semua_harga + total_fixdiskonF5;
                total_semua_buku ++;
                stokF--;
                cout << "Buku yang kamu pilih telah tercatat !!! " << endl;
            }
            else
            {
                cout << "Buku yang kamu cari tidak ada " << endl;
            }
        }
        cout << "\napakah kamu ingin membeli judul/type buku lainnya ? atau sudah selesai?" << endl;
        cout << "Jika anda ingin membeli lagi maka ketik (Y), jika tidak ketik (N) " << endl;
        cin >> pilihan;
        
    } while ((pilihan == 'y') || (pilihan == 'Y'));
    
    do
    {
    cout << "-----------------TIP---------------" << endl;
    cout << "Apakah anda ingin memberikan uang tip kepada kami?" << endl;
    cout << endl;

    cout << "===============================================" << endl;
    cout << "Pilihlah nominal uang tip yang anda inginkan : " << endl;
    cout << "===============================================" << endl;
    cout << "1) Rp." << tip1 << endl;
    cout << "2) Rp." << tip2 << endl;
    cout << "3) Rp." << tip3 << endl;
    cout << "4) Rp." << tip4 << endl;
    cout << "5) Rp." << tip5 << endl;
    cout << "===============================================" << endl;
    cin >> uangtip;

    if (uangtip == 1)
    {
        cout << "Anda tidak ingin memberikan uang tip" << endl;
        total_tip = tipp1;
    } else if (uangtip == 2)
    {
        cout << "Anda ingin memberikan uang tip sebesar Rp.1000" << endl;
        total_tip = tipp2;
    } else if (uangtip == 3)
    {
        cout << "Anda ingin memberikan uang tip sebesar Rp.2000" << endl;
        total_tip = tipp3;
    } else if (uangtip == 4)
    {
        cout << "Anda ingin memberikan uang tip sebesar Rp.5000" << endl;
        total_tip = tipp4;
    } else if (uangtip == 5)
    {
        cout << "Anda ingin memberikan uang tip sebesar Rp.10000" << endl;
        total_tip = tipp5;
    }
    else
    {
        cout << "Inputan yang anda masukkan salah" << endl;
        cout << "\n";
    }
    } while ((uangtip < 1) || (uangtip > 5));
    
    do
    {
    cout << "Apakah Anda ingin Menggunakan Kantong Plastik atau Tas Belanja Khusus ? " << endl;
    cout << "jika iya ketik (Y) dan jika tidak ketik (n) " << endl;
    cin >> tas;
    } while ((tas != 'y') && (tas != 'Y') && (tas != 'n') && (tas != 'N'));
    if (tas == 'y' || tas == 'Y')
    {
        do
        {
        cout << "Mau pakai Kantong Plastik atau Tas Belanja Khusus?" << endl;
        cout << "ketik (K) untuk Kantong Plastik atau (T) untuk Tas Belanja Khusus" << endl;
        cin >> tass;
        } while ((tass != 'k') && (tass != 'K') && (tass != 't') && (tass != 'T'));
        if (tass == 'k' || tass == 'K')
        {
            tas_belanja = 2000;
        }
        else
        {
            tas_belanja = 5000;
        }
    }
    else
    {
        tas_belanja = 0;
        cout << "Anda tidak menggunakan Kantong Plastik maupun Tas Belanja Khusus" << endl;
    }

    
    do
    {
    cout << "================================" << endl;
    cout << "   Masukan metode pengiriman :  " << endl;
    cout << "================================" << endl;
    cout << "A) JNT  -Rp." << JNT << endl;
    cout << "B) JNE  -Rp." << JNE << endl;
    cout << "C) SICEPAT  -Rp." << SiCEPAT << endl;
    cout << "D) NINJA EXPRES  -Rp." << NINJA_Expres << endl;
    cout << "E) Pos Indonesia  -Rp." << Pos_Indonesia << endl;
    cout << "================================" << endl;
    cin >> pengiriman;
    } while ((pengiriman != 'a') && (pengiriman != 'A') && (pengiriman != 'b') && (pengiriman != 'B') && (pengiriman != 'c') && (pengiriman != 'C') && (pengiriman != 'd') && (pengiriman != 'D') && (pengiriman != 'e') && (pengiriman != 'E'));
    if ( pengiriman == 'A' || pengiriman == 'a')
    {
        cout << "anda terkena biyaya pengiriman sebesar Rp." << JNT << endl;
        total_pengiriman = JNT;
    } else if ( pengiriman == 'B' || pengiriman == 'b')
    {
        cout << "anda terkena biyaya pengiriman sebesar Rp." << JNE << endl;
        total_pengiriman = JNE;
    } else if ( pengiriman == 'C' || pengiriman == 'c')
    {
        cout << "anda terkena biyaya pengiriman sebesar Rp." << SiCEPAT << endl;
        total_pengiriman = SiCEPAT;
    } else if ( pengiriman == 'D' || pengiriman == 'd')
    {
        cout << "anda terkena biyaya pengiriman sebesar Rp." << NINJA_Expres << endl;
        total_pengiriman = NINJA_Expres;
    } else if ( pengiriman == 'E' || pengiriman == 'e')
    {
        cout << "anda terkena biyaya pengiriman sebesar Rp." << Pos_Indonesia << endl;
        total_pengiriman = Pos_Indonesia;
    }
    else
    {
        cout << "KODE YANG ANDA MASUKAN TIDAK TERSEDIA !!! " << endl;
    }
    
    cout << "-----------------KERANJANG BELANJA ANDA---------------" << endl;
    cout << "Total buku yang dipilih: " << total_semua_buku << endl;
    cout << "Total Harga yang harus anda bayar: Rp." << total_semua_harga + tas_belanja + total_pengiriman + total_tip << endl;
    cout << endl;

    do
    {
    cout << "============================" << endl;
    cout << "Masukan metode pembayaran : " << endl;
    cout << "============================" << endl;
    cout << "1. " << transfer << endl;
    cout << "2. " << QRIS << endl;
    cout << "3. " << Ewallet << endl;
    cout << "4. " << COD << endl;
    cout << "5. " << minimarket << endl;
    cout << "============================" << endl;
    cin >> metode;
    } while ((metode < 1) || (metode > 5));
    if (metode == 1)
    {
        do
        {
        cout << "==========================================" << endl;
        cout << "1. " << bank1 << endl;
        cout << "2. " << bank2 << endl;
        cout << "3. " << bank3 << endl;
        cout << "4. " << bank4 << endl;
        cout << "5. " << bank5 << endl;
        cout << "==========================================" << endl;
        cout << "PILIH BANK YANG INGIN ANDA GUNAKAN " << endl;
        cin >> milihbank;
        } while ((milihbank < 1) || (milihbank >5));
        if (milihbank == 1)
        {
            cout << "Anda telah memilih bank BCA" << endl;
            cout << "Berikut nomor rekening yang ditransfer:" << endl;
            cout << "1254 5678 9101" << endl;
            cout << endl;
            cout << "Barang anda akan kami proses 1 hari setelah pembayaran." << endl;
        } else if (milihbank == 2)
        {
            cout << "Anda telah memilih bank BRI" << endl;
            cout << "Berikut nomor rekening yang ditransfer:" << endl;
            cout << "9876 5432 1098" << endl;
            cout << endl;
            cout << "Barang anda akan kami proses 1 hari setelah pembayaran." << endl;
        } else if (milihbank == 3)
        {
            cout << "Anda telah memilih bank BNI" << endl;
            cout << "Berikut nomor rekening yang ditransfer:" << endl;
            cout << "1122 3344 5566" << endl;
            cout << endl;
            cout << "Barang anda akan kami proses 1 hari setelah pembayaran." << endl;
        } else if (milihbank == 4)
        {
            cout << "Anda telah memilih bank Mandiri" << endl;
            cout << "Berikut nomor rekening yang ditransfer:" << endl;
            cout << "3344 5566 7788" << endl;
            cout << endl;
            cout << "Barang anda akan kami proses 1 hari setelah pembayaran." << endl;
        } else if (milihbank == 5)
        {
            cout << "Anda telah memilih bank Danamon" << endl;
            cout << "Berikut nomor rekening yang ditransfer:" << endl;
            cout << "6677 8899 0011" << endl;
            cout << endl;
            cout << "Barang anda akan kami proses 1 hari setelah pembayaran." << endl;
        }
        else
        {
            cout << "Input yang anda masukkan salah." << endl;
        }
            cout << "Terimakasih Telah Belanja di toko kami " << endl;
    } else if (metode == 2)
    {
        do
        {
        cout << "QRIS apa yang ingin anda gunakan " << endl;
        cout << endl;
        cout << "=====================================" << endl;
        cout << "1. OVO" << endl;
        cout << "2. Go-Pay" << endl;
        cout << "3. DANA" << endl;
        cout << "4. ShoopePay" << endl;
        cout << "5. ATM" << endl; 
        cout << "=====================================" << endl;
        cin >> milih_Qris;
        } while ((milih_Qris < 1) || (milih_Qris > 5));
        if (milih_Qris == 1)
        {
            cout << "Anda terkena Biaya Admin Rp." << AdminQris << endl;
            cout << "Anda terkena biaya sebesar Rp." << total_semua_harga + tas_belanja + total_pengiriman + AdminQris + total_tip << endl;
            cout << "Anda telah berhasil melakukan transaksi pembayaran" << endl;
            cout << "Terimaksih telah belanja ditoko kami" << endl;    
         } else if (milih_Qris == 2)
         {
            cout << "Anda terkena Biaya Admin Rp." << AdminQris << endl;
            cout << "Anda terkena biaya sebesar Rp." << total_semua_harga + tas_belanja + total_pengiriman + AdminQris + total_tip << endl;
            cout << "Anda telah berhasil melakukan transaksi pembayaran" << endl;
            cout << "Terimaksih telah belanja ditoko kami" << endl; 
         } else if (milih_Qris == 3)
         {
            cout << "Anda terkena Biaya Admin Rp." << AdminQris << endl;
            cout << "Anda terkena biaya sebesar Rp." << total_semua_harga + tas_belanja + total_pengiriman + AdminQris + total_tip << endl;
            cout << "Anda telah berhasil melakukan transaksi pembayaran" << endl;
            cout << "Terimaksih telah belanja ditoko kami" << endl; 
         } else if (milih_Qris == 4)
         {
            cout << "Anda terkena Biaya Admin Rp." << AdminQris << endl;
            cout << "Anda terkena biaya sebesar Rp." << total_semua_harga + tas_belanja + total_pengiriman + AdminQris + total_tip << endl;
            cout << "Anda telah berhasil melakukan transaksi pembayaran" << endl;
            cout << "Terimaksih telah belanja ditoko kami" << endl; 
         } else if (milih_Qris == 5)
         {
            do
            {
            cout << "=======================================" << endl;
            cout << "silahkan Pilih ATM yang tersedia : " << endl;
            cout << "1. BRI" << endl;
            cout << "2. BCA" << endl;
            cout << "3. BNI" << endl;
            cout << "4. Danamon" << endl;
            cout << "5. Mandiri" << endl;
            cout << "=======================================" << endl;
            cin >> Qris_atm;
            } while ((Qris_atm < 1) || (Qris_atm > 5));
            if (Qris_atm == 1)
            {
                cout << "Anda telah mengggunakan pembayaran melalui via Qris BRI" << endl;
                cout << "Anda terkena biaya admin sebesar Rp." << qris_bri << endl;
                cout << "Total yang harus anda bayar adalah -Rp." << total_semua_harga + tas_belanja + total_pengiriman + qris_bri + total_tip << endl;
                cout << "Anda telah berhasil melakukan transaksi pembayaran" << endl;
                cout << "Terimaksih telah belanja ditoko kami" << endl; 
            } else if (Qris_atm == 2)
            {
                cout << "Anda telah mengggunakan pembayaran melalui via Qris BCA" << endl;
                cout << "Anda terkena biaya admin sebesar Rp." << qris_bca << endl;
                cout << "Total yang harus anda bayar adalah -Rp." << total_semua_harga + tas_belanja + total_pengiriman + qris_bca + total_tip << endl;
                cout << "Anda telah berhasil melakukan transaksi pembayaran" << endl;
                cout << "Terimaksih telah belanja ditoko kami" << endl; 
            } else if (Qris_atm == 3)
            {
                cout << "Anda telah mengggunakan pembayaran melalui via Qris BNI" << endl;
                cout << "Anda terkena biaya admin sebesar Rp." << qris_mandi << endl;
                cout << "Total yang harus anda bayar adalah -Rp." << total_semua_harga + tas_belanja + total_pengiriman + qris_bni + total_tip << endl;
                cout << "Anda telah berhasil melakukan transaksi pembayaran" << endl;
                cout << "Terimaksih telah belanja ditoko kami" << endl; 
            } else if (Qris_atm == 4)
            {
                cout << "Anda telah mengggunakan pembayaran melalui via Qris Danamon" << endl;
                cout << "Anda terkena biaya admin sebesar Rp." << qris_mandi << endl;
                cout << "Total yang harus anda bayar adalah -Rp." << total_semua_harga + tas_belanja + total_pengiriman + qris_dana + total_tip << endl;
                cout << "Anda telah berhasil melakukan transaksi pembayaran" << endl;
                cout << "Terimaksih telah belanja ditoko kami" << endl;
            } else if (Qris_atm == 5)
            {
                cout << "Anda telah mengggunakan pembayaran melalui via Qris Mandiri" << endl;
                cout << "Anda terkena biaya admin sebesar Rp." << qris_mandi << endl;
                cout << "Total yang harus anda bayar adalah -Rp." << total_semua_harga + tas_belanja + total_pengiriman + qris_mandi + total_tip << endl;
                cout << "Anda telah berhasil melakukan transaksi pembayaran" << endl;
                cout << "Terimaksih telah belanja ditoko kami" << endl;
            }
            else
            {
                cout << "Input yang anda masukan invalid !!! " << endl;
            }
         }
    } else if (metode == 3)
    {
        do
        {
        cout << "=====================================" << endl;
        cout << "Pilih E-Wallet yang anda gunakan !!!" << endl;
        cout << "1. OVO" << endl;
        cout << "2. Go-Pay" << endl;
        cout << "3. DANA" << endl;
        cout << "4. ShoopePay" << endl;
        cout << "5. LinkAja" << endl;
        cout << "=====================================" << endl;
        cin >> milih_wallet;
        } while ((milih_wallet < 1) || (milih_wallet > 5));
        if (milih_wallet == 1)
        {
            cout << "====== VERIFIKASI AKUN OVO ANDA =====" << endl;
            cout << "Maukan nomer tlp akun anda (bisanya 10 digit)" <<endl;
            cin >> nomer_tlp;
            while (nomer_tlp < 0200000000 || nomer_tlp > 1000000000)
            {
                cout << "nomer tlp yang anda masukan tidak diteemukan !!! " << endl;
                cout << "silahkan Masukan nomer tlp anda (bisanya 10 digit)" << endl;
                cin >> nomer_tlp;
            }
            cout << "Akun anda telah berhasil terhubung " << endl;
            cout << "Masukan Pin Akun OVO anda" << endl;
            cin >> pin;
            while (pin < 100000 || pin > 999999 )
            {
                cout << "Pin yang anda masukan salah !!! " << endl;
                cout << "silahkan masukan pin anda sekali lagi " << endl;
                cin >> pin;
            }
            cout << "Pembayaran berhasil !!! " << endl;
            cout << "Terimakasih telah Berbelanja di Toko Kami " << endl;
        } else if (milih_wallet == 2)
        {
            cout << "====== VERIFIKASI AKUN Go-Pay ANDA =====" << endl;
            cout << "Maukan nomer tlp akun anda (bisanya 10 digit)" <<endl;
            cin >> nomer_tlp;
            while (nomer_tlp < 0200000000 || nomer_tlp > 1000000000)
            {
                cout << "nomer tlp yang anda masukan tidak diteemukan !!! " << endl;
                cout << "silahkan Masukan nomer tlp anda (bisanya 10 digit)" << endl;
                cin >> nomer_tlp;
            }
            cout << "Akun anda telah berhasil terhubung " << endl;
            cout << "Masukan Pin Akun Go-pay anda" << endl;
            cin >> pin;
            while (pin < 100000 || pin > 999999 )
            {
                cout << "Pin yang anda masukan salah !!! " << endl;
                cout << "silahkan masukan pin anda sekali lagi " << endl;
                cin >> pin;
            }
            cout << "Pembayaran berhasil !!! " << endl;
            cout << "Terimakasih telah Berbelanja di Toko Kami " << endl;
        } else if (milih_wallet == 3)
        {
            cout << "====== VERIFIKASI AKUN DANA ANDA =====" << endl;
            cout << "Maukan nomer tlp akun anda (bisanya 10 digit)" <<endl;
            cin >> nomer_tlp;
            while (nomer_tlp < 0200000000 || nomer_tlp > 1000000000)
            {
                cout << "nomer tlp yang anda masukan tidak diteemukan !!! " << endl;
                cout << "silahkan Masukan nomer tlp anda (bisanya 10 digit)" << endl;
                cin >> nomer_tlp;
            }
            cout << "Akun anda telah berhasil terhubung " << endl;
            cout << "Masukan Pin Akun DANA anda" << endl;
            cin >> pin;
            while (pin < 100000 || pin > 999999 )
            {
                cout << "Pin yang anda masukan salah !!! " << endl;
                cout << "silahkan masukan pin anda sekali lagi " << endl;
                cin >> pin;
            }
            cout << "Pembayaran berhasil !!! " << endl;
            cout << "Terimakasih telah Berbelanja di Toko Kami " << endl;
        } else if (milih_wallet == 4)
        {
            cout << "====== VERIFIKASI AKUN Shoope-Pay ANDA =====" << endl;
            cout << "Masukan nomer tlp akun anda (bisanya 10 digit)" <<endl;
            cin >> nomer_tlp;
            while (nomer_tlp < 0200000000 || nomer_tlp > 1000000000)
            {
                cout << "nomer tlp yang anda masukan tidak diteemukan !!! " << endl;
                cout << "silahkan Masukan nomer tlp anda (bisanya 10 digit)" << endl;
                cin >> nomer_tlp;
            }
            cout << "Akun anda telah berhasil terhubung " << endl;
            cout << "Masukan Pin Akun Shoope-Pay anda" << endl;
            cin >> pin;
            while (pin < 100000 || pin > 999999 )
            {
                cout << "Pin yang anda masukan salah !!! " << endl;
                cout << "silahkan masukan pin anda sekali lagi " << endl;
                cin >> pin;
            }
            cout << "Pembayaran berhasil !!! " << endl;
            cout << "Terimakasih telah Berbelanja di Toko Kami " << endl;
        } else if (milih_wallet == 5)
        {
            cout << "====== VERIFIKASI AKUN LinkAja ANDA =====" << endl;
            cout << "Maukan nomer tlp akun anda (bisanya 10 digit)" <<endl;
            cin >> nomer_tlp;
            while (nomer_tlp < 0200000000 || nomer_tlp > 1000000000)
            {
                cout << "nomer tlp yang anda masukan tidak diteemukan !!! " << endl;
                cout << "silahkan Masukan nomer tlp anda (bisanya 10 digit)" << endl;
                cin >> nomer_tlp;
            }
            cout << "Akun anda telah berhasil terhubung " << endl;
            cout << "Masukan Pin Akun LinkAja anda" << endl;
            cin >> pin;
            while (pin < 100000 || pin > 999999 )
            {
                cout << "Pin yang anda masukan salah !!! " << endl;
                cout << "silahkan masukan pin anda sekali lagi " << endl;
                cin >> pin;
            }
            cout << "Pembayaran berhasil !!! " << endl;
            cout << "Terimakasih telah Berbelanja di Toko Kami " << endl;
        }
        else
        {
            cout << "input yang anda masukan salah !!! " << endl;
        }
    } else if (metode == 4)
    {
        cout << "Pemabayaran terkonfirmasi !!!  (COD) " << endl;
        cout << "Silahkan disiapkan untuk pembayarannya saat kurir kami sampai di lokasi" << endl;
        cout << "Terimakasih telah Berbelanja di Toko Kami " << endl;
    } else if ( metode == 5)
    {
        cout << "Silahkan Anda mengunjungi minimarket terdekat !!! " << endl;
        cout << "Tunjukan nomer Pembayaran dibawah ini kepada kasir Minimarket untuk melanjutkan transaksi " << endl;
        cout << "11122 33444 888555 " << endl;
        cout << "Barang akan kami kirim H+1 setelah pembayaran selesai " << endl;
        cout << "Terimakasih telah Berbelanja di Toko Kami " << endl;
    }
    else
    {
        cout << "input yang anda masukan salah !!! " << endl;
    }
    return 0;
}