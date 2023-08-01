//https://www.eolymp.com/en/contests/12786/problems/121482
#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int flag=1;
    
    double low=-1e9;
    double high=1e9+10;
    if(a<0){
        low=1e9+10;
        high=-1e9;
    }
    while(high-low>0.00000000001){
        double mid=(high+low)/2;
        if(abs(a)*mid*mid*mid+b*mid*mid+abs(c)*mid+d<=0){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    // low=flag*low;
    cout<<setprecision(10);
    cout<<fixed<<low<<endl;
    return 0;
}