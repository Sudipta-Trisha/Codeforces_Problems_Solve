
// Problem: A. K-th Largest Value
// Contest: Codeforces - Codeforces Global Round 13
// URL: https://codeforces.com/problemset/problem/1491/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin >> n >> q;
	
	vector<int>v(n);
	int cnt=0;
	for(int i=0; i<n; i++){
		cin >> v[i];
		cnt += v[i];
	}
	
	while(q--){
		int a,b;
		cin >> a >> b;
		
		if(a == 1){
			if(v[b-1])
				cnt--;
			else cnt++;
			v[b-1] = 1 - v[b-1];
		}
		
		else{
			if(cnt >= b) cout << "1" << endl;
			else cout << "0" << endl;
		}
	}
}