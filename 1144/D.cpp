
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define eb          emplace_back
#define c(P)        cout<<P<<"\n"
#define pii         pair<ll,pair<ll,ll> >
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
  for (ll i = 0; i < n; ++i)
  {
  cin>>a[i];
  in[a[i]]++;
  }
  x = 0;
for (int i = 0; i < N; ++i)
{  
    if(x<in[i])
    {
      x = in[i];
      y = i;

    }
}

std::vector<pii> v;
for (int i = 0; i < n; ++i)
{
  if(a[i]==y)
  {
    x = i;
    break;
  }
}

for (int i = x-1; i >=0 ; --i)
{
  if(a[i+1] - a[i]>0)
  {
    a[i] = a[i+1];

    v.pb({1,{i,i+1}});

  }
  else if(a[i+1] - a[i]<0)
  {
    a[i] = a[i+1];
    v.pb({2,{i,i+1}});

  }

}
for (int i = x+1; i<n ; ++i)
{     
  if(a[i-1] - a[i]>0)
  {     
    a[i] = a[i-1];

    v.pb({1,{i,i-1}});

  }
  else if(a[i-1] - a[i]<0)
  {
    a[i] = a[i-1];
    v.pb({2,{i,i-1}});

  }
}
c(v.size());
for (int i = 0; i < v.size(); ++i)
{
 cout<<v[i].F<<" "<<v[i].S.F +1<<" "<<v[i].S.S +1<<"\n";
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