#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll n;
	cin>>n;

	vector<ll>v(n);
	ll sum =0;
	for(int i=0; i<n; i++)
	{
		cin>>v[i];
		sum += v[i];
	}
	
	ll maxx = *max_element(v.begin(),v.end());

	if(sum%2==0 && sum>=2*maxx)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main()
{
	solve();
	return 0;
}

