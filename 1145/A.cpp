
#include<bits/stdc++.h>
#define ll          int
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
 // string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n;
  ll b[n];

  for (int i = 0; i < n; ++i)
  {
   cin>>b[i];
  }
  ll a[] = {n,n/2,n/4,n/8,n/16};
  for (int i = 0; i < 5; ++i)
  {
    
   

    for (int j = 0; j <n ; j+=a[i])
    {     
        if (std::is_sorted(b+j, b + j+a[i]))
         {
            c(a[i]);
            return;
          }  
    }
  }
c(1);
    



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