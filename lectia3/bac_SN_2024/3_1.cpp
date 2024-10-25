#include <iostream>

using namespace std;

int e_prim(int n) {
    int nrDivizori = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            nrDivizori++;
        }
    }
    return nrDivizori == 2;
}

int main() {
    int n;
    cin >> n;

    int primul = 0;
    for (int i = 2; i < n; i++) {
        if (e_prim(i)) {
            if (primul == 0) {
                primul = i;
                continue;
            }
            if (primul * i == n) {
                cout << 1 << '\n';
                return 0;
            }
            if (primul * i > n) {
                cout << 0 << '\n';
                return 0;
            }
            primul = i;
        }
    }
    return 0;
}


// n = 35

// primul = 5