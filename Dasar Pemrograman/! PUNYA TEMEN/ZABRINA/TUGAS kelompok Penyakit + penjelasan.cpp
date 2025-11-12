//judul: proyek daspro HZR rumah sakit
//disini menggunakan metode array, adt, prosedure, fungsi
//program ini bertujuan untuk mengetahui daftar penyakit apa saja yang dimiliki
//dan tiap biaya per penyakitnya, serta totalnya
#include <iostream>
#include <string>
using namespace std;
//kamus
struct Hasil_Diagnosis
{
    string penyakit[22];
    double totalBiayaKonsultasi;
};
string DaftarPenyakit[22] =
{
    "Demam", "Tonsilofaringitis", "Bronkitis", "Hepatitis", "Infeksi Saluran Pencernaan",
    "Vertigo", "Influenza", "Demam Tifoid", "Pneumonia", "Kolitis", "Asam Lambung", "Gastritis",
    "Lemah Jantung", "Rhinovirus", "Peradangan Organ", "Darah Rendah", "Gejala Kecemasan",
    "Asma", "Amandel", "Migren", "Malaria", "Maag"
};
int biaya_penyakit[22] =
{
    100000, 150000, 200000, 250000, 180000, 120000, 90000, 140000, 220000, 160000,
    110000, 130000, 300000, 80000, 170000, 70000, 90000, 200000, 100000, 150000,
    180000, 90000
};
int i, Hasil_Perhintungan, x, choice;//variabel i tipenya integer dan seterusnya
char repeat;//variabel repeat tipenya char(acter)
void TampilanMenu();//buat manggil tampilan menu yang paling bawah atau prosedur
void DiagnosisPenyakit(string input, Hasil_Diagnosis &result);// digunakan untuk mendiagnosis langsung ke diagnosis result untuk menyimpan hasil diagnosis itu sendiri
void TampilanHasilDiagnosis(Hasil_Diagnosis &result);
int TotalPerhitunganBiaya(string input); //buat fungsi kamusnya
//diskripsi
int main() //masuk  ke main
{
    repeat;// buat si looping sm inputannya
    Hasil_Diagnosis result;//buat para void yang berhubungan dengan result

    do//looping
    {
        choice;
        cout << "\n=== SISTEM DIAGNOSA PENYAKIT ===" << endl;
        cout << "1. Tampilkan Daftar Penyakit" << endl;
        cout << "2. Diagnosa Penyakit" << endl;
        cout << "3. Hitung Total Biaya (tanpa detail)" << endl;
        cout << "4. Keluar" << endl;
        do
        {
        cout << "Pilih menu (1-4): ";
        cin >> choice; //input dimasukkan kechoice
        cin.ignore();//biar ga ngebug
        } while (choice < 1 || choice > 4);

        if (choice == 1)
        {
	        TampilanMenu();
        } else if (choice == 2)
        {
	        cout << "\nMasukkan kode penyakit (pisahkan dengan spasi, contoh: A B C): ";
            string input;
            getline(cin, input); //buat nambah spasi,ben nak ada spasi lebih dr satu bisa kebaca
            DiagnosisPenyakit(input, result);
            TampilanHasilDiagnosis(result); //buat manggil tampilan hasil diagnosis yang ada dibawah
        } else if (choice == 3)
        {
            cout << "\nMasukkan kode penyakit (pisahkan dengan spasi, contoh: A B C): ";
            string input;
            getline(cin, input);
            double totalBiaya = TotalPerhitunganBiaya(input);
            cout << "Total Biaya Konsultasi: Rp " << totalBiaya << endl;
        } else if (choice == 4)
        {
	        cout << "\nTerima kasih telah mengunjungi rumah sakit kami!" << endl;
            return 0;
        }
        do
        {
        cout << "\nApakah Anda ingin kembali ke menu utama? (Y/N): ";
        cin >> repeat;
        } while (repeat != 'Y' && repeat != 'y' && repeat != 'N' && repeat != 'n');
    } while (repeat == 'Y' || repeat == 'y');

    cout << "\nTerima kasih telah menggunakan program ini!" << endl;
    return 0;
}

