#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // constant
    int constant = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i+1]) {
            constant = 0;
            break;
        }
    }
    if (constant) {
        cout << "sir constant\n";
        return 0;
    }

    // crescator / strict crescator
    int crescator = 1;
    int strict = 1;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i+1]) {
            strict = 0;
        }
        if (a[i] > a[i+1]) {
            crescator = 0;
            break;
        }
    }

    if (strict && crescator) {
        cout << "sir strict crescator\n";
        return 0;
    } else if (!strict && crescator) {
        cout << "sir crescator\n";
        return 0;
    }

    // descrescator / strict descrescator
    int descrescator = 1;
    strict = 1;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i+1]) {
            strict = 0;
        }
        if (a[i] < a[i+1]) {
            descrescator = 0;
            break;
        }
    }

    if (strict && descrescator) {
        cout << "sir strict descrescator\n";
        return 0;
    } else if (!strict && descrescator) {
        cout << "sir descrescator\n";
        return 0;
    }

    cout << "sir neordonat\n";

    return 0;
}
