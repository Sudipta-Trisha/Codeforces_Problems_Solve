#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		ll b,p,f, profit=0;
		cin>> b>>p>>f;

		ll h,c;
		cin>>h>>c;

		if(c>=h)
		{
			int chicken  = min(b/2,f);
			profit = profit + (chicken*c);
			b = b - (chicken*2);

			int ham = min(b/2,p);
			profit = profit + (ham*h);
			b = b - (ham*2);
		}

		else
		{
			int ham = min(b/2,p);
			profit = profit + (ham*h);
			b = b - (ham*2);

			int chicken  = min(b/2,f);
			profit = profit + (chicken*c);
			b = b - (chicken*2);
		}

		cout<< profit << endl;
		
	}

	return 0;
}
			

			
			
