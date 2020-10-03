
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
string add(string s,string t)
{
  reverse(s.begin(), s.end());
  reverse(t.begin(), t.end());
  while(s.size()<t.size()) s+='0';
  while(t.size()<s.size()) t+='0';
  ll c = 0;
  string res;
  fr(i,0,s.size())
  {
    res += (s[i]+t[i] + c -'0' - '0')%10 + '0'; 
    c    = (s[i]+t[i] + c -'0' - '0')/10;
  }
  if(c>0) res +=(c+'0');
  reverse(res.begin(), res.end());
  return res; 
}

void solve()
{
 string s,ans;
  ll n,m,k,x=0,y=0,c=0,q;
  cin>>n>>s;
  ans = s;
  for (ll i = n/2-1; i >0; --i)
  {
      if(s[i]=='0')
        continue;
      string t= add(s.substr(0,i),s.substr(i));
      if(t.size()<ans.size() or (t.size()==ans.size() and t<ans))
        ans = t;
      c++;
      if(c==2)
        break;
  }
  c = 0;
  for (ll i = n/2; i <n; ++i)
  {
      if(s[i]=='0')
        continue;
      string t= add(s.substr(0,i),s.substr(i));
      if(t.size()<ans.size() or (t.size()==ans.size() and t<ans))
        ans = t;
      c++;
      if(c==2)
        break;
  }  
  cout<<ans<<" ";
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