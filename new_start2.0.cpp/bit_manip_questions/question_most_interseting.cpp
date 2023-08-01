#include<bits/stdc++.h>
using namespace std;
int main(){
    int c;
    cin>>c;
    int a=0,b=0;
    int no_of_bits=(int)log2(c)+1;
    vector<int> set_bits_index;
    for(int i=0;i<no_of_bits;i++){
        if((c>>i)&1){
            set_bits_index.push_back(i);
        }
        else{
            a=(a)|(1<<i);
            b=(b)|(1<<i);
        }
    }
    int sz=1<<set_bits_index.size();
    long long   ans=0;
    for(int mask=0;mask<sz;mask++){
        int a_copy=a,b_copy=b;
        for(int i=0;i<set_bits_index.size();i++){
            if(mask>>i&1){
                a_copy=a_copy|(1<<set_bits_index[i]);
            }
            else{
                b_copy=b_copy|(1<<set_bits_index[i]);
            }
        }
        ans=max(ans,a_copy*1LL*b_copy);
    }
    cout<<ans<<endl;
    return 0;
}