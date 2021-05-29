
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : 26/05/2021 21:30:41
 *    Problem Name  : C. Not Adjacent Matrix
 *    Problem Limit : 4000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1520/C
 *    @generated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll arr[n+1][n+1] = {0};

    if(n == 1) {
        cout << "1" << endl;
    }

    else if(n == 2) {
        cout << "-1" << endl;
    }

    else {
        ll cnt = 1;

        for(ll i=1; i<=n; i++) {
            arr[i][i] = cnt;
            cnt++;
        }

        for(ll i=2; i<=n; i++) {
            for(ll j=1; j<i; j++, cnt+=2) {
                arr[j][i] = cnt;
                arr[i][j] = cnt + 1;
            }
        }

        for(ll i=1; i<=n; i++) {
            for(ll j=1; j<=n; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
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