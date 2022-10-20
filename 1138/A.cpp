#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,i,j,r,a,t,tt;

void solve()
{

 ll x=0, y=0, c = 1, ans = 0;
 ll n, m, k;
 cin >> n >> m;
 ll a[n][m];
 mi mp;
 ll b[n],d[m];
 for (ll i = 0; i < n; ++i){
 	for (ll j = 0; j < m; ++j){
 		cin >> a[i][j];
 		b[i].insert(a[i][j]);
 		d[j].insert(a[i][j]);
 	}
 }
 	cout << '\n';
 }

 
}
int main(){
	solve();
}
