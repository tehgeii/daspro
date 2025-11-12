//judul: TUGAS KELOMPOK penyakit.
#include <iostream>
#include <string>
using namespace std;
//kamus
struct DiagnosisResult
{
    string diseases[22];
    double totalConsultationFee;
};
string diseaseList[22]
{
    "Demam", "Tonsilofaringitis", "Bronkitis", "Hepatitis", "Infeksi Saluran Pencernaan",
    "Vertigo", "Influenza", "Demam Tifoid", "Pneumonia", "Kolitis", "Asam Lambung", "Gastritis",
    "Lemah Jantung", "Rhinovirus", "Peradangan Organ", "Darah Rendah", "Gejala Kecemasan",
    "Asma", "Amandel", "Migren", "Malaria", "Maag"
};
double diseaseFees[22]
{
    100000, 150000, 200000, 250000, 180000, 120000, 90000, 140000, 220000, 160000,
    110000, 130000, 300000, 80000, 170000, 70000, 90000, 200000, 100000, 150000,
    180000, 90000
};
int i, resultCount, x;
void displayMenu();
void diagnoseDiseases(string input, DiagnosisResult &result);
void displayDiagnosisResult(DiagnosisResult &result);
//diskripsi
int main()
{
    char repeat;
    DiagnosisResult result;
    do
    {
        displayMenu();
        cout << "\nMasukkan kode penyakit (pisahkan dengan spasi, contoh: A B C): ";
        string input;
        getline(cin, input);
        diagnoseDiseases(input, result);
        displayDiagnosisResult(result);
        cout << "\nApakah Anda ingin melakukan diagnosa lain? (Y/N): ";
        cin >> repeat;
        cin.ignore();
        
    } while (repeat == 'Y' || repeat == 'y');

    cout << "\nTerima kasih telah mengunjungi rumah sakit kami!" << endl;

    return 0;
}
void displayMenu()
{
    cout << "=== SISTEM DIAGNOSA PENYAKIT ===" << endl;
    cout << "Berikut adalah daftar penyakit dan biaya konsultasinya:\n" << endl;

    i = 0;
    while (i < 22) {
        cout << char('A' + i) << " = " << diseaseList[i]
             << " (Rp " << diseaseFees[i] << ")" << endl;
        i++;
    }
}
void diagnoseDiseases(string input, DiagnosisResult &result)
{
    result.totalConsultationFee = 0;
    resultCount = 0;
    i = 0;
    while (i < input.size())
    {
        char choice = input[i];

        if (choice == ' ' || choice == '\t') {
            i++;
            continue;
        }

        if ((choice >= 'A' && choice <= 'Z') || (choice >= 'a' && choice <= 'z'))
        {
            choice = toupper(choice);
            x = choice - 'A';

            if (x >= 0 && x < 22)
            {
                result.diseases[resultCount] = diseaseList[x];
                result.totalConsultationFee += diseaseFees[x];
                resultCount++;
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
}
void displayDiagnosisResult(DiagnosisResult &result)
{
    cout << "\nHasil Diagnosa Anda:" << endl;
    i = 0;
    while (i < resultCount)
    {
        cout << "- Penyakit: " << result.diseases[i] << endl;
        i++;
    }

    cout << "\nTotal Biaya Konsultasi: Rp " << result.totalConsultationFee << endl;
}