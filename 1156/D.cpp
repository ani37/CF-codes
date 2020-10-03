
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define c(P)        cout<<P<<"\n"
#define dbg(P)      cout<<P<<" "
#define pii         pair<ll,ll>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define F           first
#define S           second
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,x,n)   for(ll i=x;i<n;i++)
#define frr(i,x,n)  for(ll i=n-1;i>=x;i--)


const ll N   =  500005;
const ll mod = 1e9 + 7;

using namespace std;
std::vector<ll> adj1[N],adj2[N];
  // Disjoint Set DataStructure
  ll parent1[N],parent0[N];     // reserve space for map if n > 10000
  ll urank1[N],urank0[N];

  void create(ll x)
  {
    parent1[x] = x ;
    urank1[x] = 1 ;     // rank = no. of nodes in its subtree
    parent0[x] = x ;
    urank0[x] = 1 ;     // rank = no. of nodes in its subtree

  }

  ll find(ll x,ll parent[])
  {
    if( parent[x] != x )  //path compression
    {
      parent[x] = find(parent[x],parent) ;
    }
    return parent[x];
  }

  void merge(ll x, ll y,ll parent[],ll urank[])
  {
    ll xroot = find(x,parent);
    ll yroot = find(y,parent);

    if( urank[xroot] <= urank[yroot] )  // Union by rank
    {
      parent[xroot] = yroot ;
      urank[yroot] = urank[yroot] + urank[xroot] ;
    }
    else
    {
      parent[yroot] = xroot;
      urank[xroot] = urank[xroot] + urank[yroot] ;
    }
  }
void solve()
{

  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n;
  ll f[n+1][2];
 for (int i = 1; i <= n; ++i)
 {
  create(i);
 }
  for (ll i = 1; i < n; ++i)
  {
  cin>>x>>y>>k;
  if(k==1)
  {
    if(find(x,parent1)!=find(y,parent1))
    merge(x,y,parent1,urank1);
     f[x][1]++;
     f[y][1]++;
  }
else
  {
    if(find(x,parent0)!=find(y,parent0))
    merge(x,y,parent0,urank0);
     f[x][0]++;
     f[y][0]++;
  }
  }
  for (int i = 1; i <=n ; ++i)
  {
  x= (urank1[find(i,parent1)]-1);
  y= (urank0[find(i,parent0)]-1);
  c+=x+y + x*y;
  }
  
  cout<<c<<" ";
}

signed main(){
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      ios_base::sync_with_stdio(false);   
      cin.tie(NULL);
      ll T=1;
      //cin>>T;
      while(T--)
      {
      solve();
      }
      return 0;
    }