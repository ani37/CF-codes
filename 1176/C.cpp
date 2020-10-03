
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

    
ll n,a,b,c,d,e,f,x,ans;
void solve()
{
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
    cin>>x;
    if(x==4)
      a++;
    else if(x==8)
      b++;
     else if(x==15)
      c++;
     else if(x==16)
      d++;
     else if(x== 23)
      e++;
     else if(x==42)
      f++;
  }
  ans = 6* min({a,b,c,d,e,f});

  cout<<n- ans;

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