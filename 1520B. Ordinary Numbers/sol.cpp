
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : 06/05/2021 12:33:55
 *    Problem Name  : B. Ordinary Numbers
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1520/problem/B
 *    @generated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    if(n < 10) {
        cout << n << endl;
    }

    else if(n == 10) {
        cout << "9" << endl;
    }

    else {
        ll cnt = 0;
        for(ll i=1; i<=9; i++){
            ll sum = i;
            while(sum <= n) {
                sum = (sum*10) + i;
                cnt++;
            }
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
