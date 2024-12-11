#include <iostream>
using namespace std;
///1) la final sunt 4 elemente in stiva 
///2) ultimul introdus in stiva: 4,ultimul introdus in coada 1
int main()
{
    ///3
    int s[100],c[100],vf=0,sf=0,inc=0;
    int n;
    cin>>n;
    while(n>=0)
    {
        s[vf]=n;
        vf++;
        cin>>n;
    }
    while(vf>0)
    {
        int cnt = 0;
        for (int i=1;i<=s[vf-1];i++) {
            if(s[vf-1]%i==0) {
                cnt++;
            }
        }
        if (cnt==2)
        {
            break;   
        } else {
            c[sf]=s[vf-1];
            vf--; 
            sf++;
        }
    }
    cout << "Stack: ";
    while(vf>0)
    {
        cout<< s[vf-1] << ' ';
        vf--;
    }
    cout << "\nCoada: ";
    while(inc < sf)
    {
        cout<<c[inc] << ' ';
        inc++;
    }
    cout << '\n';
    return 0;
}
