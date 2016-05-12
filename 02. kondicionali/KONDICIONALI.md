#Kondicionali

Kondicionale koristimo za “odlučivanje”. Vrste su if, switch i ternarni operator.

###if, else if, else
```cpp
if(a == 5)
{
    // nešto
}
else if(a == 6)
{
    // nešto drugo
}
else
{
    // nešto drugo drugo
}
```

Bez otvaranja bloka:
```cpp
if(a == 5)
    ucini nesto;
else
    nesto drugo;
```


###switch
```cpp
switch(a) 
{
	case 1 : 
		cout << 'a = 1';
		break;       
	case 2 : 
		cout << 'a = 2';
		break;
	default:
		cout << 'a nije ni 1, ni 2';
		break;
}
```


###Ternarni operator
Trojni/ternarni operator kompaktna je verzija if-a. Koriste se upitnik i dvotočka. Primjer:
```cpp
// ako je a == 5, onda cout "5", inace "idk"
a == 5 ? cout << "5" : cout << "idk";

// drugi nacin
cout << (a == 5 ? "5" : "idk");
```