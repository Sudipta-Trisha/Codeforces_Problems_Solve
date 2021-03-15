
// Problem: A. PolandBall and Hypothesis
// Contest: Codeforces - 8VC Venture Cup 2017 - Elimination Round
// URL: https://codeforces.com/problemset/problem/755/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	if(n == 1){
		cout << "3" << endl;
	}
	else if(n == 2)
		cout << "4" << endl;
	else
		cout << n-2 << endl;
}