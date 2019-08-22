#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin>>n;

	bool arr[1000000+90] = {};
	ll t = 1, r = 1e6;         //here t is stands for my position and r is for my friend's position
	ll time = 0;

	for(int i=0; i<n; i++)
	{
		int temp;
		cin>>temp;

		arr[temp] = 1;

	}

	while(n)
	{
		if(arr[t]==1)
		{

			n--;
		}
		if(arr[r]==1)
			n--;

		t++;
		r--;
		time++;
	}

	cout<<time-1<<endl;
	return 0;
}
			
