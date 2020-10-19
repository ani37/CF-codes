
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

  ll n=0,m=0,k=0,x=0,y=0,c=0,ans=0;
  cin>>n>>x>>k;
  ll a[n+k]={0};
  for (ll i = 0; i < n; ++i)
  {
  cin>>a[i];
  }
  for (ll i = n; i < n+k; ++i)
  {
   a[i]= 1e15;
  }
  sort(a,a+n);
  y = x;
  ll i=0;
  for (i =k-1 ; i < n; i+=k)
  {
      if(a[i]<=x)
      {
        c+=k;
        x-=a[i];
      }
      else {
       i -=k;
       i++;
        break;
      }
  }
  for (; i <n; ++i)
  {
    
    if(a[i]<=x)
    {
    x-=a[i];c++;
  }
  else break;
  }
  ans = c;
m =0;
  while(m<k-1)
  {
  x = y;
  c = 0;
  for (i = 0; i <= m; ++i)
  {
     if(a[i]<=x)
      {
        c++;
        x-=a[i];
      }
      else
      {
        c(max(c,ans));
        return;
      }
  }
  i =m+k;
  for (; i < n; i+=k)
  {
      if(a[i]<=x)
      {
        c+=k;
        x-=a[i];
      }
      else {
       i -=k;
       i++;
        break;
      }
  }
   
 m++;

  ans = max(c,ans);
  }
  
  cout<<ans<<"\n";
}

signed main(){
     
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