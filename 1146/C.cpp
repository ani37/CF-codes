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
 ll T;
 cin>>T;
 while(T--)
 {
  ll n,x,y;
  cin>>n;
  cout<<1<<" "<<n-1<<" "<<1<<" ";
  for (int i = 2; i <=n ; ++i)
  {
   cout<<i<<" ";
  }
  cout<<endl;
  cin>>x;
  ll ans = x;
  for(ll i =0 ;i<=7;i++)
  { std::vector<ll> v1,v2;
    y = 1<<i;
    for(ll j =1;j<=n;j++)
    {
      if(j&y)
      {
        v1.push_back(j);
      }
      else v2.push_back(j);
    }
    if(v1.size()==0 or v2.size()==0) continue;
    cout<<v1.size()<<" "<<v2.size()<<" ";
    for (int j = 0;j<v1.size(); ++j)
    {
      cout<<v1[j]<<" ";
    }
    for(int j =0 ; j<v2.size();j++)
    {
      cout<<v2[j]<<" ";
    }
    cout<<endl;
    cin>>x;
    ans = max(ans,x);
  }
cout<<-1<<" "<<ans<<endl;
 } 
}