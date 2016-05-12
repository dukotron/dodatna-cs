#Map
Kao rječnik u Pythonu.

```cpp
#include <map> // includeamo na pocetku programa

map<char, int> m; // stvaramo mapu, znacenje ovog -> char nam odgovara nekom intu
m['a'] = 5; // pod char 'a' spremamo broj 5
m['c'] = 12; // mapa je jednosmjerna, od 5 i 12 ne možemo dobiti 'a' i 'c'
cout << m['a']; // ispisujemo vrijednost pod 'a'
```