
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
  ll n,m,k,x=0,y=0,c=1,q,ans=1;
  cin>>n;
  ll a[n];
   mi minidx,maxidx;
  for (ll i = 0; i < n; ++i)
  {
  cin>>a[i];
  }
  n=  unique(a,a+n) -a;

  for (ll i = 0; i < n; ++i)
  {

      maxidx[a[i]] = i;    
  }
 for (ll i = n-1; i >=0; --i)
  { 
      minidx[a[i]] = i;    
  }
  auto i = minidx.begin();
  auto j = maxidx.begin();
  i++;

  while(i!=minidx.end())
  {
    
    if((*j).S<(*i).S)
      c++;
    else c =1;
    ans = max(c,ans);
    i++;
    j++;
  }
  c(minidx.size()-ans);
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