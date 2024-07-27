#include<bits/stdc++.h>
#define ll long long
#define MAXN 15

using namespace std;
ll n,m,t,ans,k;
ll sx,sy,fx,fy;
bool met[MAXN][MAXN],AAAA;
pair<ll,ll> f[3000];

void output(){
    for (ll i = 1; i <= k-1; i++)
    {
        cout<<'('<<f[i].first<<','<<f[i].second<<")->";
    }
    cout<<'('<<f[k].first<<','<<f[k].second<<')'<<endl;
    AAAA=1;
    return;


}
void dfs(ll ax,ll ay){
    // cout<<ax<<" "<<ay<<endl;
    k++;f[k].first=ax;f[k].second=ay;
    if ((ax==fx)&&(ay==fy)){
        output();
    }
    else{
        if(met[ax][ay-1]&&ay>1){
            met[ax][ay-1]=0;
            dfs(ax,ay-1);
            met[ax][ay-1]=1; 
        }
        if(met[ax-1][ay]&&ax>1){
            met[ax-1][ay]=0;
            dfs(ax-1,ay);
            met[ax-1][ay]=1; 
        }
        if(met[ax][ay+1]&&ay<n){
            met[ax][ay+1]=0;
            dfs(ax,ay+1);
            met[ax][ay+1]=1; 
        }
        if(met[ax+1][ay]&&ax<m){
            met[ax+1][ay]=0;
            dfs(ax+1,ay);
            met[ax+1][ay]=1; 
        }
    }
    k--;
    return;
}

int main(){
    // ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // freopen("C:\\Users\\Administrator\\Desktop\\OI\\in","r",stdin);
    // freopen("C:\\Users\\Administrator\\Desktop\\OI\\out","w",stdout);
    cin>>m>>n;
    for (ll i = 1; i <= m; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            cin>>met[i][j];
        }   
    }
    cin>>sx>>sy>>fx>>fy;
    met[sx][sy]=0;
    dfs(sx,sy);
    if (!AAAA)
    {
        cout<<-1;
    }
    
    return 0;
}