
// Problem: B. Little Girl and Game
// Contest: Codeforces - Codeforces Round #169 (Div. 2)
// URL: https://codeforces.com/problemset/problem/276/B
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
	
	ll cnt[40] = {0};
	
	for(ll i=0; i<s.length(); i++){
		cnt[s[i] - 'a']++;
	}
	
	ll odd=0;
	for(ll i=0; i<26; i++){
		if(cnt[i] % 2 !=0 ) odd++;
	}
	
	if(odd == 0 || odd == 1){
		cout << "First" << endl;
	}
	
	else if(odd %2 == 0) cout << "Second" << endl;
	
	else cout << "First" << endl;
}