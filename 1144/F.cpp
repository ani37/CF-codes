
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define eb          emplace_back
#define c(P)        cout<<P<<"\n"
#define pii         pair<ll,ll>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define F           first
#define S           second
#define mp(x,y)     make_pair(x,y) 
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,a,n)   for(ll i=a;i<n;i++)
#define frr(i,a,n)  for(ll i=n-1;i>=a;i--)


const ll N   =  500005;
const ll mod = 1e9 + 7;
using namespace std;
std::vector<ll> adj[N];
std::vector<ll> vis(N);
ll BR =0;
  void dfs(ll x,ll c)
  {
    vis[x]=c;

    for(auto i : adj[x])
    {
      if(!vis[i])
      {
        dfs(i,3-c);
      }
      else if(vis[i] != 3-c)
      {
        c("NO");
        exit(0);
        
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
  ll n,m,k,x=0,y=0,c=1,q,ans=0;
  cin>>n>>m;
  pii an[m];

  for (int i = 0; i < m; ++i)
  {
    cin>>x>>y;
    adj[x].pb(y);
    adj[y].pb(x);
    an[i]={x,y};
  }
  dfs(1,1);


c("YES");
for(auto i:an)
{  
 cout<<vis[i.F] - 1;
}

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