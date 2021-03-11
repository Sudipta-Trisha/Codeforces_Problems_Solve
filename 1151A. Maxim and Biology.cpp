
// Problem: A. Maxim and Biology
// Contest: Codeforces - Codeforces Round #553 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1151/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string str;
	cin >> str;
	
	int ans = INT_MAX;
	for(int i=0; i<=n-4; i++){
		int total = 0;
		
		int temp1 = abs(str[i]-'A');
		int temp2 = 26-temp1;
		int A = min(temp1,temp2);
		
		temp1 = abs(str[i+1]-'C');
		temp2 = 26-temp1;
		int C = min(temp1,temp2);
		
		temp1 = abs(str[i+2]-'T');
		temp2 = 26-temp1;
		int T = min(temp1,temp2);
		
		temp1 = abs(str[i+3]-'G');
		temp2 = 26-temp1;
		int G = min(temp1,temp2);
		
		total = A + C + T + G;
		
		ans = min(ans,total);
		
	}
	
	cout << ans << endl;
}