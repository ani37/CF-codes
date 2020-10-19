
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
ll in[N];

void solve()
{
// string s;
  ll n,m,k,x=0,y=0,c=-1,q,ans=0;
  cin>>n;
  ll a[n],b[n];
  for (ll i = 0; i < n; ++i)
  {
  cin>>a[i];
  }
  for (ll i = 0; i < n; ++i)
  {
  cin>>b[i];
  }

  for (int i = 0; i < n; ++i)
  {
    in[b[i]] = i+1;
  }
  //codition :1
  if(in[1]>0)
  {  c = 1;
    for (int i =1; i <=n; ++i)
    {
      if(in[1]+i==in[i+1])
          c++;
       
    }

    if(in[1]+c-1==n)
    {
  
      for (int i = c+1; i <=n  ; ++i)
      {
          
        if(i-c-1>=in[i])
          continue;
        else {
          x = -1;
          break;
        }
       // k+=;
      }
      if(x>-1)
      {
      c(in[1]-1);
      return;
      }
    }
    ans = 0;
   for (ll i = 2; i <=n ; ++i)
      {
          ans = max(ans,in[i] -(in[1]+i-1));
      }
    ans += in[1];
      ans+= n;
      c(ans);
      return;
     }

    for (ll i = 2; i <=n ; ++i)
      {
            ans = max(ans,in[i]-i+1);
      }

       ans+= n;
      c(ans);
      return;
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