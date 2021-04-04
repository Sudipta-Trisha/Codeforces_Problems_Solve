
// Problem: A. Two Bags of Potatoes
// Contest: Codeforces - Codeforces Round #148 (Div. 2)
// URL: https://codeforces.com/problemset/problem/239/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll y,k,n;
	cin >> y >> k >> n;
	
	if((n-y) <= 0){
		cout << "-1" << endl;
		return 0;
	}
	
	else{
		vector<ll>div;
		ll temp = 1;
		for(ll i=1; i<=n; i++){
			temp = i*k;
			if(temp <= n)
				div.push_back(temp);
		}
		
		bool flag = false;
		for(ll i=0; i<div.size(); i++){
			if(div[i] > y) {
				flag = true;
				cout << div[i] - y << " ";
			}
			
		}
		cout << endl;
		if(!flag) {
			cout << "-1" << endl;
			return 0;
		}
	}
	return 0;
}
