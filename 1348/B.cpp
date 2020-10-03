#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define c(P)        cout<<P<<"\n"
#define pii         pair<ll,ll>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define F           first
#define S           second
#define sz(a)       (ll)(a.size())
#define cr(P)       cout<<P<<"\n";return;
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,x,n)   for(ll i=x;i<n;i++)
#define frr(i,x,n)  for(ll i=n-1;i>=x;i--)
using namespace std;
 
 
const ll N   =  500005;
const ll mod = 1e9 + 7;
 
 
 
void solve(){
 
  ll x=0,y=0,c=0,ans=0;
  ll n,m,k;
  cin>>n >> k;
  ll a[n];
  std::set<ll> s;
  for (ll i = 0; i < n; ++i){
      cin >> a[i];
      s.insert(a[i]);
  }
  if(sz(s)>k){
    cr(-1);
  }
  x =1;
  while(sz(s)<k){
      s.insert(x);
      x++;
  }
  vector<ll>v;
  for (ll i = 0; i < n; ++i){
     for(auto it : s){
        v.pb(it);
     }
  }
  c(sz(v));
  for (ll i = 0; i < sz(v); ++i){
      cout << v[i] <<" ";
  }
  c("");
  
 
}
 
signed main(){
     
  ios_base::sync_with_stdio(false);   
  cin.tie(NULL);
  int T;cin >> T;while (T--)
  solve();
  return 0;
}