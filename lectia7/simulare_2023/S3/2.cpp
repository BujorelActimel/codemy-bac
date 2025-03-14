#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] / 10 == 2 || a[i] / 10 == 3) {
            a[i] = 23;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }

    cout << '\n';
    
    return 0;
}