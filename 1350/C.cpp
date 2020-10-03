
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


const ll N   =  200005;
const ll mod = 1e9 + 7;
ll power(ll a, ll b)    //a is base, b is exponent
{
    if(b==0)
        return 1;
    if(b==1)
        return a % mod;
    if(b%2 == 1)
        return (power(a,b-1)*a) % mod;
    ll q = power(a,b/2);
    return (q*q) % mod;
}


vector<ll> v[200005];
void solve(){

  ll x=0,y=0,c=0,ans=0;
  ll n,m,k;
  cin>>n;
  ll a[n];
  for (ll i = 0; i < n; ++i){
      cin >> a[i];
  }
  x = a[0];
  for (ll i = 1; i < n; ++i){
      x = __gcd(x,a[i]);
  }

  for (ll i = 0; i < n; ++i){
      a[i] /= x;
     
      
      for (ll j = 2; j*j <= a[i]; ++j){
          c = 0;
          while(a[i] % j == 0){
            a[i]/=j;
            c++;
          }
          if(c>0)
          v[j].pb(c);
      }
      if(a[i]>1){

        v[a[i]].pb(1);
       }
  }
  for (ll i = 2; i <N; ++i){
      if(sz(v[i])==n-1){
       m = *min_element(v[i].begin(), v[i].end());
        x*=power(i,m);
    }
  }
  c(x);
 
}

signed main(){
     
  ios_base::sync_with_stdio(false);   
  cin.tie(NULL);
  //int T;cin >> T;while (T--)
  solve();
  return 0;
}