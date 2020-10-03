
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
ll ans;

inline ll dist(ll a, ll b)
{
    return (a-b)*(a-b);
}

inline ll dist(ll a, ll b, ll c)
{
    return dist(a,b) +  dist(b,c) + dist(c,a);
}

void findClosest(vector<ll> A, vector<ll> B, vector<ll> C) 
{ 
	 ll p = sz(A), q = sz(B), r = sz(C);
  
    ll i=0,j=0,k=0,x,y; 
    for (ll i = 0; i < p; ++i){
  		x = lower_bound(B.begin(), B.end(),A[i]) - B.begin();	
  		y = lower_bound(C.begin(), C.end(),A[i]) - C.begin();
  		if(x==q)
  			x--;
  		if(y==r)
  			y--;
  		ans = min(ans,dist(A[i],B[x],C[y]));
  		if(x>0 and y >0){
  		ans = min(ans,dist(A[i],B[x-1],C[y]));	
  		ans = min(ans,dist(A[i],B[x-1],C[y-1]));
  		ans = min(ans,dist(A[i],B[x],C[y-1]));		
  		}
  		else if(x>0)ans = min(ans,dist(A[i],B[x-1],C[y]));	
  		else if(y>0)ans = min(ans,dist(A[i],B[x],C[y-1]));
    }
} 


void solve(){

  ll x=0,y=0;
  ll n,m,k;
  cin>>n >>m >> k;
  ans = LLONG_MAX;
  vector<ll> a(n),b(m),C(k);
  for (ll i = 0; i < n; ++i){
  cin>>a[i];
  }
  sort(a.begin(), a.end());
  for (ll i = 0; i < m; ++i){
  cin>>b[i];
  }
  sort(b.begin(), b.end());
  for (ll i = 0; i < k; ++i){
  cin>>C[i];
  }
  sort(C.begin(), C.end());
  findClosest(a,b,C);
  findClosest(b,a,C);
  findClosest(C,a,b);
  c(ans);

}

signed main(){
     
  ios_base::sync_with_stdio(false);   
  cin.tie(NULL);
  ll T;cin >> T;while (T--)
  solve();
  return 0;
}