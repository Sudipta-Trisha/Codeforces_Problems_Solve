
// Problem: A. Display Size
// Contest: Codeforces - Codeforces Round #387 (Div. 2)
// URL: https://codeforces.com/problemset/problem/747/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	int temp,index;
	for(int i=1; i<=sqrt(n); i++){
		if(n%i==0){
			 temp = n/i;
			 index = i;		 
		}
	}
	cout << index << " " << temp << endl;
}