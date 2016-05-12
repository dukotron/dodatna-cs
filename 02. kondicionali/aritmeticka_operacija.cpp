#include <iostream>
using namespace std;

// Upisujemo osnovnu operaciju u stilu da upišemo dva broja pa znak
// Primjer "2 2 +", program ispisuje 4

int main()
{
    int a, b;
    char znak;

    cin >> a;
    cin >> b;

    cin >> znak;

    float rjesenje;

    if(znak == '+')
    {
        rjesenje = a + b;
    }
    else if(znak == '-')
    {
        rjesenje = a - b;
    }
    else if(znak == '*')
    {
        rjesenje = a * b;
    }
    else if(znak == '/')
    {
        rjesenje = a / b;
    }
    else
    {
        cout << "Nepoznat znak";
        return 0; //return 0 u funkciji main() zavrsava izvrsavanje programa
    }

    cout << rjesenje;
    return 0;
}