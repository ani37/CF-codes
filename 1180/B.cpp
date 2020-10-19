
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

ll arr[N];
void solve()
{
// string s;
  ll n,m,k,x=-1e15,y=0,c=0,q,ans=0;
  cin>>n;
  ll a[n];
  for (ll i = 0; i < n; ++i)
  {
  cin>>a[i];
  if(a[i]>=0)
  {
    c++;
   a[i] = -a[i] -1;
   arr[i] = 1;
  }
  }
  if(((c)%2==0 and (n-c)%2==0) or (c%2==1 and (n-c)%2==1))
  {
   for (int i = 0; i < n; ++i)
    {
     cout<<a[i]<<" ";
    }
    return;
  }
  else
  {

    for (int i = 0; i < n; ++i)
    {
        if(arr[i]== 0 and x< abs(-a[i] -1))
        {
          x = abs(-a[i] - 1);
          y = i;
        }
         if(arr[i]== 1 and x< abs(a[i] +1))
        {
          x = abs(a[i] + 1);
          y = i;
        }
    }

    if(arr[y]==0)
    {
    a[y] = -a[y] -1;
    //c(y);
     }
    else a[y] = -(a[y] + 1);

  }
    for (int i = 0; i < n; ++i)
    {
     cout<<a[i]<<" ";
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