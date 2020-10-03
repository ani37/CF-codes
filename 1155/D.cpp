
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

    ll max_so_far = 0, max_eding_here, start , ed , s; 
using namespace std;
void maxSubArraySum(ll a[], ll size) 
{ 
  
    for (ll i=0; i< size; i++ ) 
    { 
        max_eding_here += a[i]; 
  
        if (max_so_far < max_eding_here) 
        { 
            max_so_far = max_eding_here; 
            start = s; 
            ed = i; 
        } 
  
        if (max_eding_here < 0) 
        { 
            max_eding_here = 0; 
            s = i + 1; 
        } 
    } 

} 

void solve()
{
// string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n>>k;
  ll a[n];

  for (ll i = 0; i < n; ++i)
  {
  cin>>a[i];
  a[i]*=k;
  }

 maxSubArraySum(a, n); 
 x = max_so_far;
 for (int i = 0; i < n; ++i)
 {
   a[i]/=k;
 }
 max_so_far = 0;
 max_eding_here = 0;
 for (ll i = 0; i < n; ++i)
  {
  if(k<0)
  a[i] = -a[i];
  }
  maxSubArraySum(a, n); 
for (int i = 0; i <n ; ++i)
{
  if(k<0)
  a[i] = -a[i];
}
ll st = start;
ll el = ed;
max_so_far = 0;
max_eding_here = 0;
maxSubArraySum(a, n);
x= max({0LL,max_so_far,x});

for (int i = st; i <=el ; ++i)
{
  a[i]*=k;
}
max_so_far = 0;
max_eding_here = 0;
maxSubArraySum(a, n);
x= max(max(0LL,max_so_far),x);

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