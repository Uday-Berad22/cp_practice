#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        string s,temp;
        int flag=0;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]<(d+48)&&flag==0){
                temp.push_back(char(d+48));
                flag=1;
            }
            temp.push_back(s[i]);
        }
        if(flag==0){
            temp.push_back(char(d+48));
        }
        cout<<temp<<endl;
    }
    return 0;
}