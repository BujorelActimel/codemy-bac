#include <iostream>

using namespace std;

int main() {
    int n;
    int pare = 0, impare = 0;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            pare++;
        }
        else {
            impare++;
        }
    }
    // if (pare > impare) {
    //     cout << pare - impare << '\n';
    // }
    // else {
    //     cout << impare - pare << '\n';
    // }
    cout << abs(pare - impare) << '\n';
}