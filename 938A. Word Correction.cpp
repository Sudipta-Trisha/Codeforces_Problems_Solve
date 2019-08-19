#include<bits/stdc++.h>
using namespace std;

bool isvowel(char ch)
{
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y')
		return true;
	return false;
}

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;

	int size = s.size();

	for(int i=0; i<size; i++)
	{
		if(!isvowel(s[i]) || !isvowel(s[i-1]))
		{
			cout<<s[i];
		}
	}
	cout<<endl;

	return 0;
}


