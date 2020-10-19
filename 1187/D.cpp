
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
// string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n;
  ll a[n],b[n];
    priority_queue <ll, vector<ll>, greater<ll> > pq; 
  for (ll i = 0; i < n; ++i)
  {
  cin>>a[i];
  }
  for (ll i = 0; i < n; ++i)
  {
  cin>>b[i];
  }
for (int i = 0; i < n; ++i)
{
  if(x>n)
  {
    c("NO");
    return;
  }
  if(a[i]==b[i] and pq.empty())
    continue;
  if(pq.size()>0 and pq.top()==b[i])
        {
          a[i] = pq.top();
          pq.pop();
          continue;
        }
        if(x<i)
          x = i;
  while(x<n)
  {   
      pq.push(a[x++]);
      if(pq.top()==b[i])
      {
        break;
      }
  }

    if(pq.top()==b[i])
        {
          a[i] = pq.top();
          pq.pop();
          continue;
        }
    else
    {
      c("NO");
    return;   
    }

}

c("YES");

}

signed main(){
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      ios_base::sync_with_stdio(false);   
      cin.tie(NULL);
      ll T=1;
      cin>>T;
      while(T--)
      {
      solve();
      }
      return 0;
    }