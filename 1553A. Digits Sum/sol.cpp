
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : 18/08/2021 22:18:51
 *    Problem Name  : A. Digits Sum
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1553/A
 *    @generated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    if(n == 9) {
        cout << "1" << endl;
    }

    else {
        n++;
        cout << (int)n/10 << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    ll test;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0 ;
}