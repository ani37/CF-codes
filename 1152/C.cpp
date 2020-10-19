#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
    ios_base::sync_with_stdio(false);   
    cin.tie(NULL);
  ll a,b,ans = 0,c= 0;
  cin>>a>>b;
  ll x = abs(a-b);
  ll lcm = ((a)*(b))/__gcd(a,b);
  ans = lcm;
   

  for(ll i = 1 ; i<= sqrt(x);i++)
  {

    if(x%i==0)
    {
      ll k = (i*1000000000-a)%i;
      if(k==0)k = i;
      lcm = ((a+k)*(b+k))/__gcd(a+k,b+k);
      if(ans>lcm) c = k;
      ans = min(ans,lcm);

    }
    ll p = x/i;
    if(x%(p)==0)
    {
      ll k = (p*1000000000-a)%p;
      if(k==0)k = p;
      lcm = ((a+k)*(b+k))/__gcd(a+k,b+k);
      if(ans>lcm) c = k;
      ans = min(ans,lcm);

    }
  }
  cout<<c<<'\n';
}