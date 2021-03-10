
// Problem: A. Distinct Digits
// Contest: Codeforces - Codeforces Round #589 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1228/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	bool flag;
	
	for(int i=a; i<=b; i++){
		int temp = i;
		int cnt[10] = {0};
		flag = true;
		
		while(temp){
			int rem = temp%10;
			cnt[rem]++;
			temp/=10;
			
			if(cnt[rem] > 1){
				flag = false;
				break;
			}
		}
		
		if(flag){
			cout << i << endl;
			return 0;
		}
	}
	
	cout << "-1" << endl;
}