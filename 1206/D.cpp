
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
std::vector<ll> v[61];
int dis[N],par[N];
bool vis[N];

void solve()
{
// string s;
  ll n,m,k,x=0,y=0,c=0,q,ans;
  cin>>n;
  ll a[n];
  for (ll i = 0; i < n; ++i)
  {
  cin>>a[i];

  if(a[i]>0)
  {
    fr(j,0,60)
    {
      if((1LL<<j)&a[i])
        v[j].pb(i);
    }
  }
}
  for (int i = 0; i < 60; ++i)
  {
     if(v[i].size()>=3)
     {
      c(3);
      return;
     }
  }
  ans = n+2;
  for (ll i = 0; i < n; ++i)
  {
    if(a[i]>0)
    {
      
      mem(dis,-1LL);
      mem(par,-1LL);
      mem(vis,0);
      queue<ll>nodes;
      nodes.push(i);
      dis[i] = 0;
      while(!nodes.empty())
      {
        x = nodes.front();
        vis[x] =1;
        nodes.pop();
        for (ll j = 0; j <60 ; ++j)
        {
         if((1LL<<j)&a[x])
         {
          for(auto it : v[j])
          {
            if(it==par[x] or x==it)continue;
            if(!vis[it])
            {
              par[it] = x;
              nodes.push(it);
              dis[it] =dis[x]+1;
            }
            else
              ans = min(ans,dis[x]+dis[it]+1LL);
          }
         }
        }
      }

    }
  }

  if(ans==n+2)
  ans = -1;  
  cout<<ans<<"\n";
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