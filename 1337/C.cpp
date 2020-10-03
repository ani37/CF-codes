
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
vector<ll> adj[N];
vector<bool> vis(N),vs(N);
vector<ll> dis(N),par(N),ppr(N),sub(N);
priority_queue<pii>nodes;

	void dfs(ll x){

		vis[x]=1;
		bool leaf = 1;
		sub[x]++;
		for(auto i : adj[x]){
		
			if(!vis[i]){
				leaf = 0;
			
				par[i] = x; 
				dis[i] = dis[x] + 1;
				ppr[x]++;
				dfs(i);
				sub[x]+=sub[i];
			}
		}
		if(leaf){
			nodes.push({dis[x],x});
		}
	}



void solve(){

  ll x=0,y=0,c=0,ans=0;
  ll n,m,k;
  cin>>n >> k;
  for (ll i = 1; i < n; ++i){
  		
  	cin >> x >> y;
  	adj[x].pb(y);
  	adj[y].pb(x);
  }
  dis[1] = 0;

  dfs(1);
  while(k--){
  	auto it= nodes.top();
  	nodes.pop();
 
  	c+=it.F;
  	
  	if(ppr[par[it.S]]==1){
  		vs[par[it.S]] = 1;

  		nodes.push({dis[par[it.S]] - sub[par[it.S]]+1,par[it.S]});
  	}
  	ppr[par[it.S]]--;
  }
  c(c);

}

signed main(){
     
  ios_base::sync_with_stdio(false);   
  cin.tie(NULL);
  //int T;cin >> T;while (T--)
  solve();
  return 0;
}