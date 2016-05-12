#Funkcije
Funkcija grupira skup iskaza. Može se pozvati iz nekog dijela programa. Njihova uloga je da nešto izračunaju ili izvrše neku radnju.

Format:
```cpp
tip ime(tip_parametra ime1, tip_parametra  ime2)
{
    …;
    …;
   return tip;
}
```

Tip je vrsta podataka koju funkcija vraća (odnosno računa). Ako ne vraća ništa koristimo “void”.  


###Pozivanje funkcija
Funkciju pozivamo tako da joj napišemo ime i unutar zagrada stavimo parametre. Na primjer program koji računa zbroj dva broja:
```cpp
float zbroj(float a, float b)
{
    return a + b;
}

int main()
{
    float prvi, drugi;
    cin >> prvi;
    cin >> drugi;

    // ovdje se "prvi" i "drugi" kopiraju u "a" i "b" unutar funkcije
    // ako u funkciji mijenjamo a ili b, prvi i drugi svejedno ostaju isti
    // zato što se kopiraju
    cout << zbroj(prvi, drugi);
    return 0;
}
```
  
    
  
####Funkcija koja zbraja dva broja:
Tip podatka koji vraća će biti float, parametri su dva broja, također floatovi. Unutar funkcije računamo zbroj i vraćamo ga.
```cpp
float zbroj(float a, float b)
{
    return a + b;
}
```


####Funkcija koja ispisuje "Bok"
```cpp
void print_sth()
{
    cout << "Bok" << endl;
}
```


