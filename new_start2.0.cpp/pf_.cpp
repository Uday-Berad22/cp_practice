#include<bits/stdc++.h>
using namespace std;
const int N=1e6+1;
int hp[N]={0};

int main(){
    for(int i=2;i<N;i++){
        if(hp[i]==0){
            for(int j=i;j<N;j=j+i){
                hp[j]=i;
            }
        }
    }
    unordered_map<int,int> m;
    int n,q;
    cin>>n>>q;
    // vector<int> v;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        while(x>1){
        int pf=hp[x];
        while(x%pf==0){
            // count++;
            // if(m[pf]!=0)
            // can_re++;
            // cout<<pf<<endl;
            m[pf]++;
            // v.push_back(pf);
            x=x/pf;
        }
    }

    }
   
    
    // int x=60;
    while(q--){
    int x;
    cin>>x;
    int count=0;
    int can_re=0;
    while(x>1){
        int pf=hp[x];
        while(x%pf==0){
            count++;
            if(m[pf]!=0)
            can_re++;
            cout<<pf<<endl;
            x=x/pf;
        }
    }
    if(count<2){
        cout<<"NO"<<endl;
    }
    else if(count==2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<can_re<<" "<<count<<endl;
        if(count-can_re<=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    }
    return 0;
}
/*
YES
NO
YES
NO
YES
YES
NO
NO
NO
YES
NO
YES
NO
YES
YES
YES
YES
YES
YES
YES
NO
YES
NO
NO
YES
YES
YES
NO
YES
YES
YES
YES
NO
YES
NO
NO
YES
444
500
451
866
907
113
907
922
954
492
269
610
803
86
119
158
386
752
630
437
607
225
667
578
6
455
192
961
848
448
751
93
729
2
4
*/