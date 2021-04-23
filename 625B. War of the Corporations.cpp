
// Problem: B. War of the Corporations
// Contest: Codeforces - Codeforces Round #342 (Div. 2)
// URL: https://codeforces.com/problemset/problem/625/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	
	ll cnt = 0, ans = 0;
	
	ll s1_size = s1.length(), s2_size = s2.length();
	for(ll i=0; i<s1_size; i++){
		
		if(s1.substr(i,s2_size) == s2){
			cnt++;
			i = i + s2.size() - 1;
		}
	}
	cout << cnt << endl;
}
