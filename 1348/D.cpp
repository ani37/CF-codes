
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

  ll x=1,y=0,c=0,ans=0;
  ll n,m,k;
  cin>>n;
  vector<ll>v;
   if(n == 1){
        cr("0\n1");
      
    }

  while(ans+x<=n){
    v.pb(x);
    ans+=x;
    x=x*2;
  }
  
  if(ans!=n)    
  {
    v.pb(n-ans);
  }
  sort(v.begin(), v.end());
  c(sz(v)-1);
  for (ll i = 0; i+1 < sz(v); ++i){
      cout << v[i+1] - v[i] << ' '; 

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