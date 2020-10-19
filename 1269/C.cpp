
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define c(P)        cout<<P<<"\n"
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
  string s,t;
  ll n,m=0,k,x=0,y=0,c=0,q,ans=0;
  cin>>n>>k>>s;
  t = s;
  std::vector<bool> vis(n+1);
  for (int i = 0; i <n ; ++i)
  {
    if(!vis[i])
    {
      x  = i;
      while(x+k<n)
      {
        t[x+k] = t[x];
        vis[x+k] = 1;
        x+=k;
      }
    }
  }
  for (int i = 0; i <n; ++i)
   {
    if(s[i]<t[i])
    { 
        break;
    }
    else if(s[i]>t[i])
    { 
        y = 1;
        break;
    }
   }

  if(y==0)
  {
  cout<<n<<"\n"<<t<<"\n";
  return;
  }
  if(t[k-1]!='9')
  {

    t[k-1]++;
    x = k-1;
    while(x+k<n)
    {
      t[x+k]  = t[x];
      x+=k;
    }
     cout<<n<<"\n"<<t<<"\n";
    return;
  }
  x = k-1;
  while(x>=0 and t[x]=='9')
  { 
    t[x] = '0';
    x--;
  }
  t[x]++;
  for (int i = 0; i < n; ++i)
  {
    vis[i] = 0;
  }
  for (int i = 0; i <n ; ++i)
  {
    if(!vis[i])
    {
      x  = i;
      while(x+k<n)
      {
        t[x+k] = t[x];
        vis[x+k] = 1;
        x+=k;
      }
    }
  }
   cout<<n<<"\n"<<t<<"\n";


}

signed main(){
     
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