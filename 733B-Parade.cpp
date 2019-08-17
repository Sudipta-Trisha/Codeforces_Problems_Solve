#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;

	long long int x[n],y[n];
	int l=0, r=0;
	for(int i=0; i<n; i++)
	{
		cin>>x[i]>>y[i];
		l+=x[i], r+=y[i];
	}

	long long int max_b = abs(l-r);
	long long int indx = 0;
	long long int temp1,temp2,diff;

	for(int i=0; i<n; i++)
	{
		temp1 = l-x[i]+y[i];
		temp2 = r-y[i]+x[i];
		diff = abs(temp1-temp2);

		if(diff>max_b) {
			max_b = diff;
			indx = i+1;
		}
	}

	cout<<indx<<endl;
	return 0;
}
