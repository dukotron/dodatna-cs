#include <iostream>
using namespace std;

// Program ispisuje brojeve između dva unešena.

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    for(int i = a; i <= b; i++)
    {
        cout << i << endl;
    }

    return 0;
}