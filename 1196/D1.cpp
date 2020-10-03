
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define c(P)        cout<<P<<"\n"
#define dbg(P)      cout<<P<<" "
#define pii         pair<ll,ll>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define F           first
#define S           second
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,x,n)   for(ll i=x;i<n;i++)
#define frr(i,x,n)  for(ll i=n-1;i>=x;i--)


const ll N   =  500005;
const ll mod = 1e9 + 7;

using namespace std;

ll minimumChar(string S1, string S2) 
{ 
    // Get the sizes of both strings 
    ll n = S1.size(), m = S2.size(); 
  
    ll ans = LLONG_MAX; 
  
    // Traverse the string S2 
    for (ll i = 0; i < m - n + 1; i++) { 
        ll minRemovedChar = 0; 
  
        // From every index in S2, check the number of 
        // mis-matching characters in substring of 
        // length of S1 
        for (ll j = 0; j < n; j++) { 
            if (S1[j] != S2[i + j]) { 
                minRemovedChar++; 
            } 
        } 
  
        // Take minimum of prev and current mis-match 
        ans = min(minRemovedChar, ans); 
    } 
  
    // return answer 
    return ans; 
}
string str1 = "RGB",str2 = "GBR",str3 = "BRG"; 
void solve()
{
   string s,t1,t2,t3;
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n>>k>>s;
  
  for (ll i = 0; i < k; ++i)
  {
    t1+=str1[(i%3)];
    t2+=str2[(i%3)];
    t3+=str3[(i%3)];
  }
  x = (minimumChar(t1,s));
  y = min(x,minimumChar(t2,s));
  y  = min(y,minimumChar(t3,s));
  c(y);
 
}

signed main(){
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      ios_base::sync_with_stdio(false);   
      cin.tie(NULL);
      ll T=1;
      cin>>T;
      while(T--)
      {
      solve();
      }
      return 0;
    }