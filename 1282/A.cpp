
#include<bits/stdc++.h>
#define ll          int
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
  ll n,m,k,x=0,y=0,c=0,q,ans=0,a,b,r;
  cin>>a>>b>>c>>r;
  if(a>b)swap(a,b);
  if(a<=c  and c<=b)
  {
    x = c-r;
    ans = max(0,x-a);
    x = r+c;
    ans +=max(0,b-x); 
    c(ans);
    return;
  }
  if(c<=a and c<=b)
  {
    c = c+r;
    c = max(c,a);
    c(max(0,b-c));
  }

  else
  {

    c = c-r;
    c = min(c,b);
    c(max(0,c-a));
  }
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