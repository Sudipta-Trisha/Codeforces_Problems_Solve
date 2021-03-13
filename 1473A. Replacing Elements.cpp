
// Problem: A. Replacing Elements
// Contest: Codeforces - Educational Codeforces Round 102 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1473/problem/A
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
		int n, d;
		cin >> n >> d;
		
		int arr[n];
		bool flag = true;
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);
		
		for(int i=0; i<n; i++){
			if(d < arr[i]){
				arr[i] = arr[0]+arr[1];
			}
		}
		
		for(int i=0; i<n; i++){
			if(d < arr[i]){
				flag = false;
				break;
			}
		}
		
		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}