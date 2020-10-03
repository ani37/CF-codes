     
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
    #define mem(a,val)  memset(a,val,sizeof(a))
    #define fr(i,x,n)   for(ll i=x;i<n;i++)
    #define frr(i,x,n)  for(ll i=n-1;i>=x;i--)
    using namespace std;
     
    const ll N   =  500005;
    const ll mod = 1e9 + 7;
    std::vector<ll> adj[N];
    vector<bool> vis(N);
    vector<ll> par(N);
    ll n;
    vector<ll> bfs(ll x){

        vector<ll> dis(n+1,mod);
        queue<ll> nodes;
        dis[x] = 0;
        nodes.push(x);
        while(!nodes.empty()){
            x = nodes.front();
            nodes.pop();
        for(auto i : adj[x]){  
          if(dis[i]>dis[x]+1){
            dis[i] = dis[x]+1;
            nodes.push(i);
          }
        }
       }
       return dis;
      }

    void solve(){
     
      ll x=0,y=0,ans=1e18;
      ll m,k,a,b,c;
      cin>>n >> m >> a >> b >> c;
      ll arr[m+1] = {0};
      for (ll i = 1; i <= n; ++i){
          adj[i].clear();
          vis[i] = 0;
      }
     
      for (ll i = 1; i <= m; ++i){

        cin >> arr[i];
      }
      sort(arr+1,arr+m+1);
      
      for (ll i = 1; i <= m; ++i){
       // cin >> arr[i];
        arr[i]+=arr[i-1];
      }
      
      for (ll i = 0; i < m; ++i){
      cin>>x >> y;
      adj[x].pb(y);
      adj[y].pb(x);
      }

      vector<ll> va = bfs(a);
      vector<ll> vb = bfs(b);
      vector<ll> vc = bfs(c);

      for (ll i = 1; i <= n; ++i){
          
          if(va[i] + vb[i] + vc[i]<=m){
          //cout << va[i] << " " << vb[i] << " " << vc[i] << '\n';
           
            ans = min(ans,arr[va[i] + vb[i] + vc[i]] + arr[vb[i]]);
          }
      }
      cout << ans << '\n';

    }
     
    signed main(){
         
      ios_base::sync_with_stdio(false);   
      cin.tie(NULL);
      int T;cin >> T;while (T--)
      solve();
      return 0;
    }