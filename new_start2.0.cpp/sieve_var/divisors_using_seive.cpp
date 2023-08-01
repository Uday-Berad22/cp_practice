#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> divisors[N];

int main(){
    for(int i=2;i<N;i++){
        for(int j=i;j<N;j+=i){
            if(divisors[j].size()==0){
                divisors[j].push_back(1);
            }
            divisors[j].push_back(i);
        }
    }
    cout<<divisors[10].size()<<endl;
    return 0;
}