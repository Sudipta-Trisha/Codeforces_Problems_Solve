#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,m;
	cin>>n;

	ll a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	sort(a,a+n);
		
	cin>>m;
	ll b[m];
	for(int i=0; i<m; i++)
	{
		cin>>b[i];
	}
	sort(b,b+m);

	cout<<a[n-1]<<" "<<b[m-1]<<endl;
	return 0;
}
