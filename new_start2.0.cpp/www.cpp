#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
   for(int z=0;z<t;z++){
            long long n;
            cin>>n;
            long long x=0;
            int j=0;
            vector<long long > v;
            long long ans;
            char alp[27];
        int k=1;
            for(char i='A';i<='Z';i++){
                alp[k]=i;
                k++;
            }
            // cout<<"HELLO"<<endl;
            for(int i=1;i<=n+26;i++){
                x=x+i*26;
                v.push_back(x);
                if(n<=x){
                    j=i;
                    ans= x;
                    // cout<<"HELLO"<<endl;//
                    break;
                }
                // v.push_back(x);
            }
            if(j<=1){
                cout<<"Case #"<<z+1<<": "<<alp[n]<<endl;
            }
            else {
            float  y=(n-v[j-2])/float(j);
            
            // cout<<"HELLO"<<endl;
            // cout<<y<<endl;
            int kk;
            if(y>int(y)){
                kk=int(y)+1;
            }else{
                kk=int(y);
            }
            cout<<"Case #"<<z+1<<": "<<alp[kk]<<endl;
            }
    }
    return 0;
}