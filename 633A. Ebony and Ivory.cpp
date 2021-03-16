
// Problem: A. Ebony and Ivory
// Contest: Codeforces - Manthan, Codefest 16
// URL: https://codeforces.com/problemset/problem/633/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	
	bool ans = false;
	
	for(int i=0; i<=c/a; i++){
		int x = c - i*a;
		if(x%b==0){
			ans = true;
			break;
		}
	}
	
	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;
}