#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int b=3;
    cin>>a>>b;
    // cout<<(b<<a)<<endl;
    int sign =-1;
    if(a<0&&b>0||a>0&&b<0)
    {
        sign=-1;
    }
    cout<<sign*((a>>(abs(b)-1))+1)<<endl;
    
    return 0;
}