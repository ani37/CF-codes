#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define eb          emplace_back
#define c(P)        cout<<P<<"\n"
#define pii         pair<ll,ll>

using namespace std;


int main(){
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      ios_base::sync_with_stdio(false);   
      cin.tie(NULL);
       ll n,m,k,c;
  cin>>n>>m>>k;
  c= k*2 + 2*min(n,m);
  if(n!=m)
    c++;
  c(c);
      return 0;
    }