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
ll T=1;
//cin>>T;
while(T--)
  {
  string s,t;

  ll n,m,k,x=0,y=0,c=0,q,ans=0,z,rem=0;
  cin>>n>>s>>t;
  std::vector<ll> v;
  reverse(s.begin(), s.end());
  reverse(t.begin(), t.end());
  for (ll i = 0; i < n; ++i)
  {
    x  = s[i] - 'a';
    y  = t[i] - 'a';
    z  = c + x+y;
    c  = z/26;
    rem= z%26;
    v.pb(rem);
   // cout<<c<<" "<<rem<<" "<<z<<"\n";
  }
  if(c>0)v[v.size()-1]+=26;
  reverse(v.begin(), v.end());
  rem=0;
  std::vector<char> vec;
 for (int i = 0; i < v.size(); ++i)
  {
    rem = rem*26 + v[i];
 
      cout<<(char)(rem/2 +'a');
      rem%=2;
    
  }

 }
}

signed main(){
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      ios_base::sync_with_stdio(false);   
      cin.tie(NULL);
      solve();
      return 0;
    }