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
 string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  std::vector<ll>a[26];
  for (ll i = 0; i < 3; ++i)
  {
    cin>>s;
    x = s[0]-'0';
    y = s[1]-'a';
    a[y].pb(x);
  }
  x = 2;
  y = 0;
  for (int i = 0; i < 26; ++i)
  {
    sort(a[i].begin(), a[i].end());
  }
  for (int i = 0; i < 26; ++i)
  {
      if(a[i].size()==0)
        continue;
          if(a[i].size()==3)
          {
 
          if(a[i][0]==a[i][1] and a[i][0]==a[i][2])
          {
            x = 0;
            c(0);
            return;
          }
          else if(a[i][0]+1==a[i][1] and a[i][0]+2==a[i][2])
          {
            c(0);
            return;
          }
          else if(a[i][2]==a[i][1]+2)
          {
            x = min(x,1LL);
          }
           else if(a[i][2]==a[i][1]+1)
          {
            x = min(x,1LL);
          }
           else if(a[i][1]==a[i][2])
          {
            x = min(x,1LL);
          }
 
            if(a[i][0]==a[i][1])
          {
            x = min(x,1LL);
          }
          else if(a[i][1]==a[i][0]+1)
          {
            x = min(x,1LL);
          }
          else if(a[i][1]==a[i][0]+2)
          {
            x = min(x,1LL);
          }
          }
      else 
        if(a[i].size()==2)
        {
 
          if(a[i][0]==a[i][1])
          {
            x = min(x,1LL);
          }
          else if(a[i][0]+1==a[i][1])
          {
            x = min(x,1LL);
          }
          else if(a[i][0]+2==a[i][1])
          {
 
            x = min(x,1LL);
          }
          else x = min(x,2LL);
        }
        else
          if(a[i].size()==1)
      {
        x = min(x,2LL);
      }
        }
 
    c(x);
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