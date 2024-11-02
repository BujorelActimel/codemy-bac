#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int rezultate[n];
    int index = 0;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        int a[k];
        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }
        int sortat = 1;
        for (int i = 0; i < k - 1; i++) {
            if (a[i] > a[i + 1]) {
                sortat = 0;
                break;
            }
        }
        rezultate[index++] = sortat;
    }
    for (int i = 0; i < n; i++) {
        cout << rezultate[i] << ' ';
    }
    cout << '\n';

    return 0;
}