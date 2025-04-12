#include <iostream>
#include <cmath>

using namespace std;

int patratPerfect(int n) {
    // float radical = sqrt(n);
    // return radical == int(radical);

    int i = 1;

    while (i * i < n) {
        i++;
    }

    return i * i == n;
}


int multiplu(int n) {
    int step = n;
    while (!patratPerfect(n)) {
        n += step;
    }

    return n;
}

int main() {
    int n;
    cin >> n;
    cout << multiplu(n) << '\n';

    return 0;
}
