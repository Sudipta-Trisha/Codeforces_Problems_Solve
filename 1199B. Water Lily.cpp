#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int h,l;
	cin>>h>>l;
	double ans;
	
	ans = ((l*l)-(h*h)) / (double)(2*h);

	cout<<fixed;
	cout<<setprecision(13);
	cout<<ans<<endl;
	return 0;
}
