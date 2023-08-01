#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    while(t--){
        int n;
        cin>>n;
        stack<int> s;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        vector<int> a;
        for(int i=0;i<n;i++){
            if(s.empty()&&v[i]<0){
                a.push_back(v[i]);
                continue;
            }
            if(v[i]>0){
                s.push(v[i]);
                continue;
            }
            while(!s.empty()&&v[i]<0){
                if(abs(s.top())==abs(v[i])){
                    s.pop();
                    goto label;
                }
                if(abs(v[i])<s.top()){
                    goto label;
                }
                s.pop();
            }
                if(v[i]>0)
                s.push(v[i]);
                else{
                    a.push_back(v[i]);
                }
            label: 
            continue;
        }
        while(!s.empty()){
        a.push_back(s.top());
        s.pop();
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}