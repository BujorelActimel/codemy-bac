#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int nr=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int s=a[i]+a[j],p=1;
            while(p<s)
            {
                p*=2;
            }
            if(p==s) {
                nr++;
            }
        }
    }
    cout<<nr << '\n';
    return 0;
} 