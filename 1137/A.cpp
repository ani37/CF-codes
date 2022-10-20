
#include<bits/stdc++.h>
#define ll          int
#define pb          push_back
#define c(P)        cout<<P<<" "
#define pii         pair<ll,ll>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define F           first
#define S           second
#define sz(a)       (ll)(a.size())
#define cr(P)       cout<<P<<"\n";return;
#define mem(a,val)  memset(a, val, sizeof(a))
#define fr(i,x,n)   for(ll i=x; i<n; i++)
#define frr(i,x,n)  for(ll i=n-1; i>=x; i--)
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree< ll,null_type,less<ll >,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int main(){
     
 ios_base::sync_with_stdio(false);   
 cin.tie(NULL);
 
 ll x=0, y=0, c = 1, ans = 0;
 ll n, m, k;
 cin >> n >> m;
 ll a[n][m];
 mi mp;
 ordered_set b[n],d[m];
 for (ll i = 0; i < n; ++i){
 	for (ll j = 0; j < m; ++j){
 		cin >> a[i][j];
 		b[i].insert(a[i][j]);
 		d[j].insert(a[i][j]);
 	}
 }

 for (ll i = 0; i < n; ++i){
 	for (ll j = 0; j < m; ++j){

 		x = b[i].order_of_key(a[i][j]);
 		y = d[j].order_of_key(a[i][j]);
 		
 		c = max(x,y) + max(sz(d[j]) - y,sz(b[i])- x);
 		cout << c << '\n';
 	} 
 	cout << '\n';
 }

 

 
 return 0;
}
