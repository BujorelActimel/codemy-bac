#include <iostream>
#include <fstream>

using namespace std;

int cifra(int n){
    if (n == 0) {
        return 0;
    }

    while(n){
        if(n%2==0){
            return n%10;
        }
        n/=10;
    }
    return -1;
}

int main()
{
    ifstream fin("bac.in");
    int n;
    fin>>n;
    int f[n];

    for (int i = 0; i < n; i++) {
        fin>>f[i];
    }

    int nr[n]={0};
    int contor=0;

    for(int i=0; i<n; i++){
        int ultima_para = cifra(f[i]);
        if(ultima_para!=-1){
            contor++;
            nr[i]=ultima_para;
        }
    }

    for(int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if(nr[j]>nr[i]){
                swap(nr[i], nr[j]);
            }
        }
    }


    if(contor == 0){
        cout<<"nu exista\n";
        return 0;
    }

    // for (int i = 0; i < contor; i++) {
    //     cout << nr[i];
    // }
    // cout << '\n';

    int nou=0;
    for(int i=0; i<contor; i++){
        nou=nou*10+nr[i];
    }

    cout << nou << '\n';
    
    fin.close();
    return 0;
}

// v = 369 113 2 0 33 1354 42

// nr= 6 0 2 0 0 4 2
// sort
// nr= 6422000