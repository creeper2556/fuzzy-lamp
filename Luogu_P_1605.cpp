#include<bits/stdc++.h>
#define ll long long
#define MAXN 10

using namespace std;
int n,m,t,ans;
int sx,sy,fx,fy;
bool met[MAXN][MAXN];
void dfs(int ax,int ay){
    // cout<<ax<<" "<<ay<<endl;
    if ((ax==fx)&&(ay==fy))ans++;
    else{
        if(!met[ax+1][ay]&&ax<n){
            met[ax+1][ay]=1;
            dfs(ax+1,ay);
            met[ax+1][ay]=0; 
        }
        if(!met[ax-1][ay]&&ax>1){
            met[ax-1][ay]=1;
            dfs(ax-1,ay);
            met[ax-1][ay]=0; 
        }
        if(!met[ax][ay+1]&&ay<m){
            met[ax][ay+1]=1;
            dfs(ax,ay+1);
            met[ax][ay+1]=0; 
        }
        if(!met[ax][ay-1]&&ay>1){
            met[ax][ay-1]=1;
            dfs(ax,ay-1);
            met[ax][ay-1]=0; 
        }

    }
    return;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // freopen("C:\\Users\\Administrator\\Desktop\\OI\\P1605_2.in","r",stdin);
    cin>>n>>m>>t;
    cin>>sx>>sy>>fx>>fy;

    for (int i = 1; i <= t; i++)
    {
        int a,b;
        cin>>a>>b;
        met[a][b]=1;
    }
    met[sx][sy]=1;
    dfs(sx,sy);
    cout<<ans;
    return 0;
}