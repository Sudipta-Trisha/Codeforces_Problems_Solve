
// Problem: B. Repainting Street
// Contest: Codeforces - Technocup 2021 - Elimination Round 2
// URL: https://codeforces.com/problemset/problem/1415/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--){
		int n,x;
		cin >> n >> x;
		
		int arr[n];
		int ans = INT_MAX;
		set<int>s;
		for(int i=0; i<n; i++){
			 cin >> arr[i];
			 s.insert(arr[i]);
		}
		
		auto it = s.begin();
		while(it!=s.end()){
			int temp = 0;
			int k = *it;
			int i=0;
			while(i<n){
				if(k == arr[i]){
					i++;
				}
				else{
					temp++;
					i = i+x;
				}
			}
			ans = min(ans,temp);
			it++;
		}
		
		cout << ans << endl;
		
		
	}
}