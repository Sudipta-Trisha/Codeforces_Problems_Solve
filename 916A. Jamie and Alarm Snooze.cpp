
// Problem: A. Jamie and Alarm Snooze
// Contest: Codeforces - Codeforces Round #457 (Div. 2)
// URL: https://codeforces.com/problemset/problem/916/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	int h,m;
	cin >> h >> m;
	
	int temp = h*60 + m;
	
	for(int cnt=0; ;cnt++){
		h = temp/60; 
		m = temp%60;
		
		if(h/10==7 || h%10==7 || m/10==7 || m%10==7){
			cout << cnt << endl;
			return 0;
		}
		temp = (temp - n + 1440)%1440;
	}
	return 0;
}