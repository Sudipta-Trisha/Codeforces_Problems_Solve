// Problem: A. Lights Out
// Contest: Codeforces - Codeforces Round #168 (Div. 2)
// URL: https://codeforces.com/problemset/problem/275/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[4][4], temp[4][4];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin >> arr[i][j];
			temp[i][j] = arr[i][j];
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(arr[i][j] != 0){
				temp[i][j-1] += arr[i][j];
				temp[i][j+1] += arr[i][j];
				temp[i+1][j] += arr[i][j];
				temp[i-1][j] += arr[i][j];
			}
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(temp[i][j] %2==0) cout << "1";
			else cout << "0";
		}
		cout << endl;
	}
	cout << endl;

}