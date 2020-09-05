
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 05, 2020 12:32 AM
 *    Problem Name  : A. Yet Another Two Integers Problem
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1409/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    ll test;
    cin >> test;

    while(test--) {
        ll a,b;
        cin >> a >> b;

        ll temp = abs(a-b);

        if(temp%10==0) cout << temp/10 << endl;
        else cout << (temp/10) + 1 << endl;
    }

    return 0 ;
}
