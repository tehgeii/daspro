//judul: tugas daspro urutan bilangan dari terbesar ke terkecil
#include <iostream>
using namespace std;

//kamus
int bil1, bil2, bil3, bil4, bil5;

//diskripsi
int main()
{
    //masukkan atau input lima bilangan
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    cout << "Masukkan bilangan ketiga: ";
    cin >> bil3;

    cout << "Masukkan bilangan keempat: ";
    cin >> bil4;

    cout << "Masukkan bilangan kelima: ";
    cin >> bil5;

    //kasih jarak antar baris
    cout << "\n";

    //mencari bilangan terbesar dan urutannya (besar ke kecil)
    if (bil1 >= bil2 && bil1 >= bil3 && bil1 >= bil4 && bil1 >= bil5)
    {
        cout << "Bilangan terbesar adalah " << bil1 << endl;

        if (bil2 >= bil3 && bil2 >= bil4 && bil2 >= bil5)
        {
            cout << "Bilangan kedua terbesar adalah " << bil2 << endl;

            if (bil3 >= bil4 && bil3 >= bil5)
            {
                cout << "Bilangan ketiga terbesar adalah " << bil3 << endl;
                cout << "Bilangan keempat terbesar adalah " << (bil4 >= bil5 ? bil4 : bil5) << endl;
                cout << "Bilangan terkecil adalah " << (bil4 < bil5 ? bil4 : bil5) << endl;
            } 
            else
            {
                cout << "Bilangan ketiga terbesar adalah " << bil5 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil4 << endl;
                cout << "Bilangan terkecil adalah " << bil4 << endl;
            }
        } 
        else if (bil3 >= bil2 && bil3 >= bil4 && bil3 >= bil5)
        {
            cout << "Bilangan kedua terbesar adalah " << bil3 << endl;

            if (bil2 >= bil4 && bil2 >= bil5)
            {
                cout << "Bilangan ketiga terbesar adalah " << bil2 << endl;
                cout << "Bilangan keempat terbesar adalah " << (bil4 >= bil5 ? bil4 : bil5) << endl;
                cout << "Bilangan terkecil adalah " << (bil4 < bil5 ? bil4 : bil5) << endl;
            }
            else
            {
                cout << "Bilangan ketiga terbesar adalah " << bil5 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil2 << endl;
                cout << "Bilangan terkecil adalah " << bil2 << endl;
            }
        }
        else
        {
            cout << "Bilangan kedua terbesar adalah " << bil5 << endl;

            if (bil2 >= bil4)
            {
                cout << "Bilangan ketiga terbesar adalah " << bil2 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil4 << endl;
                cout << "Bilangan terkecil adalah " << bil3 << endl;
            }
            else
            {
                cout << "Bilangan ketiga terbesar adalah " << bil4 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil2 << endl;
                cout << "Bilangan terkecil adalah " << bil3 << endl;
            }
        }
    }
    else if (bil2 >= bil1 && bil2 >= bil3 && bil2 >= bil4 && bil2 >= bil5)
    {
        cout << "Bilangan terbesar adalah " << bil2 << endl;

        if (bil1 >= bil3 && bil1 >= bil4 && bil1 >= bil5)
        {
            cout << "Bilangan kedua terbesar adalah " << bil1 << endl;

            if (bil3 >= bil4 && bil3 >= bil5)
            {
                cout << "Bilangan ketiga terbesar adalah " << bil3 << endl;
                cout << "Bilangan keempat terbesar adalah " << (bil4 >= bil5 ? bil4 : bil5) << endl;
                cout << "Bilangan terkecil adalah " << (bil4 < bil5 ? bil4 : bil5) << endl;
            }
            else
            {
                cout << "Bilangan ketiga terbesar adalah " << bil5 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil4 << endl;
                cout << "Bilangan terkecil adalah " << bil4 << endl;
            }
        }
        else if (bil3 >= bil1 && bil3 >= bil4 && bil3 >= bil5)
        {
            cout << "Bilangan kedua terbesar adalah " << bil3 << endl;

            if (bil1 >= bil4 && bil1 >= bil5)
            {
                cout << "Bilangan ketiga terbesar adalah " << bil1 << endl;
                cout << "Bilangan keempat terbesar adalah " << (bil4 >= bil5 ? bil4 : bil5) << endl;
                cout << "Bilangan terkecil adalah " << (bil4 < bil5 ? bil4 : bil5) << endl;
            }
            else
            {
                cout << "Bilangan ketiga terbesar adalah " << bil5 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil1 << endl;
                cout << "Bilangan terkecil adalah " << bil1 << endl;
            }
        }
        else
        {
            cout << "Bilangan kedua terbesar adalah " << bil5 << endl;

            if (bil1 >= bil4)
            {
                cout << "Bilangan ketiga terbesar adalah " << bil1 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil4 << endl;
                cout << "Bilangan terkecil adalah " << bil3 << endl;
            }
            else
            {
                cout << "Bilangan ketiga terbesar adalah " << bil4 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil1 << endl;
                cout << "Bilangan terkecil adalah " << bil3 << endl;
            }
        }
    }
    else if (bil3 >= bil1 && bil3 >= bil2 && bil3 >= bil4 && bil3 >= bil5)
    {
        cout << "Bilangan terbesar adalah " << bil3 << endl;

        if (bil1 >= bil2 && bil1 >= bil4 && bil1 >= bil5)
        {
            cout << "Bilangan kedua terbesar adalah " << bil1 << endl;

            if (bil2 >= bil4 && bil2 >= bil5)
            {
                cout << "Bilangan ketiga terbesar adalah " << bil2 << endl;
                cout << "Bilangan keempat terbesar adalah " << (bil4 >= bil5 ? bil4 : bil5) << endl;
                cout << "Bilangan terkecil adalah " << (bil4 < bil5 ? bil4 : bil5) << endl;
            }
            else
            {
                cout << "Bilangan ketiga terbesar adalah " << bil5 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil2 << endl;
                cout << "Bilangan terkecil adalah " << bil2 << endl;
            }
        }
        else if (bil2 >= bil1 && bil2 >= bil4 && bil2 >= bil5)
        {
            cout << "Bilangan kedua terbesar adalah " << bil2 << endl;

            if (bil1 >= bil4 && bil1 >= bil5)
            {
                cout << "Bilangan ketiga terbesar adalah " << bil1 << endl;
                cout << "Bilangan keempat terbesar adalah " << (bil4 >= bil5 ? bil4 : bil5) << endl;
                cout << "Bilangan terkecil adalah " << (bil4 < bil5 ? bil4 : bil5) << endl;
            }
            else
            {
                cout << "Bilangan ketiga terbesar adalah " << bil5 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil1 << endl;
                cout << "Bilangan terkecil adalah " << bil1 << endl;
            }
        }
        else
        {
            cout << "Bilangan kedua terbesar adalah " << bil5 << endl;

            if (bil1 >= bil4)
            {
                cout << "Bilangan ketiga terbesar adalah " << bil1 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil4 << endl;
                cout << "Bilangan terkecil adalah " << bil2 << endl;
            } 
            else
            {
                cout << "Bilangan ketiga terbesar adalah " << bil4 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil1 << endl;
                cout << "Bilangan terkecil adalah " << bil2 << endl;
            }
        }
    }
    else if (bil4 >= bil1 && bil4 >= bil2 && bil4 >= bil3 && bil4 >= bil5)
    {
        cout << "Bilangan terbesar adalah " << bil4 << endl;

        if (bil1 >= bil2 && bil1 >= bil3 && bil1 >= bil5)
        {
            cout << "Bilangan kedua terbesar adalah " << bil1 << endl;

            if (bil2 >= bil3 && bil2 >= bil5)
            {
                cout << "Bilangan ketiga terbesar adalah " << bil2 << endl;
                cout << "Bilangan keempat terbesar adalah " << (bil3 >= bil5 ? bil3 : bil5) << endl;
                cout << "Bilangan terkecil adalah " << (bil3 < bil5 ? bil3 : bil5) << endl;
            }
            else
            {
                cout << "Bilangan ketiga terbesar adalah " << bil5 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil2 << endl;
                cout << "Bilangan terkecil adalah " << bil2 << endl;
            }
        }
        else if (bil2 >= bil1 && bil2 >= bil3 && bil2 >= bil5)
        {
            cout << "Bilangan kedua terbesar adalah " << bil2 << endl;

            if (bil1 >= bil3 && bil1 >= bil5)
            {
                cout << "Bilangan ketiga terbesar adalah " << bil1 << endl;
                cout << "Bilangan keempat terbesar adalah " << (bil3 >= bil5 ? bil3 : bil5) << endl;
                cout << "Bilangan terkecil adalah " << (bil3 < bil5 ? bil3 : bil5) << endl;
            }
            else
            {
                cout << "Bilangan ketiga terbesar adalah " << bil5 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil1 << endl;
                cout << "Bilangan terkecil adalah " << bil1 << endl;
            }
        }
        else
        {
            cout << "Bilangan kedua terbesar adalah " << bil5 << endl;

            if (bil1 >= bil3)
            {
                cout << "Bilangan ketiga terbesar adalah " << bil1 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil3 << endl;
                cout << "Bilangan terkecil adalah " << bil2 << endl;
            }
            else
            {
                cout << "Bilangan ketiga terbesar adalah " << bil3 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil1 << endl;
                cout << "Bilangan terkecil adalah " << bil2 << endl;
            }
        }
    }
    else
    {
        cout << "Bilangan terbesar adalah " << bil5 << endl;

        if (bil1 >= bil2 && bil1 >= bil3 && bil1 >= bil4)
        {
            cout << "Bilangan kedua terbesar adalah " << bil1 << endl;

            if (bil2 >= bil3 && bil2 >= bil4)
            {
                cout << "Bilangan ketiga terbesar adalah " << bil2 << endl;
                cout << "Bilangan keempat terbesar adalah " << (bil3 >= bil4 ? bil3 : bil4) << endl;
                cout << "Bilangan terkecil adalah " << (bil3 < bil4 ? bil3 : bil4) << endl;
            }
            else
            {
                cout << "Bilangan ketiga terbesar adalah " << bil4 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil2 << endl;
                cout << "Bilangan terkecil adalah " << bil2 << endl;
            }
        }
        else if (bil2 >= bil1 && bil2 >= bil3 && bil2 >= bil4)
        {
            cout << "Bilangan kedua terbesar adalah " << bil2 << endl;

            if (bil1 >= bil3 && bil1 >= bil4)
            {
                cout << "Bilangan ketiga terbesar adalah " << bil1 << endl;
                cout << "Bilangan keempat terbesar adalah " << (bil3 >= bil4 ? bil3 : bil4) << endl;
                cout << "Bilangan terkecil adalah " << (bil3 < bil4 ? bil3 : bil4) << endl;
            }
            else
            {
                cout << "Bilangan ketiga terbesar adalah " << bil4 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil1 << endl;
                cout << "Bilangan terkecil adalah " << bil1 << endl;
            }
        }
        else
        {
            cout << "Bilangan kedua terbesar adalah " << bil4 << endl;

            if (bil1 >= bil3)
            {
                cout << "Bilangan ketiga terbesar adalah " << bil1 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil3 << endl;
                cout << "Bilangan terkecil adalah " << bil2 << endl;
            }
            else
            {
                cout << "Bilangan ketiga terbesar adalah " << bil3 << endl;
                cout << "Bilangan keempat terbesar adalah " << bil1 << endl;
                cout << "Bilangan terkecil adalah " << bil2 << endl;
            }
        }
    }

    return 0;
}