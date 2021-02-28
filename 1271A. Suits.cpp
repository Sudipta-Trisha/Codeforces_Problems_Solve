
// Problem: A. Suits
// Contest: Codeforces - Codeforces Round #608 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1271/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cin >>a >> b>> c>> d>> e>> f;
	
	int cnt=0;
	if( e >= f){
		int mini = min(a,d);
		a = a - mini;
		d = d - mini;
		cnt = cnt+ (e * mini);
		if(d>0){
			int mini = min({b,c,d});
			b = b - mini;
			c = c - mini;
			d = d - mini;
			
			cnt = cnt + (f*mini);
		}
	}
	
	else{
		int mini = min({b,c,d});
		b = b - mini;
		c = c - mini;
		d = d - mini;
		
		cnt = cnt + (f*mini);
		
		if(d>0){
			int mini = min(a,d);
			a = a - mini;
			d = d - mini;
			cnt = cnt+ (e * mini);
		}
		
	}
	
	cout << cnt << endl;
}