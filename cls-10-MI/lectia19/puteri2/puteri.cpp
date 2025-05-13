#include <iostream>
#include <cmath>

using namespace std;

int puteri2(int a, int n, int p) {
    if (n == 0) {
        return 1;
    }

    if (n % 2 == 1) {
        return (a * (puteri2(a, n-1, p) % p)) % p;
    }
    else {
        int partial = puteri2(a, n/2, p) % p;
        return (partial * partial) % p;
    }
}

int main() {

    int a, n, p;

    cin >> a >> n >> p;

    cout << puteri2(a, n, pow(10, p)) << '\n';

    return 0;
}