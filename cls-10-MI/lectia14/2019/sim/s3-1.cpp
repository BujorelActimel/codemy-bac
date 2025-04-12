#include <iostream>

using namespace std;

void inserare(int &n) {
    int p = 1;
    int nrNou = 0;
    while (n > 9) {
        int uc = n % 10;
        n /= 10;
        nrNou += (p * uc);
        p *= 10;
        nrNou += (p * abs(uc - n % 10));
        p *= 10;
    }
    n = nrNou + p * n;
}

int main() {
    int n = 7255;
    inserare(n);
    cout << n << '\n';
    return 0;
}
