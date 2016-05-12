#include <iostream>
using namespace std;

// Upisujemo n brojeva, program vraća zbroj i prosjek koristeci funkcije.

int zbroj(int polje[], int velicina_polja)
{
    // idemo kroz svaki element polja i dodajemo ga u rjesenje
    int rjesenje = 0;
    for(int i = 0; i < velicina_polja; i++)
    {
        rjesenje = rjesenje + polje[i];
    }
    return rjesenje;
}

float prosjek(int polje[], int velicina_polja)
{
    // prosjek ce biti jednak zbroju elemenata podijeljenom sa velicinom polja
    // velicinu polja "castamo" odnosno pretvaramo u float tako da se dijeli na decimalni broj a ne int
    float rjesenje = zbroj(polje, velicina_polja) / (float)velicina_polja;
    return rjesenje;
}

int main()
{
    int n;
    cin >> n;

    int brojevi[n];

    for(int i = 0; i < n; i++)
    {
        // upisujemo broj u i-ti element u polju
        cin >> brojevi[i];
    }

    cout << zbroj(brojevi, n) << endl;
    cout << prosjek(brojevi, n) << endl;

    return 0;
}