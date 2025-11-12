//judul: deteksi dan diagnosa penyakit berdasarkan gejala ZABRINA
#include <iostream>
using namespace std;
//kamus
char pilihan, keluhan1, keluhan2, keluhan3, keluhan4;
void penyakit1(char keluhan1);
void penyakit2(char keluhan1, char keluhan2);
void penyakit3(char keluhan1, char keluhan2, char keluhan3);
void penyakit4(char keluhan1, char keluhan2, char keluhan3, char keluhan4);
void kembali();
//diskripsi
int main()
{
    do
    {
        penyakit4(keluhan1, keluhan2, keluhan3, keluhan4);
        penyakit3(keluhan1, keluhan2, keluhan3);
        penyakit2(keluhan1, keluhan2);
        penyakit1(keluhan1);
        kembali();
    } while (pilihan == 'Y' || pilihan == 'y');
    cout << "Terima kasih telah mengunjungi rumah sakit kami!" << endl;
    return 0;
}
void penyakit4(char keluhan1, char keluhan2, char keluhan3, char keluhan4)
{
        cout << "DETEKSI & DIAGNOSA" << endl;
        cout << "Silakan ceritakan bagaimana perasaan Anda!" << endl;
        cout << "A = SESAK NAPAS" << endl;
        cout << "B = RADANG" << endl;
        cout << "C = PUSING" << endl;
        cout << "D = PANAS DINGIN" << endl;
        cout << "E = SAKIT PERUT" << endl;

        cout << "Masukkan 4 gejala yang Anda rasakan (A/B/C/D/E): " << endl;
        cin >> keluhan1 >> keluhan2 >> keluhan3 >> keluhan4;

        if ((keluhan1 == 'A' || keluhan2 == 'A' || keluhan3 == 'A' || keluhan4 == 'A') &&
            (keluhan1 == 'B' || keluhan2 == 'B' || keluhan3 == 'B' || keluhan4 == 'B') &&
            (keluhan1 == 'C' || keluhan2 == 'C' || keluhan3 == 'C' || keluhan4 == 'C') &&
            (keluhan1 == 'D' || keluhan2 == 'D' || keluhan3 == 'D' || keluhan4 == 'D')) 
        {
            cout << "Kamu memiliki penyakit Demam!" << endl;
        } 
        else if ((keluhan1 == 'A' || keluhan2 == 'A' || keluhan3 == 'A' || keluhan4 == 'A') &&
                 (keluhan1 == 'B' || keluhan2 == 'B' || keluhan3 == 'B' || keluhan4 == 'B') &&
                 (keluhan1 == 'C' || keluhan2 == 'C' || keluhan3 == 'C' || keluhan4 == 'C') &&
                 (keluhan1 == 'E' || keluhan2 == 'E' || keluhan3 == 'E' || keluhan4 == 'E')) 
        {
            cout << "Kamu memiliki penyakit Tonsilofaringitis!" << endl;
        }
        else if ((keluhan1 == 'A' || keluhan2 == 'A' || keluhan3 == 'A' || keluhan4 == 'A') &&
                 (keluhan1 == 'B' || keluhan2 == 'B' || keluhan3 == 'B' || keluhan4 == 'B') &&
                 (keluhan1 == 'D' || keluhan2 == 'D' || keluhan3 == 'D' || keluhan4 == 'D') &&
                 (keluhan1 == 'E' || keluhan2 == 'E' || keluhan3 == 'E' || keluhan4 == 'E'))
        {
            cout << "Kamu memiliki penyakit Bronchitis!" << endl;
        } 
        else if ((keluhan1 == 'B' || keluhan2 == 'B' || keluhan3 == 'B' || keluhan4 == 'B') &&
                 (keluhan1 == 'C' || keluhan2 == 'C' || keluhan3 == 'C' || keluhan4 == 'C') &&
                 (keluhan1 == 'D' || keluhan2 == 'D' || keluhan3 == 'D' || keluhan4 == 'D') &&
                 (keluhan1 == 'E' || keluhan2 == 'E' || keluhan3 == 'E' || keluhan4 == 'E'))
        {
            cout << "Kamu memiliki penyakit Hepatitis!" << endl;
        } 
        else if ((keluhan1 == 'A' || keluhan2 == 'A' || keluhan3 == 'A' || keluhan4 == 'A') &&
                 (keluhan1 == 'C' || keluhan2 == 'C' || keluhan3 == 'C' || keluhan4 == 'C') &&
                 (keluhan1 == 'D' || keluhan2 == 'D' || keluhan3 == 'D' || keluhan4 == 'D') &&
                 (keluhan1 == 'E' || keluhan2 == 'E' || keluhan3 == 'E' || keluhan4 == 'E'))
        {
            cout << "Kamu memiliki penyakit Gastroenteritis Atau Infeksi Saluran Pencernaan!" << endl;
        } 
        else
        {
            cout << "Gejala tidak dikenali." << endl;
        }
}
void penyakit3(char keluhan1, char keluhan2, char keluhan3)
{
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
}
void penyakit2(char keluhan1, char keluhan2)
{
        cout << "Masukkan 2 gejala yang Anda rasakan (A/B/C/D/E): " << endl;
        cin >> keluhan1 >> keluhan2;

        if ((keluhan1 == 'A' || keluhan2 == 'A') &&
            (keluhan1 == 'B' || keluhan2 == 'B'))
        {
            cout << "Kamu memiliki penyakit faringitis atau laringitis!" << endl;
        } 
        else if ((keluhan1 == 'B' || keluhan2 == 'B') &&
                 (keluhan1 == 'C' || keluhan2 == 'C'))
        {
            cout << "Kamu memiliki penyakit Gejala Batuk!" << endl;
        } 
        else if ((keluhan1 == 'A' || keluhan2 == 'A') &&
                 (keluhan1 == 'C' || keluhan2 == 'C'))
        {
            cout << "Kamu memiliki penyakit Gejala Stres!" << endl;
        } 
        else if ((keluhan1 == 'D' || keluhan2 == 'D')  &&
                 (keluhan1 == 'E' || keluhan2 == 'E'))
		{
            cout << "Kamu memiliki penyakit Asam Lambung!" << endl;
        }
        else if ((keluhan1 == 'A' || keluhan2 == 'A') &&
                 (keluhan1 == 'E' || keluhan2 == 'E'))
		{
            cout << "Kamu memiliki penyakit Gastritis Atau Peradangan Pada Lambung!" << endl;
	    }
        else if ((keluhan1 == 'A' || keluhan2 == 'A')  &&
                 (keluhan1 == 'D' || keluhan2 == 'D'))
		{
            cout << "Kamu memiliki penyakit Lemah Jantung!" << endl;
	    }
        else if ((keluhan1 == 'B' || keluhan2 == 'B')  &&
                 (keluhan1 == 'D' || keluhan2 == 'D'))
		{
            cout << "Kamu memiliki penyakit Rhinovirus!" << endl;
	    }
        else if ((keluhan1 == 'B' || keluhan2 == 'B') &&
                 (keluhan1 == 'E' || keluhan2 == 'E'))
		{
            cout << "Kamu memiliki penyakit Inlflasi Atau Peradangan Pada Organ Tertentu!" << endl;
	    }
        else if ((keluhan1 == 'C' || keluhan2 == 'C') &&
                 (keluhan1 == 'D' || keluhan2 == 'D'))
		{
            cout << "Kamu memiliki penyakit Darah Rendah!" << endl;
	    }
        else if ((keluhan1 == 'C' || keluhan2 == 'C') &&
                 (keluhan1 == 'E' || keluhan2 == 'E'))
		{
            cout << "Kamu memiliki penyakit Gejala Kecemasan!" << endl;
        }
        else
        {
            cout << "Gejala tidak dikenali." << endl;
        }
}
void penyakit1(char keluhan1)
{
        cout << "Masukkan 1 gejala yang Anda rasakan (A/B/C/D/E): " << endl;
        cin >> keluhan1;

        if (keluhan1 == 'A')
        {
            cout << "Kamu memiliki penyakit Asma!" << endl;
        }
        else if (keluhan1 == 'B')
        {
            cout << "Kamu memiliki penyakit Amandel!" << endl;
        } 
        else if (keluhan1 == 'C')
        {
            cout << "Kamu memiliki penyakit Migren!" << endl;
        } 
        else if (keluhan1 == 'D')
        {
            cout << "Kamu memiliki penyakit Malaria!" << endl;
        } 
        else if (keluhan1 == 'E')
        {
            cout << "Kamu memiliki penyakit Maag!" << endl;
        } 
        else
        {
            cout << "Gejala tidak dikenali." << endl;
        }
}
void kembali()
{
        cout << "Apakah Anda ingin melakukan diagnosa lagi? (Y/N): " << endl;
        cin >> pilihan;
}