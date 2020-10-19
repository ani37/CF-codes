
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


void solve()
{
// string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n>>m;
  ll a[n][m];
  for (ll i = 0; i < n; ++i)
  {
    fr(j,0,m)
  cin>>a[i][j];
  }
  for (int i = 0; i < n; ++i)
  {
    c^=a[i][0];
  }
  if(c>0)
  { 
    c("TAK");
    for (int i = 0; i < n; ++i)
    {
      cout<<1<<" ";
    }
    return;
  }
  for (int i = 0; i < n; ++i)
  {
    fr(j,0,m)
    {
        if(a[i][0]!=a[i][j])
        {
          c("TAK");
    for (int k = 0; k < n; ++k)
    {
      if(k!=i)
      cout<<1<<" ";
    else cout<<j+1<<" ";
    }
    return;
        }
    }
  }
  c("NIE");
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