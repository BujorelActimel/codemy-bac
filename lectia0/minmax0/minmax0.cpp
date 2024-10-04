#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"n=";
    cin>>n;
    int a[n + 1];
    for(int i=1; i<=n; i++)
        cin>>a[i];
    
    int max=a[1],min=a[1];
    for(int i=1; i<=n; i++) {
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }
    cout<<min<<" "<<max << "\n";
    return 0;
}