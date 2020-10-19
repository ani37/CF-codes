
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define c(P)        cout<<P<<"\n"
#define dbg(P)      cout<<P<<" "
#define pii         pair<ll,ll>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define F           first
#define S           second
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,x,n)   for(ll i=x;i<n;i++)
#define frr(i,x,n)  for(ll i=n-1;i>=x;i--)


const ll N   =  500005;
const ll mod = 998244353;

using namespace std;
ll fact[N];
mi f1,f2,f3;
  bool cmp(const pair<int,int> &a,
              const pair<int,int> &b)
{ 
         if(a.first<=b.first)
    return (a.second < b.second);
    return (a.first<b.first);
}

void solve()
{
// string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0,c1=1,c2=1,c3=1;
  cin>>n;
  pii a[n+2];
  fact[0] = 1;

  for (ll i = 1; i <N; ++i)
  {
    fact[i] = i*fact[i-1] %mod;
  }
  ans = fact[n];
  for (ll i = 0; i < n; ++i)
  {
  cin>>a[i].F>>a[i].S;
  f1[a[i].F]++;
  f2[a[i].S]++;
  }

  for(auto &i : f1)
    c1= c1*fact[i.S] %mod;
   for(auto &i : f2)
    c2= c2*fact[i.S] %mod;    
  ans = (ans -c2 -c1 + 100000*mod)%mod;
  sort(a,a+n);
  for (ll i = 1; i < n; ++i)
  {
   if(a[i-1].S>a[i].S)
   {   
    c(ans);
    return;
   }
  }
ll l = 0;
    ll d = 1;
    while(l < n){
        ll r = l + 1;
        while(r < n && a[l].first == a[r].first) ++r;
        mi mp;
        for(ll i = l; i < r; ++i) ++mp[a[i].second];
        for(auto p : mp) c3 = c3*fact[p.S] %mod;    
        l = r;
    }
ans  = (ans+c3) %mod;
  cout<<ans<<"\n";
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