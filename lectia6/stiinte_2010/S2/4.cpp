#include <iostream>

using namespace std;


int main() {

    int n;
    cin >> n;

    int d = 2;
    int p_max = 0;

    while (n != 1) {
        int p = 0;
        while (n % d == 0) {
            p++;
            n /= d;
        }
        if (p > p_max) {
            p_max = p;
        }
        d++;
    }
    cout << p_max << '\n';
}