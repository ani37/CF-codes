
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define eb          emplace_back
#define c(P)        cout<<P<<"\n"
#define pii         pair<ll,ll >
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define F           first
#define S           second
#define mp(x,y)     make_pair(x,y) 
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,a,n)   for(ll i=a;i<n;i++)
#define frr(i,a,n)  for(ll i=n-1;i>=a;i--)


const ll N   =  2000005;
const ll mod = 1e9 + 7;

using namespace std;
bool vis[N];

void solve()
{
// string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n>>m;
  std::vector<pii> v;

  for (int i = 0; i < n; ++i)
  {
    fr(j,0,m)
    {
        v.pb({i+1,j+1});
    }
  }
  for (ll i = 0; i < (m*n)/2; ++i)
  {
        cout<<v[i].F<<" "<<v[i].S<<"\n"<<v[(m*n)-1-i].F<<" "<<v[(m*n)-1-i].S<<'\n';
        vis[i] = 1;
        vis[(m*n)-1-i] =1;
  }
  if((m*n)%2==1)
  {
      for (int i = 0; i <(m*n) ; ++i)
      {
        if(vis[i]==0)
          cout<<v[i].F<<" "<<v[i].S<<"\n";
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
      ll T=1;
      //cin>>T;
      while(T--)
      {
      solve();
      }
      return 0;
    }