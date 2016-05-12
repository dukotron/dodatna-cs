#Uvod

**Compiler** (programski jezik -> strojni kod), interpreter, IDE

Poznati compileri za C++: GCC, Visual C++, …
Poznati IDE: DevC++, CodeBlocks, ...
Alternativa: online compiler - http://www.tutorialspoint.com/codingground.htm

```cpp
#include <iostream>
using namespace std;
    
int main()
{
   cout << "Hello World";
   return 0;
}
```


###Primitivni tipovi podataka
| Tip           | Veličina       | Opis  |
| ------------- |:-------------:| -----:|
| bool          | 1 | false/true, 0/1 |
| char          | 1 |   slovo, znak |
| int           | 4 | cijeli broj |
| float         | 4 | decimalni broj |
| double        | 8 | decimalni broj|
| long long     | 8 | broj (veći kapacitet) |

Na sve tipove podataka koji sadržavaju broj možemo dodati “unsigned” prefix i tada im neće biti spreman predznak. Dobivamo 1 bit više za broj ali gubimo mogućnost minusa.
Npr int inače ide od -2 milijarde do +2 milijarde, a unsigned int 0 do 4 milijarde.

Overflow i underlow se događaju ako vrijednost popuni sve bitove (ili ide ispod minimuma), tada se preokreće kao stari satovi sa 12 znamenki. Nakon sto pređe 12 opet ide na 1 (ili 11 pa 0). Tako int ako pređe 2 milijarde, otici ce na minus 2 milijarde itd

Castanje je pretvaranje jednog tipa podataka u drugi. Npr int u long long.
Primjer castanja: neki_int = (int) neki_long;



###Konstante
Na engleskom “literals”
Fiksne vrijednosti, za razliku od varijabli

Brojeve najčešće pišemo samo broj, možemo dodati sufiks za preciznost
Npr 10L je long, 10.5f je float, 10u biti će “unsigned”, bez predznaka
Ako broju dodajemo prefikse 0b, 0, 0x oni neće biti u bazi 10 nego binarna, oktalna ili heksadekadska.
Znakove (char) stavljamo u jednostruke navodnike, a string u dvostruke.

Za više detalja: 
http://www.tutorialspoint.com/cplusplus/cpp_constants_literals.htm



###Varijable
Za razliku od konstanata, varijable mogu mijenjati svoju vrijednost.
Možemo definirati varijablu int a = 4; Tada se služimo sa “a” i nju zapravo zamijenjuje vrijednost 4. Vrijednost te varijable tada možemo mijenjati aritmetičkim operatorima (ili inkrementiranjem/dekrementiranjem), npr a = 10;



###Operatori
Radimo neke operacije nad varijablama ili konstantama
Aritmetički, relativni, bitwise, logički, inkrement/dekrement, trojni
| Vrsta              | Operatori |
| ------------- |:-------------:|
| aritmetički          | \+ - * / % |
| relativni            | == != < > <= \>= | 
| bitni                | \>> << ~ & \| ^ | 
| logički              | ! && \|\| |
| inkrement, dekrement | ++ -- |
| trojni               | '? :' | 

