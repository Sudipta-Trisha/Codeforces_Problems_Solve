
// Problem: B. Borze
// Contest: Codeforces - Codeforces Beta Round #32 (Div. 2, Codeforces format)
// URL: https://codeforces.com/problemset/problem/32/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	string s;
	cin >> s;
	
	for(int i=0; i<s.length(); i++){
		if(s[i] == '.'){
			cout << "0";
			continue;
		}
		
		else if(s[i] == '-' && s[i+1] == '.'){
			cout << "1";
			i++;
			continue;
		}
		
		else if(s[i] == '-' && s[i+1] == '-'){
			cout << "2";
			i++;
			continue;
		}
	}
	cout << endl;
}