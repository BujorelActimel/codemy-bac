#include <iostream>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;

    int a[n * k];

    int poz = 0;

    for(int i = 1; i <= n; i++) {
        for (int j = 0; j < k; j++) {
            a[poz] = i;
            poz++;
        }
    }

    for (int i = 0; i < n * k; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
}