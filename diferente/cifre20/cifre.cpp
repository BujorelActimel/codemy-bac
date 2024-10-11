#include <iostream>

using namespace std;

int main() {
    int n, r = 0, i = 0 , x;
    cin >> n;
    while (n != 0) {
        cin >> x;
        while (x != 0) {
            x = x/10;
            i++;
        }
        if (i % 2 != 0) r++;
        i = 0;
        n--;
    }
    cout << r << '\n';
    return 0;
}