
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

  ll x=0,y=0,c=0,ans=1e18;
  ll n,m,k;
  cin>>n;
  pii a[n];
  vector<ll> dp(n),suf(n),pref(n);
   for (ll i = 0; i < n; ++i){
  cin>>a[i].F >> a[i].S;
  }
  for (ll i = 0; i < n; ++i){
  		
  	dp[i] = max(0LL,a[i].F - a[(i-1+n)%n].S );

  	pref[i] = dp[i];
  	suf[i]  = dp[i];
   	if(i>0)
  		pref[i] +=pref[i-1];
  }
  for (ll i = n-2; i >= 0; --i){
  		
  		suf[i] +=suf[i+1];	
  }
  ans = min(a[0].F+ suf[1],a[n-1].F + pref[n-2]);
  for (ll i = 1; i < n; ++i){
  		
  ans = min(ans,a[i].F + pref[(i-1+n)%n] + suf[(i+1)%n]);
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