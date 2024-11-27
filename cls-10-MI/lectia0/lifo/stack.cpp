// Creează un program care verifică dacă o secvență de paranteze 
// este corect echilibrată (ex. (()) este corect, (() nu este).

#include <iostream>
#include <stack>

using namespace std;

// implementeaza functia
bool verificaParanteze(string expresie) {
    // aici
}

int main() {
    string expresie;
    cout << "Introdu expresia: ";
    cin >> expresie;

    if (verificaParanteze(expresie)) {
        cout << "Expresia este echilibrata!" << endl;
    } else {
        cout << "Expresia NU este echilibrata!" << endl;
    }

    return 0;
}
