
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
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n>>k;
  ll a[n];
  for (ll i = 0; i < n; ++i)
  {
  cin>>a[i];

  }
  std::vector<ll> v;
  for (int i = 0; i < n; ++i)
  {
    c+=a[i];
    if(c%2==1 and x<k-1)
    {
      v.pb(i+1);
      c = 0;
      y = i+1;
      x++;
    } 
  }

    if(x<k-1 or (c%2==0))
    {
      c("NO");
      return;
    }
    else c("YES");
     
      v.pb(n);
    for (int i = 0; i < v.size(); ++i)
    {
      cout<<v[i]<<" ";
    }
    c("");
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