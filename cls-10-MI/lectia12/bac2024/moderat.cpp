#include <iostream>

using namespace std;

int prim(int n) {
    if (n < 2) {
        return 0;
    }

    int cnt = 2;
    for (int d = 2; d <= n/2; d++) {
        if (n % d == 0) {
            cnt++;
        }
    }
    return cnt == 2;
}

int moderat(int n) {
    int primul = 2;
    int al_doilea = 3;

    while (primul * al_doilea < n) {
        primul = al_doilea;
        al_doilea++;
        while (!prim(al_doilea)) {
            al_doilea++;
        }
    }

    return primul * al_doilea == n;
}

int main() {
    cout << moderat(2) << '\n';

    return 0;
}
