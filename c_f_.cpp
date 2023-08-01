#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        unordered_map<char,int> m;
        for(int i=0;i<4;i++){
            m[s[i]]++;
        }
        if(m.size()==1){
            cout<<-1<<endl;
            continue;
        }
        int flag=0;
        for(auto a: m){
            if(a.second>2){
                flag=1;
            }
        }
        if(flag==1){
            cout<<6<<endl;
        }
        else {
            cout<<4<<endl;
        }
    }
    return 0;
}