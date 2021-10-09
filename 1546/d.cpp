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
#define mem(a,val)  memset(a, val, sizeof(a))
#define fr(i,x,n)   for(ll i=x; i<n; i++)
#define frr(i,x,n)  for(ll i=n-1; i>=x; i--)
using namespace std;
 
 
const ll N   =  500005;
const ll mod =  998244353;
 
// fac
ll fac[N],ifac[N];
 
ll power(ll a, ll b)    //a is base, b is exponent
{
    if(b==0)
        return 1;
    if(b==1)
        return a % mod;
    if(b%2 == 1)
        return (power(a,b-1)*a)%mod;
    ll q = power(a,b/2);
    return (q*q)%mod;
}
 
void pre()
{
  fac[0] = 1;
  fr(i,1,N) fac[i] = (fac[i-1] * i) % mod;
  ifac[N-1] = power(fac[N-1],mod-2);
 for(ll i=N-2;i>=0;i--) {
    ifac[i] = (ifac[i+1] * (i+1)) % mod;
  }
}
ll ncr(ll n,ll r)
{
   if(r>n || r<0) return 0;
  return fac[n]*ifac[n-r]%mod*ifac[r]%mod;
}
 
void solve(){
 
 ll x=0, y=0, c = 0, ans = 0;
 ll n, m, k;
 cin >> n;
 string s;
 cin >> s;
 for(int i = 0; i < n; i++){
    if(s[i] == '1')c++;
 }
 for(int i = 0; i < n-1; i++){
    if(s[i] == s[i+1] and s[i] == '1'){
        i++;
        x++;
        continue;
    }
    //c(x);
 }
 if(x == 0){
    cr(1);
 }
 y = n + 2*x - c;
 m = y - 2 * x;
 cout << ncr(m + x, m) % mod << '\n';
}
 
signed main(){
 pre();
 ios_base::sync_with_stdio(false);   
 cin.tie(NULL);
 int T;cin >> T;while (T--)
 solve();
 return 0;
}
 
