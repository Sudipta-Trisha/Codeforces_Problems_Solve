
// Problem: A. Colorful Stones (Simplified Edition)
// Contest: Codeforces - Codeforces Round #162 (Div. 2)
// URL: https://codeforces.com/problemset/problem/265/A
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
	
	ll index=1;
	for(ll i=0,j=0; i<s2.length(); i++){
		if(s1[j] == s2[i]){
			j++;
			index = j+1;
		}
	}	
	cout << index << endl;
}
