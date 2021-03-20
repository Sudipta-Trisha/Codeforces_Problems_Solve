
// Problem: A. Meximization
// Contest: Codeforces - Codeforces Round #708 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1497/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		sort(a,a+n);
		vector<int>b;
		for(int i=0; i<n; i++){
			if(i==0 || a[i] != a[i-1]) b.push_back(a[i]);
		}
		
		for(int i=0; i<n; i++){
			if(i>0 && a[i] == a[i-1]) b.push_back(a[i]);
		}
		
		for(auto x: b) cout << x << " ";
		cout << endl;
	}
}