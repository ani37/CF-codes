
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
   ll power(ll a, ll b)  //a is base, b is exponent
   {
     if(b==0)
       return 1;
     if(b==1)
       return a;
     if(b%2 == 1)
       return (power(a,b-1)*a)%mod;
     ll q = power(a,b/2);
     return (q*q)%mod;
   }
using namespace std;
ll get(ll n)
{
  if(n==0) return 0;
  ll x = log2(n);

    ll even=0,odd=0;
  if(x%2==0)
  {

   for (int i = 1; i <=x ; i+=2)
   {
      even += power(2,i); 
      even%=mod;
   }

   for (int i = 0; i <=x ; i+=2)
   {
      odd += power(2,i); 
      odd%=mod;
   }
   odd += n - power(2,x+1)+1;
      odd%=mod;
  }
  else
  {
   for (int i = 1; i <=x ; i+=2)
   {
      even += power(2,i); 
      even%=mod;
   }
   for (int i = 0; i <=x ; i+=2)
   {
      odd += power(2,i); 
          odd%=mod;
   }
   even += n - power(2,x+1)+1;
   even%=mod;
  }
  return ((((even)*(even+1))%mod + (odd*odd)%mod)%mod);
}

void solve()
{
// string s;
  ll r,l;
  cin>>l>>r;

  cout<<(get(r) - get(l-1) + mod)%mod<<"\n";
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