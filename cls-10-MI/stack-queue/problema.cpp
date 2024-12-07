#include <iostream>
#include "stack.h"
#include "queue.h"

using namespace std;

int main() {
    Stiva s;
    Coada c;

    int numar;
    cin >> numar;

    while (numar != 0) {
        s.push(numar);
        cin >> numar;
    }

    numar = s.pop();

    while (numar % 2 == 1 && !s.isEmpty()) {
        c.push(numar);
        numar = s.pop();
    }

    cout << "Elementele din stiva: \n";
    while (!s.isEmpty()) {
        cout << s.pop() << '\n';
    }

    cout << "Elementele din coada: \n";
    while (!c.isEmpty()) {
        cout << c.pop() << '\n';
    }

    return 0;
}
