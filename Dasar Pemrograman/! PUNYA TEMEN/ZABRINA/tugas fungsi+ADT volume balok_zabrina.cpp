//judul: balok adt dan fungsi
#include <iostream>
using namespace std;
//kamus
struct Balok
{
    int panjang, lebar, tinggi;
};
int volume;
//diskripsi
int main()
{
    Balok balok1;
    cout << "Masukkan panjang balok: ";
    cin >> balok1.panjang;
    cout << "Masukkan lebar balok: ";
    cin >> balok1.lebar;
    cout << "Masukkan tinggi balok: ";
    cin >> balok1.tinggi;
    volume = hitungVolume(balok1);
    cout << "Volume balok: " << volume << endl;
    return 0;
}
int hitungVolume(Balok b)
{
    return b.panjang * b.lebar * b.tinggi;
}