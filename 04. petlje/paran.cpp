#include <iostream>
using namespace std;

// Upisujemo n elemenata i gledamo hoće li iti jedan od njih biti paran
// Na kraju dajemo odgovor

int main()
{
    int n;
    cin >> n;

    bool ima_paran = false;

    // upisujemo n elemenata, znaci: n puta se ponavlja
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if(x % 2 == 0)
            ima_paran = true;
    }

    if(ima_paran) cout << "Ima.";
    else cout << "Nema.";
    return 0;
}