#include <iostream>
#include <vector>
using namespace std;

// Upisujemo n brojeva
// Ispisuju se ti brojevi

int main()
{
    int n;
    vector<int> vec;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        vec.push_back(x);
    }

    cout << "\nISPIS" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}
