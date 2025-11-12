//judul: tugas daspro kondisi bilangan -100 < 100
#include <iostream>
using namespace std;
//kamus
int bilangan;
//diskripsi
int main()
{
    //masukkan bilangan
    cout << "Masukkan bilangan (-100 < 100): ";
    cin >> bilangan;

    //mengecek apakah bilangan yang dimasukkan -100 < bilangan < 100
    while (bilangan <= -100 || bilangan >= 100)
    {
        cout << "Bilangan yang dimasukkan tidak benar. Silahkan masukkan bilangan dengan aturan (-100 < 100): ";
        cin >> bilangan;
    }

    //mengecek apakah bilangan tersebut 0 atau tidak
    if (bilangan == 0)
    {
        cout << bilangan << " Adalah bilangan 0";
    }
    //mengecek apakah bilangan tersebut negatif atau positif
    else  if (bilangan > 0)
            {
            //mengecek apakah bilangan tersebut genap atau ganjil
            if (bilangan % 2 == 0)
            {
                cout << bilangan << " Adalah bilangan positif genap";
            }
            else
            {
                cout << bilangan << " Adalah bilangan positif ganjil";
            }
            } 
        else //mengecek apakah bilangan tersebut genap atau ganjil untuk bilangan negatif
            {
            if (bilangan % 2 == 0)
            {
                cout << bilangan << " Adalah bilangan negatif genap";
            }
            else
            {
                cout << bilangan << " Adalah bilangan negatif ganjil";
            }
        }
    return 0;
}