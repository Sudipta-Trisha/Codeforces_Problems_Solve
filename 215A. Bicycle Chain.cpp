
// Problem: A. Bicycle Chain
// Contest: Codeforces - Codeforces Round #132 (Div. 2)
// URL: https://codeforces.com/problemset/problem/215/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	
	int m;
	cin >> m;
	int b[m];
	for(int i=0; i<m; i++) cin >> b[i];
	
	int maxx=0, cnt=1;
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(b[i]%a[j]==0) {
				if(maxx < b[i]/a[j]){
					maxx = max(maxx,b[i]/a[j]);
					cnt=1;
				}
				else if( maxx == b[i]/a[j]) cnt++;
			}
		}
	}
	cout << cnt << endl;
}