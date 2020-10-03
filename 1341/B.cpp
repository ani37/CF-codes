
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define c(P)        cout<<P<<"\n"
#define pii         pair<ll,ll>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define F           first
#define S           second
#define sz(a)       (ll)(a.size())
#define cr(P)       cout<<P<<"\n";return;
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,x,n)   for(ll i=x;i<n;i++)
#define frr(i,x,n)  for(ll i=n-1;i>=x;i--)
using namespace std;


const ll N   =  500005;
const ll mod = 1e9 + 7;



void solve(){

  ll x=0,y=0,c=0,ans=0;
  ll n,m,k;
  cin>>n >> k;
  ll a[n+2],dp[n+3] ={0};
  for (ll i = 0; i < n; ++i){
      cin >> a[i];
  }
  for (ll i = 1; i < k-1; ++i){
      if(a[i-1]<a[i] and a[i] >a[i+1]){
        
        c++;
    }
  }
  ans = c;
  x = 0;
  y = k-1;
  m = 0;
  while(y<n-1){

    if(a[y-1]<a[y] and a[y] >a[y+1]){
        
        c++;
    }
    if(a[x+1]>a[x] and a[x+1] >a[x+2]){
        
        c--;
    }
    if(c>ans){
        ans = c;
        m = x+1;
    }
    y++;
    x++;
  }

  cout <<ans+1 <<" "<< m+1<<'\n';
  
 
}

signed main(){
     
  ios_base::sync_with_stdio(false);   
  cin.tie(NULL);
  int T;cin >> T;while (T--)
  solve();
  return 0;
}