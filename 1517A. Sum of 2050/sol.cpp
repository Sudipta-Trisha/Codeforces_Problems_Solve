
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : 22/05/2021 19:21:54
 *    Problem Name  : A. Sum of 2050
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1517/A
 *    @generated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll cnt = 0;
    
    if(n%2050 != 0) cout << "-1" << endl;
    else {
        ll cnt = 0;
        n /= 2050;

        while(n > 0) {
            cnt = cnt + ( n%10 );
            n /= 10;
        }

        cout << cnt << endl;
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

