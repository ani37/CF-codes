
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

  ll x=0,y=0,c=0,ans=mod;
  ll n,m,k;
  cin>>n >> k;
 // vector<ll> v;
  ll a[n];
  for (ll i = 0; i < n; ++i){
  cin>>a[i];
  }
  for (ll i = 0; i < n/2; ++i){
   //v.pb(a[i]+a[n-i-1]);   
   c+=a[i] + a[n-i-1];
  }
  c/=(n/2);
  ll p = c;
  for (ll c = max(p-1000,0LL); c <= min(p+1000,2*k); ++c){
    m = 0;
   
  for (ll i = 0; i < n/2; ++i){
      
      x = a[i];
      y = a[n-i-1];
      if(x+y==c)continue;
      if(c-x>0 and c-x<=k){
        m++;
        continue;
      }
       if(c-y>0 and c-y<=k){
        m++;
        continue;
      }
      m+=2;
  }
  ans = min(ans,m);
}


for (ll c = max(k-1000,0LL); c <= min(k+1000,2*k); ++c){
    m = 0;
   
  for (ll i = 0; i < n/2; ++i){
      
      x = a[i];
      y = a[n-i-1];
      if(x+y==c)continue;
      if(c-x>0 and c-x<=k){
        m++;
        continue;
      }
       if(c-y>0 and c-y<=k){
        m++;
        continue;
      }
      m+=2;
  }
  ans = min(ans,m);
}
  c(ans);

}
signed main(){
     
  ios_base::sync_with_stdio(false);   
  cin.tie(NULL);
  int T;cin >> T;while (T--)
  solve();
  return 0;
}