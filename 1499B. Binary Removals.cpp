
// Problem: B. Binary Removals
// Contest: Codeforces - Educational Codeforces Round 106 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1499/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--){
		string s;
		cin >> s;
		
		bool ok = true;
		int i=0, len = s.length();
		for(i=0; i<len; i++){
			if(s[i]=='1' && s[i+1] == '1'){
				break;
			}
		}
		for(i=i+1; i<len-1; i++){
			if(s[i]=='0' && s[i+1]=='0'){
				ok = false; 
				break;
			}
			//index++;
		}
		
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}