#include <iostream>

using namespace std;

// 2, 3, 7, 8 -> nu e patrat perfect
// daca nu 2, 3, 7, 8 -> patrat perfect (NU E CORECT)

int main() {
    int n, x;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        
        int d;
        for (d = 1; d * d < x; d++);

        if (d * d == x) {
            cout << "DA\n";
        }
        else {
            cout << "NU\n";
        }
    }
}