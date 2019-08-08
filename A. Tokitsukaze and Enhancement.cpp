#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	if(n%4==1)
	{
		cout<<"0"<<" "<<"A"<<endl;
		return 0;
	}
	else if(n%4==2)
	{
		n++;
		if(n%4==3)
		{
			cout<<"1"<<" "<<"B"<<endl;
			return 0;
		}
	}
	else if(n%4==3)
	{
		cout<<"2"<<" "<<"A"<<endl;
		return 0;
	}
	else if(n%4==0)
	{
		n++;
		if(n%4==1)
		{
			cout<<"1"<<" "<<"A"<<endl;
			return 0;
		}
	}
	return 0;
}
