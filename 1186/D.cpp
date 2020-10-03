
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
  ll n,m,k,x=0,y=0,c=0,ans=0;
  cin>>n;
  ll a[n];
  std::vector<pii> v1,v2;
  long double p,q;
  for (ll i = 0; i < n; ++i)
  {
    cin>>p;
    x = p;
    q = x;
    if(p-q==0.00000)
      a[i] = x;
    else if(p<0.00000)
    {
      v1.pb({x,i});
    }

    else v2.pb({x,i});
    c+=x;
  }
   
  if(c==0)
  {

    for (int i = 0; i < v1.size(); ++i)
    {
      a[v1[i].S] = v1[i].F; 
    }
    for (int i = 0; i < v2.size(); ++i)
    {
      a[v2[i].S] = v2[i].F; 
    }
    for (int i = 0; i < n; ++i)
    {
      c(a[i]);
    }
  }
  else if(c>0)
  {
    for (int i = 0; i < v1.size(); ++i)
    {
      if(c==0)
        break;
      v1[i].F--;
        c--;
    }
   for (int i = 0; i < v1.size(); ++i)
    {
      a[v1[i].S] = v1[i].F; 
    }
    for (int i = 0; i < v2.size(); ++i)
    {
      a[v2[i].S] = v2[i].F; 
    }
    for (int i = 0; i < n; ++i)
    {
      c(a[i]);
    }
  }
  else
  {

    for (int i = 0; i < v2.size(); ++i)
    {
      if(c==0)
        break;
      v2[i].F++;
        c++;
    }
    for (int i = 0; i < v1.size(); ++i)
    {
      a[v1[i].S] = v1[i].F; 
    }
    for (int i = 0; i < v2.size(); ++i)
    {
      a[v2[i].S] = v2[i].F; 
    }
    for (int i = 0; i < n; ++i)
    {
      c(a[i]);
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