
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : 26/05/2021 17:13:35
 *    Problem Name  : B. Phoenix and Puzzle
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1515/B
 *    @generated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

bool check_sqr(ll num)
{
    ll temp = sqrt(num);
    if((temp * temp) == num ) 
        return true;
    return false;
}

void solve()
{
    ll n;
    cin >> n;

    if((n%2) == 0 && check_sqr(n/2)) cout << "YES" << endl;

    else if((n%4) == 0 && check_sqr(n/4)) cout << "YES" << endl;

    else cout << "NO" << endl;
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
