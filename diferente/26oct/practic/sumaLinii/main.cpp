#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    for (int i=0; i<n; i++){
        int suma = 0;
        for (int j=0; j<m; j++){
            suma += a[i][j];
        }
        cout << suma << ' ';
    }
    cout << '\n';
    return 0;
}