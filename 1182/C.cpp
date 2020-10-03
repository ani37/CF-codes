
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
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,a,n)   for(ll i=a;i<n;i++)
#define frr(i,a,n)  for(ll i=n-1;i>=a;i--)


const ll N   =  1000005;
const ll mod = 1e9 + 7;

using namespace std;
char a[] = {'a','e','i','o','u'};
std::map<pii,std::vector<ll>> v;
 std::map<char, ll> mp;
void solve()
{
  ll n,m,x=0,y=0,c=0,q,ans=0;
  cin>>n;
  string s[n];
  mp['a'] = 0;
  mp['e'] = 1;
  mp['i'] = 2;
  mp['o'] = 3;
  mp['u'] = 4;
  char ch='a';
 // std::vector<ll> v[N];
  char st[n];
  for (ll i = 0; i < n; ++i)
  {
  cin>>s[i];
  c = 0;
  fr(j,0,s[i].size())
  {
  fr(k,0,5)
  {
  if(s[i][j]==a[k])
  {
    c++;
    ch = s[i][j];
  }
    
  }
  }  
       v[{c,mp[ch]}].pb(i);

  }
  std::vector<pair<pii,pii > > vec;
  std::vector<pii> v1,v2;
  //std::vector<s> v;
  for (auto it : v)
  {     if(it.F.F==0)
      continue;
     std::vector<ll> vect;
      fr(j,0,5)
      { 
        x = v[{it.F.F,j}].size();
        while(x>1)
        {
           v[{it.F.F,j}].back();
              ll t1 =  v[{it.F.F,j}].back();
              v[{it.F.F,j}].pop_back();
            ll t2 =  v[{it.F.F,j}].back();
              v[{it.F.F,j}].pop_back();
              x-=2;
              v1.pb({t1,t2});  
              //cout<<t1<<" "<<t2<<"\n";
       }
        x = v[{it.F.F,j}].size();
      if(x%2!=0)
        {
          vect.pb(v[{it.F.F,j}].back());
           v[{it.F.F,j}].pop_back();
        //  cout<<v[{it.F.F,j}].back()<<" ";
        }

    }

        
      for (int  z= 0; z < (vect.size()/2)*2; z+=2)
       {
          v2.pb({vect[z],vect[z+1]});
        //  cout<<vect[z]<<" "<<vect[z+10]<<"\n";
       }
    }
    x = min(v1.size(),v2.size());
    for (int i = 0; i < x; ++i)
     {
       vec.pb({{v2[i].F,v2[i].S},{v1[i].F,v1[i].S}});
     }
     for (int i = (v1.size()-1); i >x ; i-=2)
     {
            vec.pb({{v1[i].F,v1[i].S},{v1[i-1].F,v1[i-1].S}});
     }
     c(vec.size());
     for (int i = 0; i < vec.size(); ++i)
     {
      cout<<s[vec[i].F.F]<<" "<<s[vec[i].S.F]<<"\n"<<s[vec[i].F.S]<<" "<<s[vec[i].S.S]<<"\n";
     }

}

signed main(){
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      ios_base::sync_with_stdio(false);   
      cin.tie(NULL);
      ll T=1;
      //cin>>T;
      while(T--)
      {
      solve();
      }
      return 0;
    }