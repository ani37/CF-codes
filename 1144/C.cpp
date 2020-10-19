
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
#define exit(x)     cout<<x<<"\n",return
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,a,n)   for(ll i=a;i<n;i++)
#define frr(i,a,n)  for(ll i=n-1;i>=a;i--)


const ll N   =  500005;
const ll mod = 1e9 + 7;

using namespace std;
ll in[N];

void solve()
{
ll T=1;
//cin>>T;
while(T--)
  {
 // string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n;
  ll a[n];
  std::vector<ll> v1,v2;
  for (ll i = 0; i < n; ++i)
  {
  cin>>a[i];
  in[a[i]]++;
  }
  sort(a,a+n);
  for (int i = 0; i < N; ++i)
  {
    if(in[i]>2)
    {
      c("NO");
      return;
    }
  }
  c("YES");
  for (int i = 0; i < n-1; ++i)
  {
    if(a[i]==a[i+1])
    {
      v2.pb(a[i]);
    }
    else v1.pb(a[i]);
  }

    v1.pb(a[n-1]);

  if(v2.size()>0)
  reverse(v2.begin(), v2.end());
  c(v1.size());
  for (int i = 0; i < v1.size(); ++i)
  {
    cout<<v1[i]<<" ";
  }
  c("");
  c(v2.size());
  for (int i = 0; i < v2.size(); ++i)
  {
    cout<<v2[i]<<" ";
  }
  c("");

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