
// Problem: A. Friends Meeting
// Contest: Codeforces - Codeforces Round #468 (Div. 2, based on Technocup 2018 Final Round)
// URL: https://codeforces.com/problemset/problem/931/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,x2;
	cin >> x1 >> x2;
	
	int diff = abs(x1-x2);
	
	int sum = 0;
	for(int i=1; i<=diff/2; i++){
		sum += i;
	}
	
	for(int i=1; i<=diff-(diff/2); i++){
		sum += i;
	}
	cout << sum << endl;
}
