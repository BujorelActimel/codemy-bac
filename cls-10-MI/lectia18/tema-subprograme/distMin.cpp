#include <iostream>
using namespace std;

int DistMin(int a[], int n, int x, int y) {
    if (x == y) {
        return 0;
    }

    int pozitiiX[n], pozitiiY[n];
    int lenX = 0, lenY = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            pozitiiX[lenX] = i;
            lenX++;
        }
        if (a[i] == y) {
            pozitiiY[lenY] = i;
            lenY++;
        }
    }

    int rezultat = abs(pozitiiX[0] - pozitiiY[0]);

    for (int i = 0; i < lenX; i++) {
        for (int j = 0; j < lenY; j++) {
            cout << pozitiiX[i] << ' ' << pozitiiY[j] << '\n';
            int diferentaCurenta = abs(pozitiiX[i] - pozitiiY[j]);
            rezultat = min(rezultat, diferentaCurenta);
        }
    }
    
    return rezultat;
}

int main() {
    int a[] = {2,7,1,2,3,2,7,2,1,3,8,9,7};
    int x = 7, y = 3;

    cout << DistMin(a, 13, x, y) << '\n';

    return 0;
}

// a = (2,7,1,2,3,2,7,2,1,3,8,9,7) 
// x = 7
// y = 3,

// x = {1, 6, 12}
// y = {4, 9}