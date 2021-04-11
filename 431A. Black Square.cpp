
// Problem: A. Black Square
// Contest: Codeforces - Codeforces Round #247 (Div. 2)
// URL: https://codeforces.com/problemset/problem/431/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll a1, a2 , a3, a4;
	cin >> a1 >> a2 >> a3 >> a4;
	
	string s;
	cin >> s;
	
	ll total_cal = 0;
	
	for(ll i=0; i<s.length(); i++){
		if(s[i] == '1'){
			total_cal += a1;
		}
		
		else if(s[i] == '2'){
			total_cal += a2;
		}
		
		else if(s[i] == '3'){
			total_cal += a3;
		}
		
		else if(s[i] == '4'){
			total_cal += a4;
		}
	}
	
	cout << total_cal << endl;
}
