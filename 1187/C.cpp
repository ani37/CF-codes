
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
  ll a[n];
  mem(a,0LL);
  pii b[m];
  ll d[m];
  for (ll i = 0; i < m; ++i)
  {
    cin>>k>>x>>y;
    x--;
    y--;
    b[i] ={x,y};
    d[i] = k;
      if(k==1)
      {
    fr(j,x,y+1)
    {
      if(a[j]==1 and j==x)
            continue;
      a[j] = 2;
    }
      }
      else
      {
        a[x]+=2;
        fr(j,x+1,y+1)
    {

      a[j] = 1;
    }
      }
  }

  for (int i = 0; i < m; ++i)
  {
    if(d[i]==1)
      {
    fr(j,b[i].F+1,b[i].S+1)
    {
        if(a[j-1]>a[j])
        {
          c("NO");
          return;
        }
    }
  }
  else  
  { c = 0;
    fr(j,b[i].F+1,b[i].S+1)
    {
        if(a[j-1]>a[j])
        {
      
          c++;
        }
    }
    if(c==0)
    {
       c("NO");
          return;
    }
  }
}
c("YES");
for (int i = 0; i < n; ++i)
{
    cout<<a[i]<<" ";
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