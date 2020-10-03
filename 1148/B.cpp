
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define eb          emplace_back
#define c(P)        cout<<P<<"\n"

const ll N   =  500005;
const ll mod = 1e9 + 7;

using namespace std;

signed main(){

 ios_base::sync_with_stdio(false);   
      cin.tie(NULL);
     ll n,m,k,x=0,y=0,c=0,ans=-1,ta,tb;
  cin>>n>>m>>ta>>tb>>k;
  ll a[n],b[m];
  for (ll i = 0; i < n; ++i)
  {
  cin>>a[i];
  a[i]+=ta;
  }
  for (ll i = 0; i < m; ++i)
  {
    cin>>b[i];
  }
  if(k>=n)
  {
    c(-1);
    return 0;
  }
  for (ll i = 0; i < n; ++i)
  {
    if(k<0)
        break;
     x = lower_bound(b,b+m,a[i])- b;
     y = x+k;
    // c(x);
     if(y>=m)
     {
      c(-1);
      return 0;
     }
     ans = max(ans,b[y]+tb);
     k--;
  }
  cout<<ans<<"\n";
      return 0;
    }