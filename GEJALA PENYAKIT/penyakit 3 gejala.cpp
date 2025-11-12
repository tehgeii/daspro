// Judul: deteksi dan diagnosa penyakit berdasarkan gejala
#include <iostream>
using namespace std;

// Kamus untuk gejala
char pilihan, keluhan1, keluhan2, keluhan3;

// Diskripsi
int main() {
    do 
    {
        cout << "DETEKSI & DIAGNOSA" << endl;
        cout << "Silakan ceritakan bagaimana perasaan Anda!" << endl;
        cout << "A = SESAK NAPAS" << endl;
        cout << "B = RADANG" << endl;
        cout << "C = PUSING" << endl;
        cout << "D = PANAS DINGIN" << endl;
        cout << "E = SAKIT PERUT" << endl;

        cout << "Masukkan 3 gejala yang Anda rasakan (A/B/C/D/E): " << endl;
        cin >> keluhan1 >> keluhan2 >> keluhan3;

        if ((keluhan1 == 'A' || keluhan2 == 'A' || keluhan3 == 'A') &&
            (keluhan1 == 'B' || keluhan2 == 'B' || keluhan3 == 'B') &&
            (keluhan1 == 'C' || keluhan2 == 'C' || keluhan3 == 'C'))
        {
            cout << "Kamu memiliki penyakit Vertigo!" << endl;
        } 
        else if ((keluhan1 == 'B' || keluhan2 == 'B' || keluhan3 == 'B') &&
                 (keluhan1 == 'C' || keluhan2 == 'C' || keluhan3 == 'C') &&
                 (keluhan1 == 'D' || keluhan2 == 'D' || keluhan3 == 'D'))
        {
            cout << "Kamu memiliki penyakit Influenza Atau Flu!" << endl;
        } 
        else if ((keluhan1 == 'C' || keluhan2 == 'C' || keluhan3 == 'C') &&
                 (keluhan1 == 'D' || keluhan2 == 'D' || keluhan3 == 'D') &&
                 (keluhan1 == 'E' || keluhan2 == 'E' || keluhan3 == 'E'))
        {
            cout << "Kamu memiliki penyakit Demam Tifoid!" << endl;
        } 
        else if ((keluhan1 == 'A' || keluhan2 == 'A' || keluhan3 == 'A') &&
                 (keluhan1 == 'D' || keluhan2 == 'D' || keluhan3 == 'D') &&
                 (keluhan1 == 'E' || keluhan2 == 'E' || keluhan3 == 'E')) 
		{
            cout << "Kamu memiliki penyakit Pneumonia!" << endl;
        }
        else if ((keluhan1 == 'B' || keluhan2 == 'B' || keluhan3 == 'B') &&
                 (keluhan1 == 'D' || keluhan2 == 'D' || keluhan3 == 'D') &&
                 (keluhan1 == 'E' || keluhan2 == 'E' || keluhan3 == 'E'))
		{
            cout << "Kamu memiliki penyakit Kolitis atau Divertikulitis !" << endl;
        }
        else
        {
            cout << "Gejala tidak dikenali." << endl;
        }
        cout << "Apakah Anda ingin melakukan diagnosa lagi? (Y/N): " << endl;
        cin >> pilihan;

    } while (pilihan == 'Y' || pilihan == 'y');

    cout << "Terima kasih telah mengunjungi rumah sakit kami!" << endl;
    
    return 0;
}