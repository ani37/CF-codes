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
  ll a[n];
  for (ll i = 0; i < n; ++i){
      cin >> a[i];
      if(a[i]==k)c++;
  }
  if(n==1 or c==0){
    if(a[0]==k){
        cr("yes");
    }
    cr("no");
  }
  for (ll i = 0; i < n; ++i){
      if(i<n-1 and  a[i]==k and a[i+1]>=k){
        cr("yes");
      }
       if(i>0 and  a[i]==k and a[i-1]>=k){
        cr("yes");
      }
  }
   vector<ll>v;   
  for (ll i = 0; i < n-2; ++i){
    v.clear();
    v.pb(a[i]);v.pb(a[i+1]);v.pb(a[i+2]);
    sort(v.begin(), v.end());
    if(v[1]>=k and v[2]>=k){
        cr("yes");
    }
  }



  cr("no");
  
 
}

signed main(){
     
  ios_base::sync_with_stdio(false);   
  cin.tie(NULL);
  int T;cin >> T;while (T--)
  solve();
  return 0;
}