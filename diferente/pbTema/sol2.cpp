/*
    Solutia 2: (vector de frecventa)

    Pas 1: Initializez un vector de 1001 elemente cu 0 (pentru ca elementele sunt de la 1 la 1000)

    Pas 2: Citesc elementele si numar de cate ori apare fiecare element.

    Pas 3: La final merg prin toate numerele posibile (adica de la 0 la 1000)
    si daca numarul curent a aparut macar o odata (> 0) atunci il afisez
*/

#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    ifstream fin("date.in");
    ofstream fout("date.out");

    int frecventa[1001] = {0};

    int n;
    fin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int numarCurent = a[i];
        frecventa[numarCurent]++; // adaug 1 la numaratoarea elementului respectiv
    }

    for (int i = 0; i < 1000; i++) {
        if (frecventa[i] > 0) { // daca numarul i a apraut cel putin o data
            // il afisez
            fout << i << ' ';
        }
    }

    fin.close();
    fout.close();
    return 0;
}