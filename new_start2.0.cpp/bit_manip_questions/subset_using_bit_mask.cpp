#include<bits/stdc++.h>
using namespace std;
int binary_expo(int a,int b){
    int ans=1;
    while(b>0){
        if(1&b){
            ans=ans*a;
        }
        b=b>>1;
        a=a*a;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int size=binary_expo(2,n);//1<<n
    cout<<size<<endl;
    // int n;
    // cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<size;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            if((i>>j)&1){
                temp.push_back(j);
            }
        }
        v.push_back(temp);
    }
    int count=0;
    for(auto x: v){
        int sum=0;
        for(auto b : x){
            sum+=p[j];
            mem+=g[i];
        }
        if(sum>=minnn&&mem<=n){
            count++;
        }
        // cout<<endl;
    }
    return 0;
}