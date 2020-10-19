
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
  ll n,m,k,x=0,y=0,c=0,q,ans=-1,a,b;
  cin>>n;
  ll p[n+1];
  for (ll i = 1; i <= n; ++i)
  {
  cin>>p[i];
  p[i]/=100;
  }
  sort(p+1,p+n+1,greater<ll>());
  cin>>x>>a>>y>>b>>k;
  if(x>y)
  {
    swap(x,y);
    swap(a,b);
  }
  ll l = 1; ll r = n;
  q =__gcd(a,b);
  q = (a*b)/q;

  while(l<=r)
  {
    ll mid = (l+r+1)/2;
    c = 0;
    m = n;
    ll c1 = mid/q;
    ll c2 = mid/b - c1;
    ll c3 = mid/a - c1;
    for (int i = 1; i <=mid ; i++)
    {
      if(c1)
      {
        c1--;
      c+=p[i]*(x+y);
      }
      else if(c2)
      {
        c2--;
       c+=p[i]*y;
      }
     else if(c3)
     {
      c3--;
      c+=p[i]*x;
    }
    else break;

    }
   
    if(c>=k)
    {
      r = mid-1;
      ans = mid;
    }
    else l = mid+1;
  }
  c(ans);
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