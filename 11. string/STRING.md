#C-string
String preuzet iz C-a. Funkcionira na način da napravimo polje od znakova.
Primjer korištenja:
```cpp
char mystr[100];
cin >> mystr;
mystr[0] = 'A'.
cout << mystr;
```
Bitno je naglasiti da veličina treba biti za jedan veća od maksimalne veličine stringa jer nam je potrebno jedno mjesto za null terminator: '\0'.

#std::string
String uključen u standard library od C++-a. Možemo ga koristiti jednostavno tako da includeamo string.

Primjer korištenja:
```cpp
#include <string>
using namespace std;

...

string moj_string;
cin >> moj_string;
// getline(cin, moj_string) <- ako želimo cijeli red s razmacima


...

// veličina
moj_string.length() ili .size()

// konkatenacija
string3 = string1 + string2;
```

Više informacija: http://www.cprogramming.com/tutorial/string.html