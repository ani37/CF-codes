
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


void solve()
{
// string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0,p,r,s;
  cin>>n;

  std::map<pii, ll> mp;
  for (ll i = 0; i < n; ++i)
  {
    cin>>x>>y>>p>>q>>r>>s;
    mp[{x,y}]++;
    if(p>0)
    {
      mp[{x-1,y}]++;
    }
     if(q>0)
    {
        mp[{x,y+1}]++;
    }
     if(r>0)
    {
      mp[{x+1,y}]++;
    }
    if(s>0)
    {
      mp[{x,y-1}]++;
    }
  }
  for (auto it = mp.begin();it!=mp.end();it++)
  {
    if(it->S==n)
    {
      dbg(1);
      cout<<(it->F).F<<" "<<(it->F).S<<"\n";
      return;
    }
  }
  c(0); 
}

signed main(){
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      ios_base::sync_with_stdio(false);   
      cin.tie(NULL);
      ll T=1;
      cin>>T;
      while(T--)
      {
      solve();
      }
      return 0;
    }