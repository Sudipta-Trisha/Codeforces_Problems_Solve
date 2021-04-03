
// Problem: A. Little Elephant and Bits
// Contest: Codeforces - Codeforces Round #157 (Div. 1)
// URL: https://codeforces.com/problemset/problem/258/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	
	string s1 = "";
	int index = -1;
	
	for(int i=0; i<s.length(); i++){
		if(s[i] == '1' && s[i+1] == '0'){
			s1 += s[i];
			index = i;
			break;
		}
		s1+=s[i];
	}
	
	if(index != -1){
		for(int i=index+2; i<s.length(); i++){
			s1 += s[i];
		}
		
		cout << s1 << endl;
		return 0;
	}
	
	else {
		for(int i=1; i<s1.length(); i++){
			cout << s1[i];
		}
		cout << endl;
		return 0;
	}
}