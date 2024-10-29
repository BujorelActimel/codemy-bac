#include <iostream>
#include <fstream>
using namespace std;
bool este_prim(int x){
    if (x<2){
        return 0;
    }
    for (int d=2; d<=x/2; d++){
        if (x%d==0)
        {
            return 0;
        }
    }
    return 1;
}
int main() {
    ifstream fin("date.in");
    ofstream fout("date.out");
    int n, m;
    fin>>n>>m;

    int am_afisat = 0;

    for (int i=n+1; i<=m-1; i++)
    {
        if (este_prim(i)){
            fout<<i<<" ";
            am_afisat = 1;
        }
    }
    if(am_afisat == 0) {
        fout << "Niciun numar prim\n";
    }
    return 0;
}