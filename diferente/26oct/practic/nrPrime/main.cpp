#include <iostream>

using namespace std;

bool e_prim(int x){
    if (x<2){
        return 0;
    }
    for (int d=2; d<=x/2; d++){
        if (x%d==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>a[i][j];
        }

    }
    int contor = 0;
    for (int i = 1; i < n; i += 2) {
        for (int j=0; j<m; j++){
            if (e_prim(a[i][j])) {
                contor++;
            }
        }
    }
    cout << contor<< '\n';
    return 0;
}