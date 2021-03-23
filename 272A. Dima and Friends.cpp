
// Problem: A. Dima and Friends
// Contest: Codeforces - Codeforces Round #167 (Div. 2)
// URL: https://codeforces.com/problemset/problem/272/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	int sum = 0;
	for(int i=0; i<n; i++){
		int fingers;
		cin >> fingers;
		sum += fingers;
	}
		
	int cnt=0;
	for(int i=sum+1; i<=(sum+5); i++){
		if(i%(n+1) == 1) cnt++;
	}
	
	cout << 5-cnt << endl;
}