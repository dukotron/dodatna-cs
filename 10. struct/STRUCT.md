#Struct
Struktura podatka, možemo grupirati više podataka u jednu strukturu.

```cpp
// struktura nazvana kompleksni_broj
// u sebi sadrži realni i imaginarni dio
// usporedivo je s klasom u Pythonu, ali nedostaju
// joj neki bitni dijelovi kao naslijeđivanje
typedef struct
{
    float realni_dio;
    float imaginarni_dio;  
} kompleksni_broj;

// korištenje
kompleksni_broj br;
br.realni_dio = 5.0f;
br.imaginarni_dio = 0f;

cout << br.realni_dio << " + " << br.imaginarni_dio << "i";
```