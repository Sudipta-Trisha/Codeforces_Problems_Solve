#include<bits/stdc++.h>
#define ll long long int
using namespace  std;
int main()
{
	ll n,m,cnt=0;
	cin>>n>>m;
	while(n>0 && m>0)
	{
		if(n==1 && m==1)
		{
			break;
		}
		if(n<m)
		{
			m = m - 2;
			n--;
			cnt++;
		}
		else
		{
			n-=2;
			m--;
		   cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
