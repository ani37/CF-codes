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
#define mem(a,val)  memset(a, val, sizeof(a))
#define fr(i,x,n)   for(ll i=x; i<n; i++)
#define frr(i,x,n)  for(ll i=n-1; i>=x; i--)
using namespace std;
 
 
const ll N   =  500005;
const ll mod = 1e9 + 7;
 
 
 
void solve(){
 
 ll x=0, y=0, c = 0, ans = 0;
 ll n, m, k;
 string s;
 cin >> n;
 cin >> s;
 if(n % 2){
 	cr(":(");
 }
 
 for (ll i = 0; i < s.size(); ++i){
 	if(s[i]=='(')
 		x++;
 	if(s[i] ==')')
 		y++;
 }
 
 ll cnt = n/2 - x;
 for (ll i = 0; i < n; ++i){
 	if(s[i] == '('){
 		c++;
 	}
 	else if(s[i] == ')'){
 		c--;
 	}
 	else if(s[i] =='?'){
 		if(cnt>0){
 			cnt--;
 			s[i] = '(';
 			c++;
 		}
 		else{
 			c--;
 			s[i] = ')';
 		}
 	}
 	
 	if(c <= 0  and i != n-1){
 		cr(":(");
 	}
 }
 if(c!= 0){
 	cr(":(");
 }
 c(s);
 
    
 
}
 
signed main(){
     
 ios_base::sync_with_stdio(false);   
 cin.tie(NULL);
 //int T;cin >> T;while (T--)
 solve();
 return 0;
}