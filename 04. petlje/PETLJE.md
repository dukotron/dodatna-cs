#Petlje
Petlje koristimo ako želimo neku istu ili sličnu akciju ponoviti više puta. Vrste petlji su for, while i do while.


Preciznije ih možemo kontrolirati koristeći: break, continue i goto.

break -> izađi izvan petlje
continue -> preskoči ovu iteraciju, kreni na sljedeću

###while petlja
Izvršava se dok je uvijet unutar zagrada istinit.
```cpp
int a = 5;
int guess;

while(guess != a)
{
    cin >> guess;
    if(guess != a) 
       cout << "netočno" << endl;
}

cout << "točno" << endl;
```


###for petlja
Deklaracija:
```cpp
for(početno stanje ; uvijet ; korak) {}
```

Na primjer:
```cpp
for(int i = 0; i < 10; i++)
{
    cout << i << endl;
}
```

###do while
Funkcionira kao while, ali osigurava da se kod unutar nje izvrši barem jednom. To će se dogoditi čak i ako je uvijet neistinit.
```cpp
do
{
    // izvršava se, iako 5 nije jednako 3
    cout << "a" << endl;
} while (5 == 3);
```