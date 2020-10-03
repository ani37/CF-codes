
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
  std::set<ll> s;
  std::multiset<ll> ms;
  ll a[n+1],b[n+1], v[n+1];
  for (ll i = 1; i <= n; ++i){
      cin >> a[i];
      b[a[i]] = i;
     
  }
  for (ll i = 1; i <= n; ++i){
      v[i] = 1;
      s.insert(i);
      ms.insert(1);
  }

  vector<ll> vis(n);

  for (ll i = 1; i <= n; ++i){
    
    auto it = --(ms.end());
    if(v[b[i]]!=*it){
        cr("No");
    }
    s.erase(b[i]);
    ms.erase(ms.find(v[b[i]]));
    v[b[i]] = 0;
    it = s.upper_bound(b[i]);
    if(it!=s.end()){
    ms.erase(ms.find(v[*it]));
    v[*it]+=1;
    ms.insert(v[*it]);
    }

  }
  c("Yes");
  
 
}

signed main(){
     
  ios_base::sync_with_stdio(false);   
  cin.tie(NULL);
  int T;cin >> T;while (T--)
  solve();
  return 0;
}