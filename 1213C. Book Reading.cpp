#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll n,m;
	cin>>n>>m;

	ll sum = 0,cnt;
	for(ll i=m,cnt=1; i<=n; i+=m,cnt++)
	{
		if(cnt>10){
			break;
		}
		sum = sum + (i%10);
	}
	
	ll ans = (n/(m*10))*sum;

	ll extra = n%(m*10);

	for(ll i = m; i<=extra; i+=m)
	{
		ans += i%10;
	}
	cout<<ans<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	ll test;
	cin>>test;
	while(test--){
	solve();
	}
	return 0;
}
	
