
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

ll pw[35];

void solve(){

  ll x=0,y=0,c=0,ans=0;
  ll n,m,k;
  cin>>n;
  x = n/2;
  if(x%2==1){
    cr("NO");
  }
  ll a[n];
  
    c("YES");
    for (ll i = 1; i <= x; ++i){
     a[i-1] =  2*i;
     c+=a[i-1];   
    }
    c--;
    a[x] = 1;
    for (ll i = 1; i < x-1; ++i){
     a[x +i ]  = 2*i + 1; 
     c -= (2*i+1);
    }
    a[2*x -1] = c;
    for (ll i = 0; i < n; ++i){
        cout << a[i] <<" ";
    }
    c("");
  
  //c("NO");
}

signed main(){
     
  ios_base::sync_with_stdio(false);   
  cin.tie(NULL);
  pw[0] = 1;
  for (ll i = 1; i <= 30; ++i){
      pw[i] = pw[i-1]*2;
      //c(pw[i]);
  }
  int T;cin >> T;while (T--)
  solve();
  return 0;
}