#include<bits/stdc++.h>
using namespace std;
long long M=1e9+7;
void binary(int x){
    int count=0;
    for(int i=31;i>=0;i--){
        if(1&(x>>i)){
        cout<<"1";
        count++;
        }
        else
        cout<<"0";
    }
    cout<<"-> "<<count<<endl;
}
int main(){
    for(int i=3;i<1e5;i++){
        if(i%3==0){
        binary(i);cout<<endl;
        }
    }
    return 0;
}