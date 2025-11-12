//judul: tugas daspro kondisi bil1 dan bil2
#include <iostream>
using namespace std;
//kamus
int bil1, bil2;
//diskripsi
int main()
{
    //masukkan atau input dua bilangan
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    cout << "\n"; // Kasih jarak antar baris

    //memakai if untuk menentukan mana bilangan terbesar dan terkecil
    if (bil1 > bil2)
    {
        //bil1 lebih besar dari bil2
        cout << "Bilangan terbesar adalah " << bil1 << " (Bilangan Pertama)";
        cout << " dan Bilangan terkecil adalah " << bil2 << " (Bilangan Kedua)";
    }
    else if (bil2 > bil1)
    {
        //bil2 lebih besar dari bil1
        cout << "Bilangan terbesar adalah " << bil2 << " (Bilangan Kedua)";
        cout << " dan Bilangan terkecil adalah " << bil1 << " (Bilangan Pertama)";
    }
    return 0;
}
