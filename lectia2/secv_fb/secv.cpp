#include <fstream>

using namespace std;

bool allDifferent(int a[], int start, int sfarsit) {
    for (int i = start; i < sfarsit - 1; i++) {
        for (int j = i + 1; j < sfarsit; j++) {
            if (a[i] == a[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    ifstream fin("secv_fb.in");
    ofstream fout("secv_fb.out");

    int n, k;
    fin >> n >> k;

    int a[n];


    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }

    int raspuns = 0;

    for (int i = 0; i <= n - k ; i++) {
        if (allDifferent(a, i, i + k)) {
            raspuns++;
        }
    }

    fout << raspuns << '\n';
    return 0;
}
