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
const ll mod = 1e9 + 7;
 
 
 
void solve(){
 
 ll x=0, y=0, c = 0, ans = 0;
 ll n, m, k;
 cin >> n;
 ll a[n], b[n];
 for(int i = 0 ; i < n; i++){
    cin >> a[i];
    x +=a[i];
 }
 for(int i = 0 ; i < n; i++){
    cin >> b[i];
    y += b[i];
 }
 if(x != y){
    cr(-1);
 }
vector<pii> v;
 for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
          while(a[j] > 0 and a[i] < b[i] and a[j] > b[j]){
            v.pb({j+1, i+1});
            a[j]--;
            a[i]++;
          }
          while(a[i] > b[i] and a[j] < b[j]){
            v.pb({i+1, j+1});
            a[i]--;
            a[j]++;
          }
 
        }
    }
 c(sz(v));
 for(auto i : v){
    cout << i.F <<' ' << i.S << '\n';
 }
 
 
}
 
signed main(){
 
 ios_base::sync_with_stdio(false);   
 cin.tie(NULL);
 int T;cin >> T;while (T--)
 solve();
 return 0;
}