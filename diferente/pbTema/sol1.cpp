/*
    Solutia 1:

    Pas 1: Iau sirul de numere si il sortez,
    deci daca aveam sirl initual 1 3 9 3 8 2 9
    o sa devina 1 2 3 3 8 9 9

    Pas 2: Nu e destul sa il sortez, trebuie sa afisam
    fiecare valoare doar o singura data, fara duplicate.
    iteram de la primul pana la penultimul element si verificam daca este diferit
    de elementul din dreapta sa, caz in care (pentru ca sunt sortate, altfel nu merge),
    pot sa il afisez, pentru ca stiu ca nu o sa mai existe in sir.
    daca aveam 1 2 3 3 8 9 9 
    afisez 1 pentru ca 1 e diferit de 2
    afisez 2 pentru ca 2 e diferit de 3
    nu afise 3 pentru ca are langa alt 3
    afisez al doilea 3 pentru ca in dreapta lui e 8
    nu afisez 9 pentru ca in dreapta lui are tot 9
    am terminat de iterat, si afisez ultimul element (pentru ca am mers de la primul la PENultimul)

    !!! Am mers doar pana la penultimul pentru ca nu pot sa verific in dreapta ultimului element

*/

#include <fstream>
#include <algorithm> // pentru functia sort()

using namespace std;

int main() {
    ifstream fin("date.in");
    ofstream fout("date.out");

    int n;
    fin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }

    sort(a, a + n); // functia asta trebuie inlocuita cu un algoritm de sortare - tema :)

    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            fout << a[i] << ' ';
        }
    }
    fout << a[n - 1];

    fin.close();
    fout.close();
    return 0;
}