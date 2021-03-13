
// Problem: B. Balanced Remainders
// Contest: Codeforces - Codeforces Round #702 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1490/B
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
		int n;
		cin >> n;
		int arr[n],cnt[3]={0};
		for(int i=0; i<n; i++){
			cin >> arr[i];
			cnt[arr[i]%3]++;
		}
		
		int ans=0;
		while(*min_element(cnt,cnt+3) != n/3){
			for(int i=0; i<3; i++){
				if(cnt[i] > (n/3)){
					ans++;
					cnt[i]--;
					cnt[(i+1)%3]++;
				}
			}
		}
		
		cout << ans << endl;
	}
}