#include<bits/stdc++.h>
#define ll long long int;
using namespace std;

int main()
{
	string s;
	cin>>s;

	int cnt=0, jump=0;
	int size = s.size();

	for(int i=0; i<size; i++)
	{
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
		{
			cnt = 0;
		}
		else{
			cnt++;
			if(cnt>jump)
			{
				jump = cnt;
			}
		}
	}
	cout<< jump + 1 <<endl;
	return 0;
}

