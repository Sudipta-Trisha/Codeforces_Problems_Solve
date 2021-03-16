
// Problem: C. Block Towers
// Contest: Codeforces - 8VC Venture Cup 2016 - Elimination Round
// URL: https://codeforces.com/problemset/problem/626/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	
	int maxx = 1e6+5;
	for(int i=0; i<=3*maxx; i++){
		int temp = ceil((2*i)/3);
		if((i/2 >=n) && (i/3 >= m) && (min(i/6,i/2-n)>=m-(i/3-i/6))){
			cout << i << endl;
			return 0;
		}
	}
}