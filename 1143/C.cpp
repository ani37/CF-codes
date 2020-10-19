
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
#define exit(x)     cout<<x<<"\n",return
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,a,n)   for(ll i=a;i<n;i++)
#define frr(i,a,n)  for(ll i=n-1;i>=a;i--)


const ll N   =  500005;
const ll mod = 1e9 + 7;

using namespace std;
std::vector<ll> adj[N];
std::vector<bool> vis(N);
ll a[N],par[N];
std::vector<ll> v;

void solve()
{
ll T=1;
//cin>>T;
while(T--)
  {
 // string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n;
  ll a[n];
  for (int i = 1; i <= n; ++i)
  {
     cin>>x>>a[i];
     if(x>-1){
          adj[x].pb(i);
          adj[i].pb(x);}
  if(x==-1)
    y = i;
  }

 queue<ll> nodes;
 nodes.push(y);
 vis[y] = 1;
 while(!nodes.empty())
 {
  x = nodes.front();
  nodes.pop();
  c = 0;
  for (auto i : adj[x])
  {
    if(!vis[i])
    {
      vis[i] =1;
      nodes.push(i);

      if(a[i]==1 and a[x]==1)
      {  
        c++;
      }

    } 
  }
  if(adj[x].size()-1==0 and a[x]==1)v.pb(x);

  if(c>0 and c==adj[x].size()-1)
  {
    v.pb(x);
  }
 }
 if(v.size()==0)
 {
  c(-1);
 }
 else{
 sort(v.begin(), v.end());

for (int i = 0; i <v.size(); ++i)
{
 cout<<v[i]<<" ";
}
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