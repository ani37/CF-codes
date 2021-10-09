#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define c(P)        cout<<P<<"\n"
#define pii         pair<ll,ll>
#define mi          map<ll,ll>
#define mii         map<ll,pii>
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
 ll n;
 cin >> n;
 
 ll a[n];
 mi even , odd;
 for (ll i = 0; i < n; ++i)
 {
     cin >> a[i];
 }
  for (ll i = 0; i < n; ++i)
 {
    if(i & 1)odd[a[i]]++;
    else even[a[i]]++;
 }
 sort(a, a + n);
  for (ll i = 0; i < n; ++i)
 {
     if(i & 1){
        if(odd[a[i]] == 0){
            cr("NO");
        }
        odd[a[i]]--;
     }
     else{
      if(even[a[i]] == 0){
            cr("NO");
        }
        even[a[i]]--;  
     }
 }
 
 
 cout <<  "YES\n";
 
 
}
 
signed main(){
 
 ios_base::sync_with_stdio(false);   
 cin.tie(NULL);
 ll T;cin >> T;while (T--)
 solve();
 return 0;
}
 