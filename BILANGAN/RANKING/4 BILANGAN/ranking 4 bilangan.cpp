//judul : ranking 4 bilangan variabel
#include <iostream>
using namespace std;
//kamus
int bil1, bil2, bil3, bil4;
//deskripsi
int main()
{
    //input empat bilangan
    cout << "Masukkan bilangan 1: ";
    cin >> bil1;
    
    cout << "Masukkan bilangan 2: ";
    cin >> bil2;

    cout << "Masukkan bilangan 3: ";
    cin >> bil3;

    cout << "Masukkan bilangan 4: ";
    cin >> bil4;

    if (bil1 >= bil2 && bil1 >= bil3 && bil1 >= bil4)
    {
        cout << bil1;
        if (bil2 >= bil3 && bil2 >= bil4)
        {
            cout << " > " << bil2;
            if (bil3 >= bil4)
            {
                cout << " > " << bil3 << " > " << bil4;
            }
            else
            {
                cout << " > " << bil4 << " > " << bil3;
            }
        }
        else if (bil3 >= bil2 && bil3 >= bil4)
        {
            cout << " > " << bil3;
            if (bil2 >= bil4)
            {
                cout << " > " << bil2 << " > " << bil4;
            }
            else
            {
                cout << " > " << bil4 << " > " << bil2;
            }
        }
        else
        {
            cout << " > " << bil4;
            if (bil2 >= bil3)
            {
                cout << " > " << bil2 << " > " << bil3;
            }
            else
            {
                cout << " > " << bil3 << " > " << bil2;
            }
        }
    }
    else if (bil2 >= bil1 && bil2 >= bil3 && bil2 >= bil4)
    {
        cout << bil2;
        if (bil1 >= bil3 && bil1 >= bil4)
        {
            cout << " > " << bil1;
            if (bil3 >= bil4)
            {
                cout << " > " << bil3 << " > " << bil4;
            }
            else
            {
                cout << " > " << bil4 << " > " << bil3;
            }
        }
        else if (bil3 >= bil1 && bil3 >= bil4)
        {
            cout << " > " << bil3;
            if (bil1 >= bil4)
            {
                cout << " > " << bil1 << " > " << bil4;
            }
            else
            {
                cout << " > " << bil4 << " > " << bil1;
            }
        }
        else
        {
            cout << " > " << bil4;
            if (bil1 >= bil3)
            {
                cout << " > " << bil1 << " > " << bil3;
            }
            else
            {
                cout << " > " << bil3 << " > " << bil1;
            }
        }
    }
    else if (bil3 >= bil1 && bil3 >= bil2 && bil3 >= bil4)
    {
        cout << bil3;
        if (bil1 >= bil2 && bil1 >= bil4)
        {
            cout << " > " << bil1;
            if (bil2 >= bil4)
            {
                cout << " > " << bil2 << " > " << bil4;
            }
            else
            {
                cout << " > " << bil4 << " > " << bil2;
            }
        }
        else if (bil2 >= bil1 && bil2 >= bil4)
        {
            cout << " > " << bil2;
            if (bil1 >= bil4)
            {
                cout << " > " << bil1 << " > " << bil4;
            }
            else
            {
                cout << " > " << bil4 << " > " << bil1;
            }
        }
        else
        {
            cout << " > " << bil4;
            if (bil1 >= bil2)
            {
                cout << " > " << bil1 << " > " << bil2;
            }
            else
            {
                cout << " > " << bil2 << " > " << bil1;
            }
        }
    }
    else
    {
        cout << bil4;
        if (bil1 >= bil2 && bil1 >= bil3)
        {
            cout << " > " << bil1;
            if (bil2 >= bil3)
            {
 cout << " > " << bil2 << " > " << bil3;
            }
            else
            {
                cout << " > " << bil3 << " > " << bil2;
            }
        }
        else if (bil2 >= bil1 && bil2 >= bil3)
        {
            cout << " > " << bil2;
            if (bil1 >= bil3)
            {
                cout << " > " << bil1 << " > " << bil3;
            }
            else
            {
                cout << " > " << bil3 << " > " << bil1;
            }
        }
        else
        {
            cout << " > " << bil3;
            if (bil1 >= bil2)
            {
                cout << " > " << bil1 << " > " << bil2;
            }
            else
            {
                cout << " > " << bil2 << " > " << bil1;
            }
        }
    }

    cout << endl;
    return 0;
}