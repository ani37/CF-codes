
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define c(P)        cout<<P<<"\n"
#define pii         pair<ll,ll>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define F           first
#define S           second
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,x,n)   for(ll i=x;i<n;i++)
#define frr(i,x,n)  for(ll i=n-1;i>=x;i--)
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree< ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

const ll N   =  500005;
const ll mod = 1e9 + 7;
    ll power(ll a, ll b)    //a is base, b is exponent
    {
        if(b==0)
            return 1;
        if(b==1)
            return a;
        if(b%2 == 1)
            return (power(a,b-1)*a)%mod;
        ll q = power(a,b/2);
        return (q*q)%mod;
    }


void solve()
{
// string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n;
  std::vector<pii> v;
   ordered_set s;
   std::vector<ll> vis(n+1);
  for (ll i = 0; i < n; ++i)
  {
    cin>>k;
    ll a[k];
    x = 1e9;
    ll f=0;
    fr(j,0,k)
    {
    cin>>a[j];
    if(a[j]>x)
    {
        vis[i] =1;
    }
    x = min(a[j],x);
    }
    if(vis[i]){c++;continue;}
    sort(a,a+k);
    v.pb({a[0],a[k-1]});
    s.insert(a[k-1]);
  }
  for (int i = 0; i < n; ++i)
  {
      if(vis[i]==1)
      {
        ans+=(2*(n-c));
      }

  }

  ans +=c+ c*(c-1);
 for (int i = 0; i < v.size(); ++i)
 {
    auto it = s.upper_bound(v[i].S);
     
     x = v[i].F;
     y =s.order_of_key(x+1);
     
     ans+=(s.size()-y);
    
 }


  cout<<ans<<"\n";
}

signed main(){
     
      ios_base::sync_with_stdio(false);   
      cin.tie(NULL);
      ll T=1;
      //cin>>T;
      while(T--)
      {
      solve();
      }
      return 0;
    }