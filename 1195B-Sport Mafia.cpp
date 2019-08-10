#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	int sum = 0;
	for(long long int i=1; i<=n; i++)
	{
		sum = sum + i;
		if((sum-k)==(n-i))
		{
			cout<<n-i<<endl;
			break;
		}
	}
	return 0;
}
