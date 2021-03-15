
// Problem: A. Perfect Squares
// Contest: Codeforces - Codecraft-18 and Codeforces Round #458 (Div. 1 + Div. 2, combined)
// URL: https://codeforces.com/problemset/problem/914/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	vector<int>v(n);
	int ans=0;
	for(int i=0; i<n; i++)
		cin >> v[i];
	sort(v.begin(),v.end());
		
	int maxx = 1e6+20;
	bool is_sqr[maxx] = {};
	for(int i=0; i*i<maxx; i++){
		is_sqr[i*i] = true;
	}
	
	for(int i=0; i<n; i++){
		if(v[i]<0 || is_sqr[v[i]]==false){
			ans = v[i];
		}
	}
	cout << ans << endl;
}