#include<bits/stdc++.h>
#define ll long long
#define lb(x) ((x)&(-(x)))
#define MAXN (int)5e5+5

using namespace std;
ll n,m,c[MAXN];

// ll lb(ll x){
//     return x & (-x);
// }

void ad(ll i,ll x){
    while (i<=n)
    {
        c[i]+=x;
        i+=lb(i);
    }
    return;
}

ll gt0(ll i){
    ll x=0;
    while (i>0)
    {
        x+=c[i];
        i-=lb(i);
    }
    return x;
}

ll gt(ll a,ll b){
    return gt0(b)-gt0(a-1);
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef FRE    
    freopen("C:\\Users\\Administrator\\Desktop\\OI\\in","r",stdin);
    freopen("C:\\Users\\Administrator\\Desktop\\OI\\out","w",stdout);
#endif
    cin >>n >>m;
    for (ll i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        ad(i,a);
    }
    for (ll i = 0; i < m; i++)
    {
        ll a;
        cin >> a;
#ifdef FRE
        // cout <<i<<' '<<a<<endl;
#endif
        if(a-1){
            ll x,y;
            cin >>x>>y;
            cout<<gt(x,y)<<endl;
        }
        else{
            ll x,k;
            cin >>x>>k;
            ad(x,k);
        }
    }
    return 0;
}