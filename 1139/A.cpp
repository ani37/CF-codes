
#include<bits/stdc++.h>

using namespace std;


int main()
{
  int T=1;
  while(T--)
  {
     string s;
    int n,m,k,x=0,y=0,c=0,q,ans=0;
    cin>>n>>s;

    for (ll i = 0; i < n; ++i)
    {
        if((s[i]-'0')%2==0)
        {
          c+=(i+1);
        }
    }
  }
  
cout<<c<<" ";
    return 0;
}
