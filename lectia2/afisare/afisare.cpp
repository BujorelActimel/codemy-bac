#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int raspuns = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int nr_div_i = 0;
            for (int d = 1; d <= a[i]; d++) {
                if (a[i] % d == 0) {
                    nr_div_i++;
                }
            }
            int nr_div_j = 2;
            for (int d = 2; d <= a[j] / 2; d++) {
                if (a[j] % d == 0) {
                    nr_div_j++;
                }
            }
            if (nr_div_i == nr_div_j) {
                raspuns++;
            }
        }
    }
    cout << raspuns << '\n';

    return 0;
}
