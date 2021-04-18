
// Problem: B. Lucky Substring
// Contest: Codeforces - Codeforces Beta Round #91 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/122/B
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
	
	ll cnt_4 = 0, cnt_7 = 0;
	sort(s.begin(), s.end());
	
	for(auto x: s){
		if ( x == '4') cnt_4++;
		else if( x == '7') cnt_7++;
	}
	
	if(cnt_4 >= cnt_7 && cnt_4>0) cout << "4" << endl;
	else if(cnt_4 < cnt_7) cout << "7" << endl;
	else cout << "-1" << endl;
}
