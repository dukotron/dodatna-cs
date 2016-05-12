#include <iostream>
#include <set>
using namespace std;

// Upisujemo brojeve dok se jedan ne ponovi

int main()
{
    set<char> s;

    // Stavljamo beskonacnu petlju, ako se broj ponovi cemo break-ati
    while(true)
    {
        int x;
        cin >> x;

        if(s.count(x) == 1) break;

        s.insert(x);
    }

    cout << "Gotovo";
    return 0;
}
