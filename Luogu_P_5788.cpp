#include<bits/stdc++.h>

#define ll long long

using namespace std;

struct N
{
    int l;
    int i;
    // int f;
    friend bool operator > (N a,N b){
        return a.i>b.i;
    }
};


stack<N>s;
ll n,f[(int)3e6+5];

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef FRE    
    freopen("C:\\Users\\Administrator\\Desktop\\OI\\in","r",stdin);
    freopen("C:\\Users\\Administrator\\Desktop\\OI\\out","w",stdout);
#endif
    cin>>n;
    for (ll i = 1; i <= n; i++)
    {
        N a;
        cin>>a.l;
        a.i=i;
        while (!(s.empty()||s.top().l>=a.l))
        {
            f[s.top().i]=a.i;
            s.pop();
        }
        s.push(a);
    }
    while (!s.empty())
    {
        f[s.top().i]=0;
        s.pop();
    }
    
    for (ll i = 1; i <= n; i++)
    {
        cout<<f[i]<<' ';
    }
    
    return 0;
}




