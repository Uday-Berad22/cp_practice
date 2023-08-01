//Calculate factorial of numbers from 1 to N in O(N)
#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int N=1e5; 
const int M=1e9+7;
int fact[N+1];
void fun_cal_fact(){
    fact[0]=fact[1]=1;
    for(int i=2;i<=N;i++)
    {
        fact[i]=(fact[i-1]*i)%M;
    }
}
signed main()
{
    fun_cal_fact();
    cout<<fact[N]<<endl;
    return 0;
}