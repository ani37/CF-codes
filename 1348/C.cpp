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
  string s,t;
  cin >> s;
  sort(s.begin(), s.end());
 
  if(s[k-1]>s[0]){
    cr(s[k-1]);
  }
  if(s[k]<s[n-1]){
    t+=s[0];
    for (ll i = k; i < n; ++i){
       t+=s[i]; 
    }
    cr(t);
  }
  for (ll i = 0; i < n; i+=k){
      t+=s[i];
  }
  c(t);
 
 
  
 
}
 
signed main(){
     
  ios_base::sync_with_stdio(false);   
  cin.tie(NULL);
  int T;cin >> T;while (T--)
  solve();
  return 0;
}