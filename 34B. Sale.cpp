
// Problem: B. Sale
// Contest: Codeforces - Codeforces Beta Round #34 (Div. 2)
// URL: https://codeforces.com/problemset/problem/34/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	vector<int>neg(m,0);
	
	for(int i=0; i<n; i++){
		int num;
		cin >> num;
		
		if(num < 0) neg.push_back(abs(num));
	}
	
	sort(neg.begin(), neg.end(), greater<int>());
	int sum = 0 , i=0;
	while(i<m){
		sum += neg[i];
		i++;
	}
	cout << sum << endl;
}