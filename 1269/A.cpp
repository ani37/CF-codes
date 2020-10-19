
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define c(P)        cout<<P<<"\n"
#define pii         pair<ll,ll>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define F           first
#define S           second
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,x,n)   for(ll i=x;i<n;i++)
#define frr(i,x,n)  for(ll i=n-1;i>=x;i--)


const ll N   =  500005;
const ll mod = 1e9 + 7;

using namespace std;

    vector<bool>prime(10000001,1);
void SieveOfEratosthenes() 
{ 
  
    for (ll p=2; p*p<=10000001; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (ll i=p*p; i<=10000001; i += p) 
                prime[i] = false; 
        } 
    } 

} 

void solve()
{
SieveOfEratosthenes();
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n;
  for (int i = 4; ; ++i)
  {
    if(!prime[i] and  !prime[i+n])
    {
      cout<<i+n<<" "<<i<<'\n';
      return;
    } 
  }

}

signed main(){
     
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