#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c0=0,e=0;
        int max=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==0)
            c0++;
            else
            e++;
            if(x>max){
                max=x;
            }
        }
        if(c0>e+1){
            if(max!=1){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else
        cout<<0<<endl;
    }
    return 0;
}