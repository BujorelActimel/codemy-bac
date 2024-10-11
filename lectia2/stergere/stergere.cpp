#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "n: ";
    cin >> n;
    int a[n];
    cout << "\nNumerele: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "\nPozitia: ";
    int poz;
    cin >> poz;
    cout << '\n';

    for (int i = poz; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0;
}
