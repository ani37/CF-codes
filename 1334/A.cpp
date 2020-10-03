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
  cin>>n;
  
  pii a[n];
  for (ll i = 0; i < n; ++i){
  cin>>a[i].F >> a[i].S;
  }
  x = a[0].F;
  y = a[0].S;
  if(x<y){
  	 cr("NO");
  }

  for (ll i = 1; i < n; ++i){
  	

  	if(a[i].S>y and a[i].F <x + (a[i].S-y)){
      cr("NO");
  	}

  	if(a[i].F<x or a[i].S<y){
  		cr("NO");
  	}
  	x  =max(x,a[i].F);
  	y  = max(y,a[i].S);
  
  }
  c("YES");


}

signed main(){
     
  ios_base::sync_with_stdio(false);   
  cin.tie(NULL);
  int T;cin >> T;while (T--)
  solve();
  return 0;
}