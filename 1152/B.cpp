#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll countbits(ll n)
{
  ll c = 0;
  while(n) 
  {
    c+=(n & 1);
    n>>=1;
  }
  return c;
}
signed main()
{
  #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
  #endif

  ll n;
  cin>>n; 
if(countbits(n+1)==1)
      return cout<<0,0;
  vector<ll> v;
  for(ll i=20;i>=0;i--)
  {
    if((n>>i)&1)
    {
      n = ((1<<i+1)-1)^n;
      v.push_back(i+1);
      if(countbits(n+1)==1)
      {
        cout<<2*v.size()-1<<'\n';
        for(ll i=0;i<v.size();i++)
        {
          cout<<v[i]<<" ";
        }
        return 0;
      }
      n++;
      if(countbits(n+1)==1)
      {
        cout<<2*v.size()<<'\n';
        for(ll i=0;i<v.size();i++)
        {
          cout<<v[i]<<" ";
        }
        return 0;
      }
    }
  }
}