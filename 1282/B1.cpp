
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
// string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n>>x>>k;
  ll a[n+10];
  for (ll i = 0; i < n; ++i)
  {
  cin>>a[i];
  }
  sort(a,a+n);
  y = x;
  for (int i = n; i < n+10; ++i)
  {
   a[i]= 1e18;
  }
  for (int i =1 ; i < n; i+=2)
  {
      if(a[i]<=x)
      {
        c+=2;
        x-=a[i];
      }
      else {
        if(a[i-1]<=x)
        {
            c+=1;
        x-=a[i-1];
        }
        break;
      }
  }

  if(n%2==1 and a[n-1]<=x)
    c++;
  ans = c;

  x = y;
  c = 0;
  if(a[0]<=x)
  {
    x-=a[0];
    c++;
  }
  for (int i =2; i < n; i+=2)
  {
      if(a[i]<=x)
      {
        c+=2;
        x-=a[i];
      }
      else {
        if(a[i-1]<=x)
        {
            c+=1;
        x-=a[i-1];
        }
        break;
      }
  }
    if(n%2==0 and a[n-1]<=x)
    c++;

  ans = max(c,ans);


  
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