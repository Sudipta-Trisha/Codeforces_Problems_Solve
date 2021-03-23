
// Problem: A. Supercentral Point
// Contest: Codeforces - Codeforces Round #112 (Div. 2)
// URL: https://codeforces.com/problemset/problem/165/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	int x[n+1],y[n+1], cnt=0;
	
	for(int i=0; i<n; i++) {
		cin >> x[i] >> y[i];
	}
	
	int left,right,up,down;
	for(int i=0; i<n; i++){
		int x1 = x[i], y1 = y[i];
		left=0,right=0,up=0,down=0;
		
		for(int j=0; j<n; j++){
			if(x[j] == x1) {
				if(y1 < y[j] ) down++;
				if(y1 > y[j] ) up++;
			}
			
			if(y[j] == y1){
				if(x1 < x[j]) left++;
				if(x1 > x[j]) right++;
			}
		}
		
		if(left>0 && right>0 && up>0 && down>0) 
			 cnt++;
	}
	
	cout << cnt << endl;
}