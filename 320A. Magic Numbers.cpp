
// Problem: A. Magic Numbers
// Contest: Codeforces - Codeforces Round #189 (Div. 2)
// URL: https://codeforces.com/problemset/problem/320/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	
	for(int i=0; i<s.length(); i++){
		if(s[0] != '1' || (s[i]=='4' && s[i+1]=='4' && s[i+2] == '4') || s[i]=='0' || s[i]=='2' || s[i]=='3'|| s[i]=='5' || s[i] == '6' || s[i]=='7' || s[i] == '8' || s[i] == '9'){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
}