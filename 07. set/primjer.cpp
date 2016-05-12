#include <iostream>
#include <set>
using namespace std;

// Upisujemo n znakova
// Upisujemo dodatan znak
// Program govori jesmo li njega veæ upisali

int main()
{
    int n;
    set<char> s;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        char x;
        cin >> x;

        s.insert(x);
    }

    cout << "\nUnesi dodatan znak: ";
    char zn;
    cin >> zn;

    if(s.count(zn) == 1)
        cout << "Postoji";
    else
        cout << "Ne postoji";

    return 0;
}
