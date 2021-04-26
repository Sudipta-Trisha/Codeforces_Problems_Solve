
// Problem: A. Ksenia and Pan Scales
// Contest: Codeforces - Codeforces Round #224 (Div. 2)
// URL: https://codeforces.com/problemset/problem/382/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	string s1,s2;
	cin >> s1 >> s2;
	
	string left = "", right = "";
	ll index;
	for(ll i=0; i<s1.length(); i++){
		if(s1[i] == '|') {
			index = i;
			break;
		}
	}
	
	for(ll i=0; i<index; i++) left += s1[i];
	for(ll i=index+1; i<s1.length(); i++) right += s1[i];
	
	ll l = left.length(), r = right.length();
	
	ll total_len = l + r + s2.length();
	
	ll temp = abs(l-r);
	
	if(temp <= s2.length() && total_len%2 == 0 ) {
		left += s2.substr(0,(total_len/2) - l);
		right += s2.substr((total_len/2)-l, (total_len/2)-r);
		
		cout << left << "|" << right << endl;
	}
	
	else cout << "Impossible" << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	solve();
}
