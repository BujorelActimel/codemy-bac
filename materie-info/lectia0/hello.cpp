#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int divizor = 1, suma = 0;

    while (divizor <= n) {
        if (n % divizor == 0) {
            suma += divizor;
        }
        divizor++;
    }
    
    cout << suma << '\n';

    return 0;
}
