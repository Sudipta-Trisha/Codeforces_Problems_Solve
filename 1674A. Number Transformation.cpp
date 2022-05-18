
// Problem: A. Number Transformation
// Contest: Codeforces - Codeforces Round #786 (Div. 3)
// URL: https://codeforces.com/contest/1674/problem/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--){
		int x,y;
		cin >> x >> y;
		
		if(x>y || (y%x)!=0)
			cout << "0 0" << endl;
		else 
			cout << "1" << " " << (y/x) << endl;
	}
}