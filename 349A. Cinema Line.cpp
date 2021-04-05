
// Problem: A. Cinema Line
// Contest: Codeforces - Codeforces Round #202 (Div. 2)
// URL: https://codeforces.com/problemset/problem/349/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin >> n;
	
	ll a[n], cnt_25=0, cnt_50=0, cnt_100=0;
	for(ll i=0; i<n; i++) {
		cin >> a[i];
	}

	bool flag = true;
	for(ll i=0; i<n; i++){
		if(a[i] == 25){
			cnt_25++;
		}
		else if(a[i] == 50){
			if(cnt_25 >= 1) {
				flag = true;
				cnt_25 -= 1;
				cnt_50++;
			}
			else{
				flag = false;
				break;
			}
		}
		
		else {
			if(cnt_25>0 && cnt_50>0){
				flag = true;
				cnt_25 -= 1;
				cnt_50 -= 1;
			}
			
			else if(cnt_25 >= 3){
				flag = true;
				cnt_25 -= 3;
			}
			
			else{
				flag = false;
				break;
			}
		}
	}
	if(flag)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
}
