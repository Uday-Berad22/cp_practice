#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int M=1e9+7;
int binary_expo(int a,int b)
{
    int ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans=(ans*a)%M;
        }
        a=(a*a)%M;
        b>>=1;
    }
    return ans;
}
int binary_expo_recc(int a,int b)
{
    if(b==0)
    return 1;
    int temp=binary_expo_recc(a,b/2);
    if(b&1)
    {
        return (((temp*temp)%M)*((a)%M)%M); 
    }
    else{
        return (temp*temp)%M;
    }
}
int binary_expo_normal(int a,int b)
{
    int ans=1;
    while(b>0)
    {
        if(b%2!=0)
        {
            ans=(ans*a)%M;
        }
        a=(a*a)%M;
        b=b/2;
    }
    return ans;
}

signed main()
{
    cout<<binary_expo(2,333333)<<endl;
    cout<<binary_expo_recc(2,333333)<<endl;
    cout<<binary_expo_normal(2,333333)<<endl;
    return 0;
}