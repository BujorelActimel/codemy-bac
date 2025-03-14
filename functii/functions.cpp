#include <iostream>

using namespace std;

int fact(int n) {
    return fact(n-1) * n;
}

int main() {
    cout << fact(4);
    return 0;
}
