
// Problem: A. Serval and Bus
// Contest: Codeforces - Codeforces Round #551 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1153/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin >> n >> t;
	
	int ans = INT_MAX, index=0;
	vector<int>v;
	
	for(int i=0; i<n; i++){
		int s,d;
		cin >> s >> d;
		
		while(s<t){
			s += d;
		}
		
		if(ans > s){
			ans = min(ans,s);
			index = i+1;
		}
	}
	
	cout << index << endl;
}