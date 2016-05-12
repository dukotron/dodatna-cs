#Pair
Grupiramo dva podatka zajedno, u par

```cpp
pair<int, bool> p;   // stvaramo par p, on sadrži int i bool
p = make_pair(5, true); // spremamo u njega broj 5 i bool true
int broj = p.first; // u varijablu broj spremamo prvi element para
cout << p.second; // ispisujemo drugi element para
```