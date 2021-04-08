
// Problem: A. Haiku
// Contest: Codeforces - Codeforces Beta Round #70 (Div. 2)
// URL: https://codeforces.com/problemset/problem/78/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	string s1,s2,s3;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
	
	ll vowel_1 = 0, vowel_2 = 0, vowel_3 = 0;
	
	for(ll i=0; i<s1.length(); i++){
		if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u') vowel_1++;
	}
	
	for(ll i=0; i<s2.length(); i++){
		if(s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u') vowel_2++;
	}
	
	for(ll i=0; i<s3.length(); i++){
		if(s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u') vowel_3++;
	}
	
	if(vowel_1 == 5 && vowel_2 == 7 && vowel_3 == 5){
		cout << "YES" << endl;
	}
	
	else
		cout << "NO" << endl;
}
