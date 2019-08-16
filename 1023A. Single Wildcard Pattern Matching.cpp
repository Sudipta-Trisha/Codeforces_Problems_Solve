#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;
	string s,t;
	cin>>s>>t;

	bool check = true;
	for(int i=0; i<n; i++)
	{
		if(s[i]=='*')
		{
			check = false;
		}
	}
	if(check)
	{   if(s==t){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	    }
	return 0;
    }

    if(n-1>m)
    {
		cout<<"NO"<<endl;
		return 0;
	}

	int first=0;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]=='*')
		{
			first--;
			break;
		}
		if(s[i]!=t[first])
		{
			cout<<"NO"<<endl;
			return 0;
		}
		first++;
	}

	int end=m-1;
	for(int i=n-1; i>0; i--)
	{
		if(s[i]=='*')
		{
			end++;
			break;
		}
		if(s[i]!=t[end])
		{
			cout<<"NO"<<endl;
			return 0;
		}
		end--;
	}
	if(first<=end){
		cout<<"YES";
		}
	else{
		cout<<"NO";
		}
	return 0;
}
	
	
