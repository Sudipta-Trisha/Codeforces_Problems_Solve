
// Problem: A. Triangular numbers
// Contest: Codeforces - Codeforces Beta Round #44 (Div. 2)
// URL: https://codeforces.com/problemset/problem/47/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin >> a;
	
	vector<int>v(501);
	
	for(int i=1; i<=501; i++){
		int temp = (i*(i+1))/2;
		v.push_back(temp);
	}
	bool flag = false;
	for(int i=0; i<v.size(); i++){
		if(v[i] == a) {
			flag = true;
			break;
		}
	}
	
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
}