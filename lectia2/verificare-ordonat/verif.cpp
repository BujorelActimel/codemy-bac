#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int first, second;
    cin >> first;
    for (int i = 1; i < n; i++) {
        cin >> second;
        if (first > second) {
            cout << "NU\n";
            return 0;
        }
        first = second;
    }

    cout << "DA\n";
    return 0;
}
