//judul: fungsi volume balok DAFI
#include <iostream>
using namespace std;
//kamus
struct menghitung
{
    int panj, leb, ting;
    float hitung()
    {
        return panj * leb * ting;
    }
};
void inputan(menghitung & balok);
void outputan(float volume);
float vol;
//diskripsi
int main ()
{
    menghitung balok;
    cout << "menghitung volume balok\n\n";
    inputan(balok);
    vol = balok.hitung();
    outputan(vol);
    return 0;
}
//input
void inputan(menghitung & balok)
{
    cout << "panjang: ";
    cin >> balok.panj;
    cout << "lebar: ";
    cin >> balok.leb;
    cout << "tinggi: ";
    cin >> balok.ting;
}
//output
void outputan(float volume)
{
    cout << "\nmaka total volume balok adalah: " << volume;
}
