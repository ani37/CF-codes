
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
  string s;
  cin>>s;
  n =sz(s);
  for (ll i = 0; i < n; ++i){
      if(s[i]=='0')
        x++;
      else y++;
  }
  if(x==0 or y==0){
    c(s);
    return;
  }
  if(y>=x){
    for (ll i = 0; i < 2*n; ++i){
        if(c){
            cout << '0';
        }
        else cout<<'1';
        c^=1;
    }
    c("");
    return;
  }
  if(y<x){
    c = 1;
    for (ll i = 0; i < 2*n; ++i){
        if(c){
            cout << '0';
        }
        else cout<<'1';
        c^=1;
    }
    c("");
  }


  
 
}

signed main(){
     
  ios_base::sync_with_stdio(false);   
  cin.tie(NULL);
  int T;cin >> T;while (T--)
  solve();
  return 0;
}