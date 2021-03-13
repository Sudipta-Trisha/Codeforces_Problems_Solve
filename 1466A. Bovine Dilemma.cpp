
// Problem: A. Bovine Dilemma
// Contest: Codeforces - Good Bye 2020
// URL: https://codeforces.com/problemset/problem/1466/A
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
		
		vector<int>v(n);
		set<int>s;
		
		for(int i=0; i<n; i++)
			cin >> v[i];
			
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				s.insert(v[j]-v[i]);
			}
		}
		
		cout << s.size() << endl;
	}
}
