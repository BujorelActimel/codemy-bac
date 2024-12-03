#include <iostream>
#include "coada.h"
#include "algoritmi.h"

using namespace std;

int main() {
    int n, a, x, y;
    cin >> n >> a >> x >> y;

    Coada c;
    int M[n];
    int nr_elemente = 0;

    c.push(a);
    M[nr_elemente++] = a;


    while (!c.eGoala()) {
        int element = c.pop();
        if (element + x <= n) {
            c.push(element + x);
            M[nr_elemente++] = element + x;
        }

        if (element + y <= n) {
            c.push(element + y);
            M[nr_elemente++] = element + y;
        }
    }

    sort(M, nr_elemente);
    stergeDuplicate(M, nr_elemente);

    for (int i = 0; i < nr_elemente; i++) {
        cout << M[i] << ' ';
    }

    cout << '\n';

    return 0;
}
