#include<bits/stdc++.h>
using namespace std;
const int N=1e9+7;
int binary_expo(int a,int b){
    int ans=1;
    while(b){
        if(b&1){
            ans=(ans*1LL*a)%N;
        }
        a=(a*1LL*a)%N;
        b>>=1;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<binary_expo(a,b)<<endl;
    return 0;
}
