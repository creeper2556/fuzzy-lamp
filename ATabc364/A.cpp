#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll n,b=0;
char a[10];

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef FRE    
    freopen("C:\\Users\\Administrator\\Desktop\\OI\\in","r",stdin);
    freopen("C:\\Users\\Administrator\\Desktop\\OI\\out","w",stdout);
#endif
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        if(b==2){cout<<"No";return 0;}
        if(b==1&&a[1]=='w')b=2;
        else if(a[1]=='w')b=1;
        else b=0;
    }
    cout <<"Yes";
    return 0;
}