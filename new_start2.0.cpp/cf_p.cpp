#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int t;
    cin>>t;
    while(t--){
        // int n;
        // cin>>n;
        string s;
        cin>>s;
        int count=0;
        int m=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }
            else{
                m=max(m,count);
                count=0;
            }
        }
         m=max(m,count);
         count=0;
        if(s.size()==1&&s=="1"){
            cout<<1<<endl;
            continue;
        }
        if(m==s.size()){
            cout<<m*1LL*m<<endl;
            continue;
        }
          s+=s;
        // cout<<s<<endl;
        count=0;m=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }
            else{
                m=max(m,count);
                count=0;
            }
        }
         m=max(m,count);
         count=0;
        //  cout<<m<<endl;
         int j=1;
         int ans=0;
         while(m>0){
            ans=max(ans,m*j);
            j++;
            m--;
         }
         cout<<ans<<endl;
    }
    return 0;
}