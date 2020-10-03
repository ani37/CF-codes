
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
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  string s,t;
  cin>>n>>s;
  ll a[26][n];
mem(a,0LL);
  for (int i = 0; i < n; ++i)
  {

      a[s[i]-'a'][i]++;
  }


      fr(j,0,26)
      {
  for (int i = 1; i < n; ++i)
  {

        a[j][i] +=a[j][i-1];

    }
  }

  cin>>m;
  for (int i = 0; i < m; ++i)
  {
    x = 0;
    ans = 0;
    std::vector<ll> b(26);

    cin>>t;
    for (int j = 0; j < t.size(); ++j)
      b[t[j]-'a']++;
       for (ll j = 0; j < 26; ++j)
    {
        if(b[j]>0)
        {
           x = lower_bound(a[j],a[j]+n,b[j]) -a[j];
            ans = max(ans,x);    
        }
    }
   
    c(ans+1);
}
  
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