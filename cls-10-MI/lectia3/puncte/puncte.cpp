#include <iostream>
#include <cmath>

using namespace std;

struct Punct {
    int x, y;
};

int main() {
    int n;

    cin >> n;

    Punct punct;

    float Max = 0;
    int cnt = 1;

    for (int i = 0; i < n; i++) {
        cin >> punct.x >> punct.y;
        float dist = sqrt(punct.x*punct.x + punct.y*punct.y); // pitagora

        if (dist > Max) {
            Max = dist;
            cnt = 1;
        }
        else if (dist == Max) {
            cnt++;
        }
    }

    Max *= 100000;
    int intMax = Max / 100;
    Max = float(intMax) / 1000;

    cout << Max << ' ' << cnt << '\n';

    return 0;
}
