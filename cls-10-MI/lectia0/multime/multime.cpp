#include <iostream>
#include <string>

using namespace std;

struct Multime {
    int cardinal = 0;
    int elemente[100];

    void adaug(int numar) {
        for (int i = 0; i < cardinal; i++) {
            if (elemente[i] == numar) {
                return;
            }
        }
        elemente[cardinal] = numar;
        cardinal++;
    }

    void afiseazaElemente() {
        for (int i = 0; i < cardinal; i++) {
            cout << elemente[i] << ' ';
        }
        cout << '\n';
    }
};

int main() {
    Multime A;
    cout << A.cardinal << '\n'; // 0
    A.afiseazaElemente(); // 

    A.adaug(10);
    cout << A.cardinal << '\n'; // 1
    A.afiseazaElemente(); // 10

    A.adaug(13);
    cout << A.cardinal << '\n'; // 2
    A.afiseazaElemente(); // 10 13

    A.adaug(10);
    cout << A.cardinal << '\n'; // 2
    A.afiseazaElemente(); // 10 13

    return 0;
}