//prosedure untuk menampilkan menu penyakit
void TampilanMenu()
{
    cout << "\n=== DAFTAR PENYAKIT DAN BIAYA ===" << endl;
    i = 0; //bikin data si i menjadi 0 (i itu variable) dlm array angka 0 itu dimulai dr pertama
    while (i < 22) //looping saat kondisi i kurang dari 22 maka
    {
        cout << char('A' + i) << " = " << DaftarPenyakit[i] //inputan awal kan A trs ditambah i,i kan dimulai dr 0 yg dimana artinya pertama,terus nama penyakitnya itu disesuaikan dgn urutan si i nya.
             << " (Rp " << biaya_penyakit[i] << ")" << endl; //harga brp siRP sesuai dgn harga penyakit i
        i++;// i nya itu bertambah satu persatu
    }
}

//prosedure untuk mendiagnosis penyakit berdasarkan input
void DiagnosisPenyakit(string input, Hasil_Diagnosis &result) //prosedur si diagnoseDiseases(input, result), dipanggil sama baris 57
{
    //dimulai dari 0
    result.totalBiayaKonsultasi = 0;
    Hasil_Perhintungan = 0;
    i = 0;

    while (i < input.size()) //Selama i kurang dari ukuran input, maka
        {
        //variabel choice bertipe char(acter), mengambil karakter yang ada di posisi i dalam string input, terus disimpen di variabel choice
        char choice = input[i];
       //jika choicenya adalah spasi atau tab (tab itu yg /t), maka loop tetap lanjut ke choice berikutnya
        if (choice == ' ' || choice == '\t')
        {
            i++;
            continue;
        }
        //jika choicenya itu huruf, ubah ke kapital (toupper(choice)), terus hitung index penyakit (x) berdasarkan huruf tersebut ('A')
        if ((choice >= 'A' && choice <= 'Z') || (choice >= 'a' && choice <= 'z'))
        {
            choice = toupper(choice);//touper untuk mengubah huruf kecil ke huruf besar
            x = choice - 'A';
            //jika index penyakitnya benar (valid) diantara 0 hingga 21, maka simpan nama penyakit dan ditambahi biaya konsultasinya ke total biaya konsultasi
            if (x >= 0 && x < 22)
            {
                result.penyakit[Hasil_Perhintungan] = DaftarPenyakit[x];
                result.totalBiayaKonsultasi += biaya_penyakit[x];
                Hasil_Perhintungan++;
            } //pilihan pada choice tidak valid (tidak benar)
            else
            {
                cout << "\nPilihan " << choice << " tidak valid!" << endl;
            }
        } //input karakter pada choice tidak valid (tidak benar), diteruskan ke karakter selanjutnya di dalam inputnya
        else
        {
            cout << "\nKarakter input " << choice << " tidak valid!" << endl;
        }
        i++;
    }
}

//prosedure untuk menampilkan hasil diagnosa
void TampilanHasilDiagnosis(Hasil_Diagnosis &result)
{
    cout << "\nHasil Diagnosa Anda:" << endl;

    i = 0;
    while (i < Hasil_Perhintungan)
    {
        cout << "- Penyakit: " << result.penyakit[i] << endl;
        i++;
    }

    cout << "\nTotal Biaya Konsultasi: Rp " << result.totalBiayaKonsultasi << endl;
}

//fungsi untuk menghitung total biaya konsultasi
int TotalPerhitunganBiaya(string input)
{
    int totalbiaya = 0;
    i = 0;

    while (i < input.size())//Selama i kurang dari ukuran input, maka
        {
        //variabel choice bertipe char(acter), mengambil karakter yang ada di posisi i dalam string input, terus disimpen di variabel choice
        char choice = input[i];
        //jika choicenya adalah spasi atau tab (tab itu yg /t), maka loop tetap lanjut ke choice berikutnya
        if (choice == ' ' || choice == '\t')
        {
            i++;
            continue;
        }
        //jika choicenya itu huruf, ubah ke kapital (toupper(choice)), terus hitung index penyakit (x) berdasarkan huruf tersebut ('A')
        if ((choice >= 'A' && choice <= 'Z') || (choice >= 'a' && choice <= 'z'))
        {
            choice = toupper(choice);//touper untuk mengubah huruf kecil ke huruf besar
            x = choice - 'A';
            //jika index penyakitnya benar (valid) diantara 0 hingga 21, maka simpan nama penyakit dan ditambahi biaya konsultasinya ke total biaya konsultasi
            if (x >= 0 && x < 22) {
                totalbiaya += biaya_penyakit[x];
            }
            else
            {
                cout << "\nPilihan " << choice << " tidak valid!" << endl;
            }
        }
        else
        {
            cout << "\nKarakter input " << choice << " tidak valid!" << endl;
        }
        i++;
    }

    return totalbiaya; //dikembalikan ke total biaya
}
