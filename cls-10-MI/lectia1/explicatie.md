
# Problema 1323: Adunarea Matricelor Rare

## Introducere 

### Ce sunt Matricele Rare?
O matrice rară e o matrice în care majoritatea elementelor sunt zero (cel puțin jumătate din elemente).

### Input-ul problemei arată așa:
```
5 6 3 3      // n=5, m=6, N1=3, N2=3 elemente nenule
1 1 2        // Prima matrice, elementele care chiar contează
3 4 3        // Restul sunt zerouri
4 6 1   
1 1 3        // A doua matrice ... 
3 4 -2
4 6 2
```

## Abordarea 1: Matrice 2D Clasică (sau "Cum să nu faci")

Această abordare este cea mai intuitivă: pur și simplu construim matricele complete, inclusiv zerourile.

1.  Creăm două matrice n×m umplute inițial cu zerouri
2.  Pentru fiecare triplet citit, punem valoarea la poziția corespunzătoare în matrice
3.  Parcurgem ambele matrice simultan și adunăm elementele de pe aceleași poziții
4.  Dacă suma e diferită de zero, o salvăm în rezultat

E ca și cum ai desena două matrice pe hârtie și le-ai aduna element cu element. Simplu, dar ineficient pentru matrice mari.

### Implementare:
```cpp
#include <fstream>
using namespace std;

int main() {
    ifstream fin("matrice_rara.in");
    ofstream fout("matrice_rara.out");
    
    int n, m, N1, N2;
    fin >> n >> m >> N1 >> N2;
    
    // Primul semn că ceva nu e în regulă:
    int A[1000][1000] = {0};  // Pentru test, folosim dimensiuni mici
    int B[1000][1000] = {0};  // În realitate ar trebui 1.000.000
    
    // Citim prima matrice
    for(int i = 0; i < N1; i++) {
        int x, y, val;
        fin >> x >> y >> val;
        A[x][y] = val;
    }
    
    // Citim a doua matrice
    for(int i = 0; i < N2; i++) {
        int x, y, val;
        fin >> x >> y >> val;
        B[x][y] = val;
    }
    
    // Numărăm elementele nenule din rezultat
    int count = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(A[i][j] + B[i][j] != 0) {
                count++;
            }
        }
    }
    
    // Scriem rezultatul
    fout << count << '\n';
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(A[i][j] + B[i][j] != 0) {
                fout << i << " " << j << " " << A[i][j] + B[i][j] << '\n';
            }
        }
    }
    return 0;
}
```

### De ce nu merge:
1. **Memoria necesară:**
   * Pentru n = m = 1.000.000:
   * Fiecare matrice = 1.000.000 × 1.000.000 × 4 bytes
   * Total: ~4TB de RAM (Un laptop obișnuit are 8-16GB RAM, deci no way)

2. **Timp de execuție:**
   * Foarte rapid, pentru că dă crash

## Abordarea 2: Interclasare pe Stack (70 puncte)

În loc să construim matricele complete, lucrăm doar cu elementele nenule stocate ca triplete (linie, coloană, valoare). Ideea principală este să "împletim" cele două liste de triplete:

1.  Comparăm elementele din ambele liste după poziție (linie, coloană)
2.  Dacă poziția din prima matrice e "mai mică" lexicografic, o punem în rezultat
3.  Dacă poziția din a doua matrice e "mai mică", o punem în rezultat
4.  Dacă avem aceeași poziție, adunăm valorile și punem suma în rezultat (dacă nu e zero)

E ca și cum ai avea două liste sortate de numere și vrei să le interclasezi, păstrând ordinea, dar aici comparăm după două criterii (linie și coloană) și mai și adunăm valorile când găsim aceeași poziție.

### Implementare:
```cpp
#include <fstream>
using namespace std;

struct Triplet {
    int x, y, valoare;
};

int main() {
    ifstream fin("matrice_rara.in");
    ofstream fout("matrice_rara.out");
    
    int n, m, N1, N2;
    fin >> n >> m >> N1 >> N2;
    
    Triplet A[N1], B[N2], Rez[N1 + N2];
    
    // Citim prima matrice
    for(int i = 0; i < N1; i++) {
        fin >> A[i].x >> A[i].y >> A[i].valoare;
    }
    
    // Citim a doua matrice
    for(int i = 0; i < N2; i++) {
        fin >> B[i].x >> B[i].y >> B[i].valoare;
    }
    
    // Interclasare
    int i = 0, j = 0, k = 0;
    while(i < N1 && j < N2) {
        if(A[i].x < B[j].x || (A[i].x == B[j].x && A[i].y < B[j].y)) {
            Rez[k++] = A[i++];
        }
        else if(A[i].x > B[j].x || (A[i].x == B[j].x && A[i].y > B[j].y)) {
            Rez[k++] = B[j++];
        }
        else {
            int suma = A[i].valoare + B[j].valoare;
            if(suma != 0) {
                Rez[k] = {A[i].x, A[i].y, suma};
                k++;
            }
            i++; j++;
        }
    }
    
    // Copiem elementele rămase
    while(i < N1) Rez[k++] = A[i++];
    while(j < N2) Rez[k++] = B[j++];
    
    // Afișăm rezultatul
    fout << k << '\n';
    for(int idx = 0; idx < k; idx++) {
        fout << Rez[idx].x << ' ' << Rez[idx].y << ' ' << Rez[idx].valoare << '\n';
    }
    
    return 0;
}
```

