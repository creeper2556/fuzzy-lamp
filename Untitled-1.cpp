#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// #ifdef FRE    
//     freopen("C:\\Users\\Administrator\\Desktop\\OI\\in","r",stdin);
//     freopen("C:\\Users\\Administrator\\Desktop\\OI\\out","w",stdout);
// #endif
    char a[]={'a','3','0','.','i','n','\0'};
    char b[]={'a','3','0','.','a','n','s','\0'};
    for(;a[2]<='9';a[2]++){
        freopen(a,"w",stdout);
        cout<<endl;
        b[2]=a[2];
        freopen(b,"w",stdout);
        cout<<endl;
    }
    return 0;
}