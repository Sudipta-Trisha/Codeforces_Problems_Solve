
// Problem: A. Broken Keyboard
// Contest: Codeforces - Educational Codeforces Round 75 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1251/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
		
		int len = s.size();
		int cnt[600] = {0};
		
		for(int i=0; i<len; i++){
			if(s[i] == s[i+1]){
				i++;
			}
			else{
				cnt[s[i]]++;
			}
		}
		
		for(int i='a'; i<='z'; i++){
			if(cnt[i] > 0)
				cout << char(i);
		}
		cout << endl;
		
		
	}
}
