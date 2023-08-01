#include<bits/stdc++.h>
using namespace std;
int mygcd(int a,int b){
    if(b==0) return a;
    return mygcd(b,a%b);
}
int main(){
    cout<<mygcd(12,18)<<endl;
    int a,b;
    cin>>a>>b;
    while(b>0){
        int temp=a;
        a=b;
        b=temp%b;
    }
    cout<<a<<endl;
    return 0;
}