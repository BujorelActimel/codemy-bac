#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;


    int Min = 1000;
    int rezultat = 0;
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        
        int diferenta = x > y ? x - y : y - x;
        // int diferenta = abs(x - y);

        if (diferenta <= Min) {
            Min = diferenta;
            rezultat = i;
        }
    }

    cout << rezultat << '\n';

    return 0;
}