#include <iostream>
using namespace std;

// Radimo strukturu kompleksni broj
// Funkcija koja ih zbraja, vraca novi
// I funkcija koja ispisuje kompleksni broj

typedef struct
{
    float r;
    float i;
} komp;

komp zbroj(komp k1, komp k2)
{
    komp novi;
    novi.r = k1.r + k2.r;
    novi.i = k1.i + k2.i;
    return novi;
}

void ispis(komp k)
{
    cout << k.r << " + " << k.i << "i" << endl;
}

int main()
{
    komp k1;
    k1.r = 5;
    k1.i = 10;

    komp k2;
    k2.r = -3;
    k2.i = 12;

    komp zbr = zbroj(k1, k2);

    ispis(k1);
    ispis(k2);
    ispis(zbr);

    return 0;
}
