
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define eb          emplace_back
#define c(P)        cout<<P<<"\n"
#define pii         pair<ll,ll>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define mp(x,y)     make_pair(x,y) 
#define exit(x)     cout<<x<<"\n",return
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,a,n)   for(ll i=a;i<n;i++)
#define frr(i,a,n)  for(ll i=n-1;i>=a;i--)
const ll N=500005;
const ll mod = 1e9 + 7;

using namespace std;
std::vector<ll> adj[N];
std::vector<ll> vis(N);
ll ans =0,c=0,k;
  ll power(ll a, ll b)  //a is base, b is exponent
  {
    if(b==0)
      return 1;
    if(b==1)
      return a;
    if(b%2 == 1)
      return (power(a,b-1)*a)%mod;
    ll q = power(a,b/2);
    return (q*q)%mod;
  }
  void dfs(ll x)
  {
    vis[x]=true;
    c++;
    for(ll v : adj[x])
    {
      if(vis[v]==false)
      {

        dfs(v);
      }
    }
  }
void solve()
{
  ll T=1;
  //cin>>T;
  while(T--)
  {
 // string s;
  ll n,m,x=0,y=0,q;
  cin>>n>>k;
  for (ll i = 0; i < n-1; ++i)
  {
  cin>>x>>y>>m;
  if(m==1)
    continue;
  adj[x].pb(y);
  adj[y].pb(x);
  }
  ans = power(n,k);
  
 for (int i = 1; i <= n; ++i)
 {
   if(vis[i]==false)
   {
    c = 0;
    dfs(i);

    ans -= power(c,k); 
    ans +=mod;
    ans %=mod;
   }
 }
  
cout<<ans<<"\n";

 }
}

signed main(){
      #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
      #endif
        ios_base::sync_with_stdio(false);   
        cin.tie(NULL);
       solve();
    return 0;
    }