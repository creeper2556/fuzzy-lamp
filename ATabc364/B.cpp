#include<bits/stdc++.h>
#define ll long long
#define MAXN (int)60
#define FRE
using namespace std;
ll h,w,ii,jj;
bool mp[MAXN][MAXN];
char op[MAXN];
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef FRE    
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    cin>> h>> w>> ii>> jj;
    for (ll i = 1; i <= h; i++)
    {
        for (ll j = 1; j <= w; j++)
        {
            char c;
            cin >>c;
            mp[h][w-1]=(c=='#');
        }
    }
    cin>> op;
    int len = strlen(op);
    for (ll i = 0; i < len; i++)
    {
        //lrud
        if ((op[i]=='U')&&(ii>1)&&!(mp[ii-1][jj]))ii--;
        if ((op[i]=='D')&&(ii<h)&&!(mp[ii+1][jj]))ii++;
        if ((op[i]=='L')&&(jj>1)&&!(mp[ii][jj-1]))jj--;
        if ((op[i]=='R')&&(jj<w)&&!(mp[ii][jj+1]))jj++;
    }
    cout<<ii<<' '<<jj;
    return 0;
}