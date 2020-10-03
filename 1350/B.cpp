
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
  cin>>n;
  ll a[n+1];
  vector<ll>dp(n+1);
  dp[n]=1;
  for (ll i = 1; i <= n; ++i){
      cin >> a[i];
  }
  for (ll i = n-1; i >= 1; --i){
    
    for (ll j = i; j <= n; j+=i){
     if(j==i){
        dp[i] =1;
     }
     else {
        if(a[i]< a[j]){
            dp[i] = max(dp[j]+1,dp[i]);
        }
     }   
    }
  }
  x = *max_element(dp.begin(), dp.end());
  c(x);
 
}

signed main(){
     
  ios_base::sync_with_stdio(false);   
  cin.tie(NULL);
  ll T;cin >> T;while (T--)
  solve();
  return 0;
}