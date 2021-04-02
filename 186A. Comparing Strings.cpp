
// Problem: A. Comparing Strings
// Contest: Codeforces - Codeforces Round #118 (Div. 2)
// URL: https://codeforces.com/problemset/problem/186/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	ll cnt=0;
	char c1[3],c2[3];
	
	if(s1.length() == s2.length()){
		ll index = 0;
		for(ll i=0; i<s1.length(); i++){
			if(s1[i] != s2[i] ) {
				c1[index] = s1[i];
				c2[index] = s2[i];
				index++;
				cnt++;
				
				if(cnt >=3) {
					cout << "NO" << endl;
					return 0;
				}
			}
		}
		
	}
	
	
	if(c1[0] == c2[1] && c1[1] == c2[0]) cout << "YES" << endl;
	else cout << "NO" << endl;
		
		
}
