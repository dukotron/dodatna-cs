#include <iostream>
using namespace std;

// Ispisuje se tablica mnozenja koristeci dvije for petlje.

int main()
{
    for(int red = 1; red <= 10; red++)
    {
        for(int stupac = 1; stupac <= 10; stupac++)
        {
            cout << red*stupac << "    ";

            // ako je broj jednoznamenkast, dodajemo još jedan razmak da se poravna
            if(red * stupac < 10) cout << " ";
        }
        cout << endl;
    }

    return 0;
}