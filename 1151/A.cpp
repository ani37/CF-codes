
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
  ll n,m,k,x=0,y=0,c=0,q,ans=1e18;
  cin>>n>>s;

  for (ll i = 0; i < n-3; ++i)
  { 
      c = min((26 -abs(s[i]-'A')),abs(s[i] - 'A')) + min((26 - abs(s[i+1]-'C')),abs(s[i+1] - 'C')) + min((26 - abs(s[i+2]-'T')),abs(s[i+2] - 'T'))
      + min((26 - abs(s[i+3]-'G')),abs(s[i+3] - 'G'));

   
    ans = min(c,ans);
  }
  cout<<ans ;
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