
// Problem: A. Squats
// Contest: Codeforces - Codeforces Round #242 (Div. 2)
// URL: https://codeforces.com/problemset/problem/424/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin >> n;
	
	char s[n];
	cin >> s;
	
	ll cnt_x = 0, cnt_X = 0;
	for(ll i=0; i<n; i++){
		if(s[i] == 'x') cnt_x++;
		else cnt_X++;
	}
	
	if(cnt_x == cnt_X){
		cout << 0 << endl;
		cout << s << endl;
	}
	
	else if(cnt_x > cnt_X){	
		cout << n/2 - cnt_X << endl;
		
		for(ll i=0; i<n && cnt_x != cnt_X; i++){
			if(s[i] == 'x'){
				 s[i] = 'X';
				cnt_x--;
				cnt_X++;
			}
		}
		
		cout << s << endl;
	}
			
	else{
		cout << n/2 - cnt_x << endl;
		
		for(ll i=0; i<n && cnt_x != cnt_X; i++){
			if(s[i] == 'X') {
				s[i] = 'x';
				cnt_x++;
				cnt_X--;
			}
		}
		
		cout << s << endl;
	}
	
	return 0;
}
