
// Problem: A. Jzzhu and Children
// Contest: Codeforces - Codeforces Round #257 (Div. 2)
// URL: https://codeforces.com/problemset/problem/450/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;

	double maxx=0,index,num;
	for(int i=1; i<=n; i++){
		cin >> num;
		double temp = ceil(num/m);
		if(temp >= maxx){
			maxx = temp;
			index = i;
		}
	}
	
	cout << index << endl;
	
}