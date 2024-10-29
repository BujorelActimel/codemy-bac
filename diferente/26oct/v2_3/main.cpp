#include <iostream>
#include <fstream>
using namespace std;

bool este_prim(int numar) {
    if (numar < 2) {
        return 0;
    }
    for (int d=2; d<=numar/2; d++){
        if (numar%d==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    ifstream fin("date.in");
    ofstream fout("date.out");
    int n, x;
    fin>>n;
    for (int i=0; i<n; i++)
    {
        fin>>x;
        if (este_prim(x)) {
            fout<<x<<" ";
        }
    }
    return 0;
}