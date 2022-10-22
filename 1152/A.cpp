#include<bits/stdc++.h>

using namespace std;

int main(){
   
    int n,m,k,x=0,y=0,c=0,q,ans=0;
    cin>>n>>m;
    int a[n],b[m];
    for (ll i = 0; i < n; ++i)
    {
    cin>>a[i];
    if(a[i]%2==0)
      x++;
    }
    for (ll i = 0; i < m; ++i)
    {
     cin>>b[i];
     if(b[i]%2==0)
      y++;
    }
    ans = min(x,(m - y)) + min(y,(n - x));
    cout << ans << '\n';
    }
