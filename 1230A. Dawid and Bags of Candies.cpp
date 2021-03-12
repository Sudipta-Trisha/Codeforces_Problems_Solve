
// Problem: A. Dawid and Bags of Candies
// Contest: Codeforces - Codeforces Round #588 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1230/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	vector<int>v;
	
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	v.push_back(d);
	
	sort(v.begin(),v.end());
	
	if(v[0]+v[1]+v[2] == v[3]){
		cout <<"YES" << endl;
	}
	else if(v[0]+v[1] == v[2]+v[3]){
		cout <<"YES" << endl;
	}
	else if(v[0]+v[3] == v[2]+v[1]){
		cout <<"YES" << endl;
	}
	else if(v[0]+v[2] == v[1]+v[3]){
		cout <<"YES" << endl;
	}
	
	else{
		cout << "NO" << endl;
	}
}