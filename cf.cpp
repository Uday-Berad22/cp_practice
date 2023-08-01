#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int pre[n+1]={0};
        pre[0]=0;
        for(int i=1;i<n+1;i++)
        {
            int x;
            cin>>x;
            pre[i]=pre[i-1]+x;
        }
        while(q--)
        {
            int a,b,c;
            cin>>a>>b>>c;
            int y=pre[n]+pre[a-1]-pre[b];
            if((y+(c*(b-a+1)))%2!=0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}