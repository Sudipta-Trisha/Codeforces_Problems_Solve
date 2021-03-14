
// Problem: A. Deadline
// Contest: Codeforces - Educational Codeforces Round 80 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1288/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--){
		int n,d;
		cin >> n >> d;
		
		int temp = (int)sqrt(d) + 10;
		
		bool flag = false;
		for(int i=0; i<temp; i++){
			if(i+(d+i)/(i+1) <= n){
				flag = true;
				break;
			}
		}
		
		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
