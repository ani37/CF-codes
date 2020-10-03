
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
  cin>>n>>s;
  for (ll i = 0; i < n; ++i)
  {
    if(s[i]=='8')
      c++;
  }
  if((n-11)/2>c)
  {
    c("NO");
    return;
  }
  y= (n-11)/2;
  x= y;
  for (int i = 0; i < n; ++i)
  {
   if(s[i]!='8')
   {
    s[i]= '?';
    x--;
   }
   if(x==0)
   break;  
  }
  for (int i = 0; i < n; ++i)
  {
   if(s[i]=='8')
   {
    s[i]= '?';
    y--;
   }
   if(y==0)
   break;  
  }
  char ch;
for (int i = 0; i < n; ++i)
{
  if(s[i]=='?')
    continue;
  ch = s[i];
  break;

}
if(ch=='8')
{
  c("YES");
  return;
}
c("NO");

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