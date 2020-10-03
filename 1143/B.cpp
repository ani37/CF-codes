
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define eb          emplace_back
#define c(P)        cout<<P<<"\n"
#define pii         pair<ll,ll>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define F           first
#define S           second
#define mp(x,y)     make_pair(x,y) 
#define exit(x)     cout<<x<<"\n",return
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,a,n)   for(ll i=a;i<n;i++)
#define frr(i,a,n)  for(ll i=n-1;i>=a;i--)


const ll N   =  500005;
const ll mod = 1e9 + 7;

using namespace std;
ll product(ll x) 
{ 
    ll prod = 1; 
    while (x) { 
        prod *= (x % 10); 
        x /= 10; 
    } 
    return prod; 
} 
  
// This function returns the number having 
// maximum product of the digits 
ll findNumber(ll l, ll r) 
{ 
    // Converting both llegers to strings 
    string a = to_string(l); 
    string b = to_string(r); 
  
    // Let the current answer be r 
    ll ans = r; 
    for (ll i = 0; i < b.size(); i++) { 
        if (b[i] == '0') 
            continue; 
  
        // Stores the current number having 
        // current digit one less than current 
        // digit in b 
        string curr = b; 
        curr[i] = ((curr[i] - '0') - 1) + '0'; 
  
        // Replace all following digits with 9 
        // to maximise the product 
        for (ll j = i + 1; j < curr.size(); j++) 
            curr[j] = '9'; 
  
        // Convert string to number 
        ll num = 0; 
        for (auto c : curr) 
            num = num * 10 + (c - '0'); 
  
        // Check if it lies in range and its product 
        // is greater than max product 
        if (num >= l && product(ans) < product(num)) 
            ans = num; 
    } 
  
    return ans; 
} 

void solve()
{
ll T=1;
//cin>>T;
while(T--)
  {
 // string s;
  ll n,m,k,x=0,y=0,c=1,q,ans=0;
  cin>>n;
  x =  findNumber(1, n);
  
  string s = to_string(x);
  for (int i = 0; i < s.length(); ++i)
  {
      c *= (s[i] - '0');
  }
  c(c);
 }
}

signed main(){
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      ios_base::sync_with_stdio(false);   
      cin.tie(NULL);
      solve();
      return 0;
    }