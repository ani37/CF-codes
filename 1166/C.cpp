#include <bits/stdc++.h>
using namespace std;
#define  ll long long
signed main() {
	ll n,c=0,x;
	cin>>n; 
	ll a[n];
	for(ll i=0;i<n;i++ )
	{
		cin>>a[i];
		if(a[i]<0)
		a[i]=-a[i];
	}
	sort(a,a+n);
	for(ll i=0;i<n;i++)
	{
		ll y = upper_bound(a,a+n,2*a[i]) - a;
			c+=(y-i-1);
		
	}
	cout<<c;
	
	
	return 0;
}