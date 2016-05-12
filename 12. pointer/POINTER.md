#Pointer
Pointer je varijabla koja sprema adresu neke druge varijable. Pokazuje (pointa) na nju. 

Pointer deklariramo na način da prije imena stavimo znak *.
```cpp
int *pointer_na_int;
```

Adresu varijable dobivamo znakom &.
```cpp
int a = 100;
int *pointer_na_int = &a;
```

Vrijednost na nekoj adresi dobivamo znakom *.
```cpp
// ispisujemo adresu pod pointerom
cout << pointer_na_int;
// ispisujemo vrijednost pod pointerom
cout << *pointer_na_int;

// promjena vrijednosti
*pointer_na_int = 132;
```