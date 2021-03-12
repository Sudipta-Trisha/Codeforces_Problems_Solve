
// Problem: A. ABC String
// Contest: Codeforces - Educational Codeforces Round 105 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1494/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;

void solve(string s)
{
	int n = s.length();
	string str = "";
	if(s[0] == s[n-1]){
		cout << "NO" << endl;
		return;
	}
	
	int open = 0, end = 0;
	for(int i=0; i<n; i++){
		if(s[0] == s[i]){
			open++;
			str+="(";
		}
		
		else if(s[n-1] == s[i]){
			end++;
			str+=")";
		}
		
		else{
			str += "/";
		}
	}
	
	int cnt = 0;
	for(int i=0; i<n; i++){
		if(str[i] == '/'){
			if(open>end) {
				str[i] = ')'; 
				cnt++;
			}
			else if(end > open) {
				str[i] = '(' ; 
				cnt++;
			}
		}
	}
	
	if(open > end) end+=cnt;
	else if(open < end) open += cnt;
	else if(open == end && cnt !=0){
		cout << "NO" << endl;
		return;
	}
	
	if(open == end && (open+end)<n){
		cout << "NO" << endl;
		return;
	}
	
	else{
		int open_bracket = 0, close_bracket = 0;
		
		for(int i=0; i<n; i++){
			if(str[i] == '('){
				open_bracket++;
			}
			else{
				close_bracket++;
				if(open_bracket > 0){
					open_bracket--, close_bracket--;
				}
			}
		}
		
		if(open_bracket == 0 && close_bracket==0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

int main()
{
	int test;
	cin >> test;
	
	while(test--){
		string s;
		cin >> s;
		
		solve(s);
	}
}