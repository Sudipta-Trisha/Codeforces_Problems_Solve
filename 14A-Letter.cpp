#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;

	char s[n][m];
	long long int min_i=n, max_i=-1, min_j=m, max_j=-1;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>s[i][j];
			if(s[i][j]=='*'){
				if(min_i>i)
					min_i = i;
				if(max_i<i)
					max_i = i;
				if(min_j>j)
					min_j = j;
				if(max_j<j)
					max_j = j;
				}
			}
		}

	for(int i= min_i; i<=max_i; i++)
	{
		for(int j = min_j; j<=max_j; j++)
		{
			cout<<s[i][j];
		}
		cout<<endl;
	}

	return 0;
}
				
				
