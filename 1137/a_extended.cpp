// remove unnessary imports
#include<bits/stdc++.h>
using namespace std;

// initialise the main function
int main(){
     
 ios_base::sync_with_stdio(false);   
 cin.tie(NULL);
 
 int x=0, y=0, c = 1, ans = 0;
 int n, m, k;
 cin >> n >> m;
 int a[n][m];
 map<int,int> mp;
 // import and define an order set
 ordered_set b[n],d[m];
 for (int i = 0; i < n; ++i){
 	for (int j = 0; j < m; ++j){
 		cin >> a[i][j];
 		b[i].insert(a[i][j]);
 		d[j].insert(a[i][j]);
 	}
 }

 for (int i = 0; i < n; ++i){
 	for (int j = 0; j < m; ++j){

 		x = b[i].order_of_key(a[i][j]);
 		y = d[j].order_of_key(a[i][j]);
 		
 		c = max(x,y) + max(sz(d[j]) - y,sz(b[i])- x);
 		cout << c << '\n';
 	} 
 	cout << '\n';
 }

 return 0;
}
