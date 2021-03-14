
// Problem: A. Make a triangle!
// Contest: Codeforces - Codeforces Round #516 (Div. 2, by Moscow Team Olympiad)
// URL: https://codeforces.com/problemset/problem/1064/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[3];
	for(int i=0; i<3; i++){
		cin >> arr[i];
	}
	
	sort(arr,arr+3);
	
	if(arr[0]+arr[1] > arr[2]){
		cout << "0" << endl;
	}
	
	else{
		cout << (arr[2]-arr[1]-arr[0])+1 << endl;
	}
}