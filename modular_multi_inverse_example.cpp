#include<bits/stdc++.h>
using namespace std;
// There are N children and K toffees. K < N
// Count the number of ways to distribute toffee
// among N students such that each students get
// 1 toffee only --> nCk % M, M = 10^9+7
// · <· 10 ·^·6, · K· <·N· <· 10^· 6 ·
// ¦ ! / ((n-r) ! * r !)
const int N=1e6+10;
int fact[N];
const int M=1e9+7;
int binomial_expo(int a,int b){
    int ans=1;
    while(b>0){
        if(b&1){
            ans=(ans*1LL*a)%M;
        }
        a=(a*1LL*a)%M;
        b=b>>1;
    }
    return ans;
}
int main()
{
    fact[0]=1;
    for(int i=1;i<N;i++){
        fact[i]=(fact[i-1]*i)%M;
    }
    int q;
    cin>>q;
    while(q--){
        int n,r;
        cin>>n>>r;
        //Formula (n!/(r!(n-r)!))%M
        // =((n!%M)*((r!(n-r)!)%M^-1)%M)%M
        //A^-1= (A^M-2)%M
        int num=fact[n];
        int deno= (fact[r]*1LL*fact[n-r])%M;
        int MMI_of_deno=binomial_expo(deno,M-2);
        // cout<<num<<endl;
        cout<<(MMI_of_deno*1LL*num)%M<<endl;
        // cout<<num*MMI_of_deno<<endl;
        // cout<<binomial_expo(2,10)<<endl;
    }
    
    return 0;
}