### De ce nu merge mereu:
* Stack: "Am o limită de 8MB"
* Noi: "Avem nevoie de 14.4MB"
* Stack: "stack overflow"

## Abordarea 3: Interclasare pe Heap (100 puncte)

Folosim exact același algoritm ca în abordarea 2, dar cu o diferență crucială în implementare: alocăm memoria dinamic, pe heap, în loc de stack.

1.  Alocăm dinamic trei vectori: unul pentru fiecare matrice și unul pentru rezultat
2.  Aplicăm același algoritm de interclasare ca mai sus
3.  La final, eliberăm memoria alocată

E ca și cum ai avea un depozit mare (heap) în loc de o cameră mică (stack) pentru a stoca datele. Algoritmul e identic, doar "locul de stocare" diferă.

### Implementare:
```cpp
#include <fstream>
using namespace std;

struct Triplet {
    int x, y, valoare;
};

int main() {
    ifstream fin("matrice_rara.in");
    ofstream fout("matrice_rara.out");
    
    int n, m, N1, N2;
    fin >> n >> m >> N1 >> N2;
    
    // Alocăm dinamic
    Triplet* A = new Triplet[N1];
    Triplet* B = new Triplet[N2];
    Triplet* Rez = new Triplet[N1 + N2];
    
    // Citim prima matrice
    for(int i = 0; i < N1; i++) {
        fin >> A[i].x >> A[i].y >> A[i].valoare;
    }
    
    // Citim a doua matrice
    for(int i = 0; i < N2; i++) {
        fin >> B[i].x >> B[i].y >> B[i].valoare;
    }
    
    // Aceeași interclasare ca mai sus
    int i = 0, j = 0, k = 0;
    while(i < N1 && j < N2) {
        if(A[i].x < B[j].x || (A[i].x == B[j].x && A[i].y < B[j].y)) {
            Rez[k++] = A[i++];
        }
        else if(A[i].x > B[j].x || (A[i].x == B[j].x && A[i].y > B[j].y)) {
            Rez[k++] = B[j++];
        }
        else {
            int suma = A[i].valoare + B[j].valoare;
            if(suma != 0) {
                Rez[k] = {A[i].x, A[i].y, suma};
                k++;
            }
            i++; j++;
        }
    }
    
    while(i < N1) Rez[k++] = A[i++];
    while(j < N2) Rez[k++] = B[j++];
    
    fout << k << '\n';
    for(int idx = 0; idx < k; idx++) {
        fout << Rez[idx].x << ' ' << Rez[idx].y << ' ' << Rez[idx].valoare << '\n';
    }
    
    // Eliberăm memoria
    delete[] A;
    delete[] B;
    delete[] Rez;
    
    return 0;
}
```

### De ce funcționează:
1. **Avantaje memorie:**
   * 14.4MB nu e nimic pentru heap
2. **Performanță:**
   * O(N1 + N2) - liniară
   * Procesăm doar elementele nenule

## Exemplu Pas cu Pas:
```
Input:
3 3 2 2       // n = 3, m = 3, N1 = 2, N2 = 2
              // prima matrice
1 1 5         // la (1, 1) valoarea 5
2 2 3         // la (2, 2) valoarea 3
              // a doua matrice
1 1 -2        // la (1, 1) valoarea -2
3 3 4         // la (3, 3) valoarea 4

Procesare:
1. (1,1): 5 + (-2) = 3 (am valoare diferita de 0 în ambele matrice)
2. (2,2): 3 (doar în prima matrice)
3. (3,3): 4 (doar în a doua matrice)

Output:
3
1 1 3
2 2 3
3 3 4
```

## Concluzie
Al doilea approach (interclasarea pe stack) o să ia 70 de puncte. Dat fiind că nu ați învățat alocare dinamică, iar pe prof îl interesează doar să luați peste 40 de puncte, eu zic că e good enough. Dar am zis să vedeți și cum arată soluția de 100 de puncte.
