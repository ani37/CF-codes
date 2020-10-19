
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


const ll N   =  300005;

using namespace std;
ll fac[N];

void solve()
{
// string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n>>m;
  fac[0] =1;
  for (int i = 1; i <N; ++i)
  {
     fac[i] = fac[i-1]*i%m;
  }
  for (int i = 1; i <= n; ++i)
  { 

      ans+= (n-i+1)*fac[n-i+1]%m*fac[i]%m;

      if(ans>m)
        ans-=m;
  }
  
  cout<<ans<<"\n";
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