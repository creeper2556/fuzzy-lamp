#include<bits/stdc++.h>
#define ll long long
#define MAXN (int(5e2)+5)

using namespace std;
int n,k,a[MAXN][MAXN],b[MAXN][MAXN];

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef TEST    
    freopen("../../in","r",stdin);
    freopen("../../out","w",stdout);
#else
    freopen("square.in","r",stdin);
    freopen("square.out","w",stdout);    
#endif
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            bool c[MAXN];
            int ans=0;
            memset(c,0,sizeof(c));
            for(int ii=i;ii<=n;ii++){
                for(int jj=j;jj<=n;jj++){
                    c[a[ii][jj]]=1;
                }
            }
        for(int k=1;k<=n;k++){
            ans+=c[i]; 
        }
        cout<<ans<<" ";
        }
        cout<< '\n';
    }

    return 0;
}