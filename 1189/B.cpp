
  #include <bits/stdc++.h>
  #include <cstdio>
  #include <cstring>
  #include <cmath>
  #include <cstring>
  #include <chrono>
  #include <complex>
  #define endl "\n"
  #define ll long long int
  #define vi vector<int>
  #define vll vector<ll>
  #define vvi vector < vi >
  #define pii pair<int,int>
  #define pll pair<long long, long long>
  #define mod 1000000007
  #define inf 1000000000000000001;
  #define all(c) c.begin(),c.end()
  #define mp(x,y) make_pair(x,y)
  #define mem(a,val) memset(a,val,sizeof(a))
  #define eb emplace_back
  #define f first
  #define s second
  
  using namespace std;
  int main()
  {
      #ifndef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
          #endif
    std::ios::sync_with_stdio(false);
    ll n;
  cin>>n;
  ll a[n];
  deque<ll>deq;

  for (ll i = 0; i < n; ++i)
  {
  cin>>a[i];
  }
  sort(a,a+n);

  for (int i = 0; i < n; ++i)
  {
      if(i%2==1)
        deq.push_front(a[i]);
      else deq.push_back(a[i]);
  }
  ll c= 0,b[n];

  for(auto it : deq)
  {
    b[c] = it;
    c++;
  }
  for (int i = 0; i < n-2; ++i)
  {
     
    if(b[i]+b[i+2]<=b[i+1])
    {
          cout<<"NO\n";
          return 0;
    }
  }if(b[1]+b[n-1]<=b[0])
  {
   cout<<"NO\n";
        return 0; 
  }
  if(b[0]+b[n-2]<=b[n-1])
  {
  cout<<"NO\n";
        return 0; 
  }
  cout<<"YES\n";
  for (int i = 0; i < n; ++i)
  {
     cout<<b[i]<<" ";
  }


    return 0;
  }