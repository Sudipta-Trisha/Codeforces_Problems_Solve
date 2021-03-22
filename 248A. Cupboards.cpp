
// Problem: A. Cupboards
// Contest: Codeforces - Codeforces Round #152 (Div. 2)
// URL: https://codeforces.com/problemset/problem/248/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	int test;
	cin >> test;
	int left_0 = 0,left_1 = 0, right_0 = 0, right_1 = 0;
	while(test--){
		int l,r;
		cin >> l >> r;
		if(l == 0) left_0++;
		if(l == 1) left_1++;
		if(r == 0) right_0++;
		if(r == 1) right_1++;
	}
	
	int mini = min(left_0,left_1);
	mini += min(right_0, right_1);
	cout << mini << endl;
}