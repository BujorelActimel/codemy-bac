#include <iostream>
#include <fstream>

using namespace std;

void Calcul(int v[], int k, int &s) {
    s = 0;
    for (int i = k; i < 50; i++) {
        if (v[i] > 0) {
            s += v[i];
        }
    }
}

int main() {
    int v[50];
    for (int i = 0; i < 50; i++) {
        cin >> v[i];
    }

    int x, y;
    cin >> x >> y;

    int s1, s2;

    Calcul(v, x-1, s1);
    Calcul(v, y, s2);

    cout << s1-s2 << '\n';

    return 0;
}


// 1 2 3 4 5 6 7 8 9
//     ^     ^
//     x     y
    
// Calcul(x) = 3 4 5 6 7 8 9
// Calcul(y+1) = 7 8 9
// (-)       = 3 4 5 6
