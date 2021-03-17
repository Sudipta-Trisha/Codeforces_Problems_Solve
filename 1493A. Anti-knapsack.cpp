
// Problem: A. Anti-knapsack
// Contest: Codeforces - Codeforces Round #705 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1493/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	while(n--){
		int a,b;
		cin >> a >> b;
		
		vector<int>v;
		
		for(int i=(b+1)/2; i<b; i++){
			v.push_back(i);
		}
		
		for(int i=b+1; i<=a; i++){
			v.push_back(i);
		}
		
		cout << v.size() << endl;
		for(auto x: v){
			cout << x << " ";
		}
		cout << endl;
	}
}