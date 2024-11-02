#include <iostream>

using namespace std;

bool putere2(int x) {
    if (x == 1) {
        return true;
    }

    int i = 1;
    while (i * 2 < x) {
        i *= 2;
    }
    return x == i * 2;
}

int main() {
    int n;
    cin >> n;


    for (int i = n ; i >= 0; i--) {
        if (putere2(i)) {
            cout << i << ' ';
            // cout << "N: " << n << '\n';
            n -= i;
            // cout << "N dupa: " << n << '\n';
            i = n;
        }
    }
    if (n) {
        cout << 1;
    }
    
    cout << '\n';
    return 0;
}