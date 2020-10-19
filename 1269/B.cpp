
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define c(P)        cout<<P<<"\n"
#define pii         pair<ll,ll>
#define mi          unordered_map<ll,ll>
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
  cin>>n>>m;
  mi mp;
  ll a[n],b[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  for (int i = 0; i < n; ++i)
  {
    cin>>b[i];
  }
  for (int i = 0; i < n; ++i)
  {
   for(int j =0;j<n;j++)
   {
    mp[(b[j]-a[i]+2*m)%m]++;
   }
  }

  for(auto it  = mp.begin();it!=mp.end();it++)
  {

 if(x<it->S)
 {
  x = it->S;
  y = it->F;
 }
  }
  
  cout<<y<<"\n";
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