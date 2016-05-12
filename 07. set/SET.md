#Set
Sadržava maximalno jedan identičan element.

```cpp
#include <set> // includeamo na pocetku programa

set<char> s; // stvaramo set s, sadrzi charactere
s.insert('a'); // ubacujemo znak 'a' u njega
s.count('a'); // koliko ima 'a' u njemu? vraća ili 0 ili 1
```