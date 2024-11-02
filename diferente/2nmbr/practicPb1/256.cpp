#include <iostream>

using namespace std;

bool e_fibo(int x) {
    if (x == 1) {
        return true;
    }
    int a = 1;
    int b = 1;

    while (a + b < x) {
        int c = a + b;
        a = b;
        b = c;
    }
    return a + b == x;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (e_fibo(x)) {
            cout << "DA\n";
        }
        else {
            cout << "NU\n";
        }
    }
    return 0;
}