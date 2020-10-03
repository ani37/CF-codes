
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

  ll x=0,y=0,c=0,ans=0,sign=0;
  ll n,m,k;
  cin>>n;
  
  ll a[n];
  vector<ll>v;
  for (ll i = 0; i < n; ++i){
  cin>>a[i];
  
  }
  x = a[0];
  for (ll i = 1; i < n; ++i){
      if(x< 0 and a[i] > 0){
        v.pb(x);
        x = a[i];
      }
      else if(x>0 and a[i]>0){
        x = max(x,a[i]);
      }
      else if(x>0 and a[i]<0){
         v.pb(x);
         x = a[i];
      }
      else {
        x = max(x,a[i]);
      }
  }
  v.pb(x);

  for (ll i = 0; i < sz(v); ++i){
      c+=v[i];
  }
  c(c);  
}

signed main(){
     
  ios_base::sync_with_stdio(false);   
  cin.tie(NULL);
  int T;cin >> T;while (T--)
  solve();
  return 0;
}