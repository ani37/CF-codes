
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

using namespace std;


signed main(){
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      ios_base::sync_with_stdio(false);   
      cin.tie(NULL);
 
      ll n,m,k,x=0,y=0,c=0;
     cin>>n;
      std::multiset<ll> s;
     for (ll i = 0; i < n; ++i)
     {
     cin>>x>>y;
    c+=y*n  - x;
    s.insert(x-y);
    }
    x = 0;

 for(auto it : s)
 {
  c+=(n-x)*(it);
  x++;
 }
cout<<c;
      return 0;
    }