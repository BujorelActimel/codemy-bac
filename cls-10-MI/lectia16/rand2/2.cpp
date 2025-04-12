#include <iostream>
#include <fstream>

using namespace std;

int mult(int n, int f[]){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(f[i]==f[j]){
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    ifstream fin("date.in");

    int f[400];

    int nr, n = 0;
    while (fin >> nr) {
        f[n] = nr;
        n++;
    }

    int k = n;
    while (!mult(k, f)) {
        k--;
    }
    cout << k << '\n';
    
    fin.close();
    return 0;
}